# Flag to add/stop LiDAR data to subsequent sensor messages.
bool use_lidar
# Minimum LiDAR angle to consider while interpolating the LiDAR data.
float32 min_angle
# Maximum LiDAR angle to consider while interpolating the LiDAR data.
float32 max_angle
# Number of LiDAR distance value to interpolate the LiDAR data.
int32 num_values
# Minimum distance from which the LiDAR distance data is considered valid.
float32 min_distance
# Maximum distance up to which the LiDAR distance data is considered valid.
float32 max_distance
# Distance value to clip the maximum LiDAR distance data.
float32 clipping_distance
# Number of sectors to consider while processing LiDAR data as binary sectors.
int32 num_sectors
# Type of LiDAR data preprocessing (SECTOR, DEFAULT).
int8 preprocess_type
