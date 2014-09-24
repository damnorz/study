//#include<stdio.h>
//
//
//int num [] = {1,2,3,4,5,6,7,8,9,0};
//int *id ;
//int *sz;
//
//
//void QuickUnionUF(int N)
//{
//	id = new int[N];
//	for (int i = 0; i < N; i++) id[i] = i;
//	sz = new int[N];
//	for (int i = 0; i < N; i++) sz[i] = 1;
//}
//int root(int i)
//{
//while (i != id[i]) i = id[i];
//return i;
//}
//bool connected(int p, int q)
//{
//return root(p) == root(q);
//}
//void unionNUM(int p, int q)
//{
//int i = root(p);
//int j = root(q);
//if (i == j) return;
//if (sz[i] < sz[j]) { id[i] = j; sz[j] += sz[i]; } 
//else { id[j] = i; sz[i] += sz[j]; } 
//}
//
//
//
//
//int main()
//{
//	QuickUnionUF(10);
//
//
//}