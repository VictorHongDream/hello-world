void tarjan(int S):
	Stack.push(S); // 把S放入栈中。
	Vis[S] = 1;// 表示S节点在栈中。
    DFN[S] = LOW[S] = ++FLAG // 初始化时间戳及先祖地位。
	For( T 属于 S的son) // 遍历所有S的子节点。
	If(vis[T] == 0): // 如果 T 不在栈中
		Tarjan(T);  //继续向下搜索。
		LOW[S] = MIN(LOW[S], LOW[T]). //更新S节点的先祖地位。
	Else  if(vis[T] == 1): //S节点 正在栈中。
		LOW[S] = MIN(LOW[S], DFN[T]). // 更新S节点的先祖地位。
	If(LOW[S] == DNF[S]): // 如果 S节点的先祖地位就是他自己 那么他就是一个强连通分量的ROOT。                                            
	DO{
		Pop T //  弹出T
		Vis[T] = 2; // 表示T节点已经进入过并弹出
		T = stack.top; //更新T
		}While(S != T) // 一直弹到本强连通分量的ROOT为止。 弹出的节点便是一个强连通分量。
