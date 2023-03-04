//#include<iostream>
//#include<string>
//using namespace std;
//
//const int N = 100010;
//int heap[N];
//int i_to_k[N];//表示堆中第i个位置的数是第k个插入的
//int k_to_i[N];//表示第k个插入的数在堆中的下标
//
//int n = 0, k = 0;
//
//void heap_swap(int i, int j)
//{
//    swap(heap[i], heap[j]);
//    swap(i_to_k[i], i_to_k[j]);
//    swap(k_to_i[i_to_k[i]], k_to_i[i_to_k[j]]);
//}
//
//void down(int i)
//{
//    int min_i = i;
//    if (2 * i <= n && heap[2 * i] < heap[min_i])
//        min_i = 2 * i;
//    if (2 * i + 1 <= n && heap[2 * i + 1] < heap[min_i])
//        min_i = 2 * i + 1;
//    if (min_i != i)
//    {
//        heap_swap(min_i, i);
//        down(min_i);
//    }
//}
//
//void up(int i)
//{
//    while (i / 2 >= 1 && heap[i / 2] > heap[i])
//    {
//        heap_swap(i / 2, i);
//        i /= 2;
//    }
//}
//
//
//int main()
//{
//    int x,kk;
//    int m;
//    cin >> m;
//    string op;
//    while (m--)
//    {
//        cin >> op;
//        if (op == "I")
//        {
//            n++;
//            k++;
//            i_to_k[n] = k;
//            k_to_i[k] = n;
//            cin >> x;
//            heap[n] = x;
//            up(n);
//        }
//        else if (op == "PM")
//        {
//            cout << heap[1] << " ";
//        }
//        else if (op == "DM")
//        {
//            heap_swap(1, n);
//            n--;
//        }
//        else if (op == "D")
//        {
//            cin >> kk;
//            int index = k_to_i[kk];
//            heap_swap(index, n);
//            n--;
//            up(index);
//            down(index);
//        }
//        else if (op == "C")
//        {
//            cin >> kk >> x;
//            int index = k_to_i[kk];
//            heap[index] = x;
//            up(index);
//            down(index);
//        }
//    }
//    return 0;
//}