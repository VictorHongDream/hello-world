findLCA_Union():  //对每条非树边进行环集合处理
	for eachEdge in ElseEdges:
		u = eachEdge.a
		v = eachEdge.b   //获取边的端点
		vector<int> temp    //临时容器存储路径上经过环的点
		//从深度判断，不断递减直到找到它们最近的公共祖先
	    if depth[v] == depth[u]:  
	    	temp.push_back(u)
	        temp.push_back(v)
	 	else if depth[v] > depth[u]:
	        while depth[v] > depth[u]:
	        	temp.push_back(v)
	            v = father[v]
	        temp.push_back(u)
		else   
			while depth[v] < depth[u]:
	        	temp.push_back(u)
	            u = father[u]
			temp.push_back(v)
		while (father[u] != father[v]):
	        u = father[u]
	        v = father[v]
	        temp.push_back(u)
	        temp.push_back(v)
	    int f = father[u]
	    while sig[f] != f:
	        f = sig[f]
	    sig[u] = f
	    sig[v] = f
	    //将路径上的点都设置为同一个标志
	    for i = 0 to temp.size():
	        if(temp[i] != f)
	            sig[temp[i]] = f
