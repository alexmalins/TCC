#ifndef CLUSTERS_H
#define CLUSTERS_H

void Clusters_Get6Z_C2v(int f);   // Detect 6Z clusters from 2 5A clusters
void Cluster_Write_6Z(int f, char *ach);

void Clusters_Get7K(int f);   // Detect 7K clusters from 2 5A clusters
void Cluster_Write_7K(int f, char *ach);

void Clusters_Get8A_D2d(int f);// Detect 8A D2d clusters
void Cluster_Write_8A(int f, char *ach);

void Clusters_Get8B_Cs(int f);// Detect 8B Cs clusters
void Clusters_8B_loop(int f, int i, char *ach, int clusSize, int s1, int s2);
void Cluster_Write_8B(int f, char *ach);

void Clusters_Get8K(int f);   // Detect 8K clusters
void Cluster_Write_8K(int f, char *ach);

void Clusters_Get9A_D3h(int f);   // Detect 9A D3h clusters
void Cluster_Write_9A(int f, char *ach);

void Clusters_Get9B_10B_11B_11E_12D(int f);   // Detect 9B, 10B, 11A, 11E & 12D

void Clusters_Get10B_C3v(int f, int i, int j, char *ach, char *ach_cen, char *ach_shell, char *ach1, char *ach1_cen, char *ach1_shell);       // Return 1 if 9B is also 10B cluster

int Clusters_Get11B_C2v(int f, char *ach, char *ach_cen, char *ach_shell);// Detect 11B C2v clusters

int Clusters_Get11W_Cs(int f, char *ach, char *ach_cen, char *ach_shell); // Detect 11W C2s clusters

void Clusters_Get11E_12D(int f, int i, int j, int sp1, int sp2i, int sp2j, char *ach1, char *ach2);   // Returns number of 11Es for a single 9B
void Clust_Write_11E(int f, char *ach1);

int Clusters_Get12D_D2d(int f, int i, int j, int k, int sp1, int sp2, char *ach); // Return 1 if 12B is also 11E

void Clusters_Get9K(int f);// Detect 9K & 10K clusters


void Clusters_Get10K(int f);// Detect 10K clusters
int is_particle_in_9K(int id_9k, int id_particle);
void Cluster_Write_10K(int f, int id_9K, int ep);

void Clusters_Get10A_C3v(int f);// Detect 10A D4d clusters
void Cluster_Write_10A(int f, char *ach);

void Clusters_Get10W(int f);// Detect 10W clusters
void Cluster_Write_10W(int f, char *ach, char *ach_cen, char *ach_shell);

// Detect 11A clusters
void Clusters_Get11A(int f) ;
int Check_unique_6A_rings(int first_6A_id, int second_6A_id);
int Check_6A_rings_bonded(int first_6A_id, int second_6A_id);
void Cluster_Write_11A(int f, int first_6A_id, int second_6A_id, const int sother[], int scom);

void Clusters_Get12K(int f);   // Detect 12K clusters
void get_12K_ring_bonds(int ptr_11A, int (*sp3_rings)[3]);
void find_12K_cluster(int f, int ptr_11A, const int *sp3_ring);
int is_particle_in_11A(int ptr_11A, int particle_id);
void Cluster_Write_12K(int f, int ep, int id_11A);

void Clusters_Get11C_12A(int f);// Detect 11C Cs & 12A C2v clusters

int Clusters_Get12A_C2v(int f, char *ach, char *ach_cen, char *ach_shell);// Return 1 if 11C C2v is also 12A C2v

void Clusters_Get11F_12E_13K(int f) ;  // Detect 11F C2v & 12E 3h

int Clusters_Get12E_D3h(int f, int j, char *ach); // Return 1 is 11F is also 12E

int Clusters_Get13K(int f, int sp3c_i, int sp3c_j, int the6A_i, char *ach, char *ach_cen, char *ach_shell);   // Detect 13A clusters

void Clusters_Get12B_13A(int f);// Detect 12B & 13A D5h clusters together
void Clust_Write_12B(int f, char *ach1, char *ach1_cen, char *ach1_shell);
void Clust_Write_13A(int f, char *ach2, char *ach2_cen, char *ach2_shell);

void Clusters_Get13B_D5h(int f);  // Detect 13B D5h clusters, i.e. twisted icosahedra
void Cluster_Write_13B(int f, char *ach, char *ach_cen, char *ach_shell);

void Clusters_GetFCC(int f);  // Detect 13 particle FCC clusters
void Cluster_Write_FCC(int f, char *ach, char *ach_cen, char *ach_shell);

void Clusters_GetHCP(int f);  // Detect 13 particle HCP clusters
void Cluster_Write_HCP(int f, int i, int j, int j2, int k, char *ach, char *ach_cen, char *ach_shell);

void Clusters_GetBCC_9(int f);
void Cluster_Write_BCC9(int f, char *ach, char *ach_cen, char *ach_shell);

void Clusters_GetBCC_15(int f);   // Detect 15 particle BCC clusters
void Cluster_Write_BCC_15(int f, char *ach, char *ach_cen, char *ach_shell, int clusSize);

#endif