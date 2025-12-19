#include <iostream>
#include <ctime>
int main()
{
    time_t timestamp;
    time(&timestamp);
    // time() 函数会将时间戳写入由参数指定的内存位置，同时也会返回该时间戳的值。

    std::cout << ctime(&timestamp);
    // 使用 time() 函数的另一种方式是传入一个 NULL 指针，并直接使用其返回值。
    time_t timestamp_2 = time(NULL);
    std::cout << ctime(&timestamp_2);
    struct tm datetime;
    datetime.tm_year = 2025 - 1900;
    datetime.tm_mon = 12 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    datetime.tm_isdst = -1; // 夏令时生效时为正，未生效时为零，未知时为负
    timestamp = mktime(&datetime);
    std::cout << ctime(&timestamp);
    std::string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    std::cout << "今天是:" << weekdays[datetime.tm_wday] << std::endl;
    time_t timestamp_3 = time(&timestamp_3);
    struct tm datetime_3 = *localtime(&timestamp_3);
    time_t timestamp_4 = time(NULL);
    struct tm datetime_4 = *localtime(&timestamp_4);
    struct tm datetime_3_1 = *gmtime(&timestamp_4);
    std::cout << datetime_3.tm_hour << std::endl;
    // asctime()不会纠正无效日期，mktime可以修正
    mktime(&datetime_4);
    std::cout << asctime(&datetime_4) << std::endl;
    std::cout << asctime(&datetime_3_1) << std::endl;
    // strftime()可以自定义显示方式
    char output[50];
    strftime(output, 50, "%B %e, %Y", &datetime_4);
    std::cout << output << "\n";

    strftime(output, 50, "%I:%M:%S %p", &datetime_4);
    std::cout << output << "\n";

    strftime(output, 50, "%m/%d/%y", &datetime_4);
    std::cout << output << "\n";

    strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime_4);
    std::cout << output << "\n";

    // 格式指定器	描述	示例
    // %a	工作日简短表示	Fri
    // %b	月份名称的简要表示	Dec
    // %B	月份名称的完整表示	December
    // %d	月中首位零的日期	09
    // %e	月份中的哪一天，带前置空格	 9
    // %H	24小时一小时节目格式	14
    // %I	12小时一小时的节目格式	02
    // %M	一小时内的几分钟	30
    // %p	上午或下午	PM
    // %S	一分钟内的秒	01
    // %y	两位数年份表示法	23
    // %Y	四位数年份表示	2023
    time_t now, nextyear;
    struct tm datetime_5;
    now = time(NULL);
    datetime_5 = *localtime(&now);
    datetime_5.tm_year = datetime_5.tm_year + 1;
    datetime_5.tm_mon = 0;
    datetime_5.tm_mday = 1;
    datetime_5.tm_hour = 0;
    datetime_5.tm_min = 0;
    datetime_5.tm_sec = 0;
    datetime_5.tm_isdst = -1;
    nextyear = mktime(&datetime_5);
    int diff = difftime(nextyear, now);
    std::cout << diff << "s";
    // clock()用于测量程序运行时间
    clock_t before = clock();
    int k = 0;
    for(int i = 0; i< 100000000; i++)
    {
        k+=i;
    } 
    clock_t duration = clock() - before;
    std::cout << "运行了" << (float)duration / CLOCKS_PER_SEC << "s";
    // 计算前需要转换类型，否则可能导致整数除法，导致小数部分被截断
}   