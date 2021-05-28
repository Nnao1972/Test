#include <DxLib.h>


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	// システム処理
	SetWindowText("1916012_菊地菜央");
	SetGraphMode(800, 600, 32);
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return false;
	}
	//ゲームループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ScreenFlip();
	}

	DxLib_End();


	return true;

}
