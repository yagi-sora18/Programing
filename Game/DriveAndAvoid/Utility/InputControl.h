#pragma once

#include"Vector2D.h"

//���͊Ǘ��@�\
class InputControl
{
private:
	static bool now_button[16];//���݃t���[�����͒l
	static bool old_button[16];//�ߋ��t���[�����͒l
	static float trigger[2];   //���E�g���K�[���͒l
	static Vector2D stick[2];  //���E�X�e�B�b�N���͒l
};

