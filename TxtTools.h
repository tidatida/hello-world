/*
参数值：
    输入文件名
返回值：
    返回文件中的行数，以回车为行分隔符。
*/
int CountLines(char* FileName);



/*
参数值：
    输入文件名
返回值：
    返回文件中的单词数（针对英文文件，以空格为词分割单位）
*/
int CountEnglishWords(char* FileName);



/*
作用：
		把源文件中的空行去掉，结果保存在目标文件名制定的文件中。
参数值：
    源文件名和目标文件名
返回值：
    空行数
*/
int DelBlankLines(char* srcFileName,char* desFileName);


/*
作用：
		根据内容分割文件
参数值：
    源文件名和目标文件名
返回值：
    分割成几个文件，如果分割失败，返回-1
*/
int SplitFile(char* srcFileName,char* desFileName);





/*
作用：
		实验用函数
*/
void TestTxtTools(void);
