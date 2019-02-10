int isCharacterExist(char a[],char symbol,int i)
{
	if(a[i] == symbol)
		return i;
	else if(a[i] == '\0')
		return -1;
	else
		isCharacterExist(a,symbol,i+1);
}