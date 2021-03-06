/*栈的顺序存储结构及实现*/

/*栈的结构定义*/
typedef int SElemType;
typedef struct
{
	SElemType data[MAXSIZE];
	int top;    //栈顶指针
}SqStack;

/*进栈操作*/
/*插入元素e为新的栈顶元素*/
Status Push(SqStack *s, SElemType e)
{
	if(s->top = MAXSIZE-1)
	{
		return ERROR;
	}
	s->top++;     //栈顶指针加1
	s->data[s->top] = e;   //将新插入元素赋值给栈顶空间
	return OK;
}

/*出栈操作*/
Status Pop(SqStack *s, SElemType *e)
{
	if(s->top = -1)
		return ERROR;
	*e = s->data[s->top];      //将要删除的栈顶元素赋值给e
	s->top--;  //栈顶元素减1
	return OK;
}
