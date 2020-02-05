/*
 * @lc app=leetcode.cn id=925 lang=c
 *
 * [925] 长按键入
 */

// @lc code=start


bool isLongPressedName(char * name, char * typed){
    int name_index = 0,typed_index = 0;
    while(name[name_index] != '\0')
    {
        if(name[name_index] != name[name_index+1])
        {
            if(name[name_index] != typed[typed_index])
                return false;
            while(name[name_index] == typed[typed_index+1])
            {
                typed_index++;
            }
        }
        else if(name[name_index] != typed[typed_index])
            return false;
        name_index++;
        typed_index++;
    }
    return true;
}


// @lc code=end

