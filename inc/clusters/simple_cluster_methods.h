#ifndef TCC_SIMPLE_CLUSTER_METHODS_H
#define TCC_SIMPLE_CLUSTER_METHODS_H

int count_common_particles(const int *cluster_1, const int *cluster_2, int cluster_1_size, int cluster_2_size,
                           int *common_particle_ids);

int count_uncommon_particles(const int *cluster_1, const int *cluster_2, int clus_1_size, int clus_2_size, int *uncommon_particle_ids);

int count_common_spindle_particles(const int *cluster_1, const int *cluster_2, int cluster_1_size, int cluster_2_size, int *common_spindle_ids);

int get_uncommon_spindle(const int *cluster, int cluster_size, int common_spindle_id);

int is_particle_in_cluster(const int *cluster, int cluster_size, int particle_id);

int are_clusters_distinct(const int *cluster_1, const int *cluster_2, int cluster_1_size, int cluster_2_size);

int check_unique_cluster(const int *trial, int cluster_size, int **cluster_list, int num_clusters);

int count_cluster_bonds_to_particle(int particle_id, int *cluster, int cluster_size, int *bonded_ids);

#endif
