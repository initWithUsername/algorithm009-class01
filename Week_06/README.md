学习笔记

动态规划的关键点：
    1.最优子结构 opt[n] = best_of(opt[n-1], opt[n-2], ...)
    2.存储中间状态：opt[i]
    3.DP方程：
            一维：如 Fib: opt[i] = opt[n-1] + opt[n-2]
            二维: 如 opt[i][j] = opt[i+1][j] + opt[i][j+1] (且判断a[i][j]是否是空地)