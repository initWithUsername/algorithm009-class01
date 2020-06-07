学习笔记

递归模板：

        void recur(int level,int param)
        {
            // terminator  
            if(level > MAX_LEVEL)
            {
                // process result      
                return;
            }
            
            // process current logic   
            process(level, param);
             
            // drill down    
            recur( level: level +1, newParam);
             
            // restore current status  
        }

递归思维要点：
        1.不要人肉进行递归（最大误区） 
        2.找到最近最简方法，将其拆解成可重复解决的问题（重复子问题） 
        3.数学归纳法思维



分治&回溯代码模板：

        void divide_conquer(problem, param1, param2, ...)
        {
            // recursion terminator 

            // prepare data


            // conquer subproblem

            // process and generate the final result  
        
            
            // revert the current level states

        }
回溯的处理思想:
        有点类似枚举搜索。我们枚举所有的解，找到满足期望的解。为了有规律地枚举所有可能的解，避免遗漏和重复，我们把问题求解的过程分为多个阶段。每个阶段，我们都会面对一个岔路口，我们先随意选一条路走，当发现这条路走不通的时候（不符合期望的解），就回退到上一个岔路口，另选一种走法继续走。