学习笔记

DFS 代码模板

递归 
visited = set() 
def dfs(node, visited):
    if node in visited: # terminator
    	# already visited 
    	return 
	visited.add(node) 
	# process current node here. 
	...
	for next_node in node.children(): 
		if next_node not in visited: 
			dfs(next_node, visited)

非递归
def DFS(self, tree): 
	if tree.root is None: 
		return [] 
	visited, stack = [], [tree.root]
	while stack: 
		node = stack.pop() 
		visited.add(node)
		process (node) 
		nodes = generate_related_nodes(node) 
		stack.push(nodes) 
	# other processing work 
	...




BFS 代码模板

def BFS(graph, start, end):
    visited = set()
	queue = [] 
	queue.append([start]) 
	while queue: 
		node = queue.pop() 
		visited.add(node)
		process(node) 
		nodes = generate_related_nodes(node) 
		queue.push(nodes)
	# other processing work 
	...

贪心算法

贪心算法是一种在每一步选择中都采取在当前状态下最优选择，从而希望导致结果是最优的一种算法
贪心与动态规划的不同之处在于贪心每一步都选择当前最优解，且不能回退；动态规划会保存之前的运算结果，
并根据以前的运算结果进行选择，有回退功能
适用贪心算法的场景是：问题能够分解成子问题来解决，且子问题的最优解能递推到最终问题的最优解。



二分法

查找前提：
    1.目标函数单调性（单调递增或者递减）
    2.存在上下界
    3.能够通过索引访问

代码模板
    left, right = 0, len(array) - 1 
    while left <= right: 
	  mid = (left + right) / 2 
	  if array[mid] == target: 
		    # find the target!! 
		    break or return result 
	  elif array[mid] < target: 
		    left = mid + 1 
	  else: 
		    right = mid - 1


