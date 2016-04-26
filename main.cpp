#include "heap.hpp"
#include "Huffman.hpp"
void Test1()
{
	int a[10] = { 10, 11, 13, 12, 16, 18, 15, 17, 14, 19 };
	Heap<int, Greater<int> > hp1(a, 10);
	hp1.Push(1);
	hp1.Print();

	Heap<int> hp2(a, 10);
	hp2.Push(1);
	hp2.Print();


	//Less<int> less;
	//cout<<less(1, 2)<<endl;

	//Greater<int> greater;
	//cout<<greater(1, 2)<<endl;
}


void Test2()
{
	int a[10] = { 10, 11, 13, 12, 16, 18, 15, 17, 14, 19 };
	HuffmanTree<int> hp1;
	hp1.Create(a, 10, -1);
	
}


void main()
{
	Test2();
	//TestPriorityQueue();
}
