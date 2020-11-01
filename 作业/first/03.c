// 设某个文件含n个记录，文件的第一个字（4字节）给出记录的总个数n，随后的n个字给出各个记录的长度（字节数），剩余部分则由各个记录组成。编写一个根据文件指针和记录编号（从1开始编号）读取第k个记录的函数
//


char* get_record(FILE *f, int k) {
	fseek(f, 4, SEEK_SET);
	int *record[k];	// 每一项的大小, k-1为k的大小
	for (int i = 0; i < k; i++) {
		fread(record[i], 4, 1, f);
	}

	int j = 4;	// 文件开始到k开始的偏移量
	for (int i = 0; i < k-1; i++) {
		j += &record[i];
	}

	fseek(f, j, SEEK_SET);

	char buf[4];	// k的值
       	fread(buf, &record[k-1], 1, f)	
	
	return buf;
}
