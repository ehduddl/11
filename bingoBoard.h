#define N_LINE						2
#define N_SIZE						5
#define BINGO_NUMSTATUS_ABSENT		-1
#define BINGO_NUMSTATUS_PRESENT		0

void bingo_init(void); //보드초기화
void bingo_printBoard(void);//보드 출력
int bingo_countCompletedline(void);//완성된 줄 수 계산
void bingo_inputNum(int sel);//보드에 번호 입력 
int bingo_checkNum(int selNum);

