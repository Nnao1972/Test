#include <DxLib.h>


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	// �V�X�e������
	SetWindowText("1916012_�e�n�؉�");
	SetGraphMode(800, 600, 32);
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return false;
	}
	//�Q�[�����[�v
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ScreenFlip();
	}

	DxLib_End();


	return true;

}
