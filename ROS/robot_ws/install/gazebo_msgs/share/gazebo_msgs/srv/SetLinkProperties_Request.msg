string link_name          # name of link
                          # link names are prefixed by model name, e.g. pr2::base_link
geometry_msgs/Pose com    # center of mass location in link frame
                          # and orientation of the moment of inertias
                          # relative to the link frame
bool gravity_mode         # set gravity mode on/off
float64 mass              # linear mass of link
float64 ixx               # moment of inertia
float64 ixy               # moment of inertia
float64 ixz               # moment of inertia
float64 iyy               # moment of inertia
float64 iyz               # moment of inertia
float64 izz               # moment of inertia
