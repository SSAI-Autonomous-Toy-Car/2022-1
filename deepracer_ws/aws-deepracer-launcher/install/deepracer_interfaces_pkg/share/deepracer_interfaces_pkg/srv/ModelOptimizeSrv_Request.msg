# Name of the model folder where the model.pb file is present.
string model_name
# Identifiers for the sensors used by the model during training.
int32[] model_metadata_sensors
# Identifier for the training algorithm used by the model during training.
int32 training_algorithm
# "BGR" / "RGB" image format required to be set to run optimizer.
string img_format
# Width of the input image.
int32 width
# Height of the input image.
int32 height
# Number of channels of the input image.
int32 num_channels
# Number of distance values the model expects for LiDAR head.
int32 lidar_channels
# Identifier for the machine learning platform type used by the model during training.
# (Tensorflow, mxnet)
int32 platform
