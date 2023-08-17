import pybullet_data
import pybullet as p
import os
import misc_utils as mu
import trimesh
from ur5_robotiq_pybullet import load_ur_robotiq_robot, UR5RobotiqPybulletController
import time

# physicsClient = p.connect(p.GUI)
# p.setAdditionalSearchPath(pybullet_data.getDataPath())
# plane = p.loadURDF("plane.urdf")
mu.configure_pybullet(True)

# plane = p.loadURDF("plane.urdf")
object_name = 'bleach_cleanser'
mesh_dir = os.path.abspath('assets/models')
object_mesh_filepath = os.path.join(mesh_dir, '{}'.format(object_name), '{}.obj'.format(object_name))
object_mesh_filepath_ply = object_mesh_filepath.replace('.obj', '.ply')
target_urdf = mu.create_object_urdf(object_mesh_filepath, object_name,
                                    urdf_target_object_filepath='assets/{}_target.urdf'.format(object_name))
target_mesh = trimesh.load_mesh(object_mesh_filepath)
target_extents = target_mesh.bounding_box.extents.tolist()
floor_offset = target_mesh.bounds.min(0)[2]
conveyor_thickness = 0.02
target_z = -target_mesh.bounds.min(0)[2] + conveyor_thickness
target_initial_pose = [[0.3, 0.3, target_z], [0, 0, 0, 1]]
robot_initial_pose = [[0, 0, 0], [0, 0, 0, 1]]
target = p.loadURDF(target_urdf, target_initial_pose[0], target_initial_pose[1])

robot_id = load_ur_robotiq_robot(robot_initial_pose)
robot = UR5RobotiqPybulletController(robot_id)
p.changeDynamics(target, -1, mass=1,
                    frictionAnchor=1, restitution=0.1,
                    spinningFriction=0, rollingFriction=0.01, lateralFriction=0.9)
for joint in range(p.getNumJoints(robot.id)):
    p.changeDynamics(robot.id, joint, mass=1)
p.setPhysicsEngineParameter(numSolverIterations=150, enableConeFriction=1, contactBreakingThreshold=1e-3)

while True:
    p.stepSimulation()
    time.sleep(1./240)