#define N_LINE						2
#define N_SIZE						5
#define BINGO_NUMSTATUS_ABSENT		-1
#define BINGO_NUMSTATUS_PRESENT		0

void bingo_init(void); //�����ʱ�ȭ
void bingo_printBoard(void);//���� ���
int bingo_countCompletedline(void);//�ϼ��� �� �� ���
void bingo_inputNum(int sel);//���忡 ��ȣ �Է� 
int bingo_checkNum(int selNum);

