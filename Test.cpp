#include "Test.h"
#include "GameOutput.h"
#include "GameInput.h"
CTest::CTest()
{

}
CTest::~CTest()
{
}

void CTest::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	//go->AddImage("������ɭ", "bmp\\����\\������ɭ.bmp");
	//go->AddBmp("������ɭ", "������ɭ", 0, 0, 2048, 768, 0xffffff);
	//for (int i = 0; i < 12; ++i)
	//{
	//	sprintf_s(buf, 64, "վ��%d", i + 1);
	//	sprintf_s(buf2, 64, "pic/վ��/00%d.bmp", i + 8);
	//	go->AddImage(buf, buf2);
	//}
	/*go->AddBmp("վ1", "վ��1", 0, 0, 241, 286, RGB(0, 0, 0));
	go->AddBmp("վ2", "վ��2", 0, 0, 241, 286, RGB(0, 0, 0));
	go->AddBmp("վ3", "վ��3", 0, 0, 240, 287, RGB(0, 0, 0));
	go->AddBmp("վ4", "վ��4", 0, 0, 239, 288, RGB(0, 0, 0));
	go->AddBmp("վ5", "վ��5", 0, 0, 240, 289, RGB(0, 0, 0));
	go->AddBmp("վ6", "վ��6", 0, 0, 241, 290, RGB(0, 0, 0));
	go->AddBmp("վ7", "վ��7", 0, 0, 241, 290, RGB(0, 0, 0));
	go->AddBmp("վ8", "վ��8", 0, 0, 241, 290, RGB(0, 0, 0));
	go->AddBmp("վ9", "վ��9", 0, 0, 243, 289, RGB(0, 0, 0));
	go->AddBmp("վ10", "վ��10", 0, 0, 243, 288, RGB(0, 0, 0));
	go->AddBmp("վ11", "վ��11", 0, 0, 243, 287, RGB(0, 0, 0));
	go->AddBmp("վ12", "վ��12", 0, 0, 241, 286, RGB(0, 0, 0));*/
	//a1[0].id = "վ1"; a1[0].cf = 3; a1[0].offx = -35; a1[0].offy = -159;
	//a1[1].id = "վ2"; a1[1].cf = 3; a1[1].offx = -35; a1[1].offy = -159;
	//a1[2].id = "վ3"; a1[2].cf = 3; a1[2].offx = -34; a1[2].offy = -160;
	//a1[3].id = "վ4"; a1[3].cf = 3; a1[3].offx = -34; a1[3].offy = -162;
	//a1[4].id = "վ5"; a1[4].cf = 3; a1[4].offx = -34; a1[4].offy = -162;
	//a1[5].id = "վ6"; a1[5].cf = 3; a1[5].offx = -35; a1[5].offy = -163;
	//a1[6].id = "վ7"; a1[6].cf = 3; a1[6].offx = -35; a1[6].offy = -163;
	//a1[7].id = "վ8"; a1[7].cf = 3; a1[7].offx = -35; a1[7].offy = -163;
	//a1[8].id = "վ9"; a1[8].cf = 3; a1[8].offx = -35; a1[8].offy = -161;
	//a1[9].id = "վ10"; a1[9].cf = 3; a1[9].offx = -35; a1[9].offy = -160;
	//a1[10].id = "վ11"; a1[10].cf = 3; a1[10].offx = -35; a1[10].offy = -159;
	//a1[11].id = "վ12"; a1[11].cf = 3; a1[11].offx = -35; a1[11].offy = -159;
	//for (int i = 0; i < 12; ++i)
	//{
	//	sprintf_s(buf, 64, "��%d", i + 1);
	//	sprintf_s(buf2, 64, "pic/��/00%d.bmp", i + 24);
	//	go->AddImage(buf, buf2);
	//}
	/*go->AddBmp("��1", "��1", 0, 0, 247, 289, RGB(0, 0, 0));
	go->AddBmp("��2", "��2", 0, 0, 241, 293, RGB(0, 0, 0));
	go->AddBmp("��3", "��3", 0, 0, 238, 296, RGB(0, 0, 0));
	go->AddBmp("��4", "��4", 0, 0, 234, 297, RGB(0, 0, 0));
	go->AddBmp("��5", "��5", 0, 0, 238, 296, RGB(0, 0, 0));
	go->AddBmp("��6", "��6", 0, 0, 259, 293, RGB(0, 0, 0));
	go->AddBmp("��7", "��7", 0, 0, 254, 289, RGB(0, 0, 0));
	go->AddBmp("��8", "��8", 0, 0, 241, 293, RGB(0, 0, 0));
	go->AddBmp("��9", "��9", 0, 0, 238, 296, RGB(0, 0, 0));
	go->AddBmp("��10", "��10", 0, 0, 234, 297, RGB(0, 0, 0));
	go->AddBmp("��11", "��11", 0, 0, 238, 296, RGB(0, 0, 0));
	go->AddBmp("��12", "��12", 0, 0, 254, 293, RGB(0, 0, 0));*/
	//a2[0].id = "��1";   a2[0].cf = 3;  a2[0].offx = -50; a2[0].offy = -157;
	//a2[1].id = "��2";   a2[1].cf = 3;  a2[1].offx = -52; a2[1].offy = -163;
	//a2[2].id = "��3";   a2[2].cf = 3;  a2[2].offx = -52; a2[2].offy = -167;
	//a2[3].id = "��4";   a2[3].cf = 3;  a2[3].offx = -52; a2[3].offy = -170;
	//a2[4].id = "��5";   a2[4].cf = 3;  a2[4].offx = -55; a2[4].offy = -167;
	//a2[5].id = "��6";   a2[5].cf = 3;  a2[5].offx = -49; a2[5].offy = -155;
	//a2[6].id = "��7";   a2[6].cf = 3;  a2[6].offx = -55; a2[6].offy = -153;
	//a2[7].id = "��8";   a2[7].cf = 3;  a2[7].offx = -58; a2[7].offy = -163;
	//a2[8].id = "��9";   a2[8].cf = 3;  a2[8].offx = -56; a2[8].offy = -167;
	//a2[9].id = "��10";  a2[9].cf = 3;  a2[9].offx = -54; a2[9].offy = -170;
	//a2[10].id = "��11"; a2[10].cf = 3; a2[10].offx = -54; a2[10].offy = -167;
	//a2[11].id = "��12"; a2[11].cf = 3; a2[11].offx = -48; a2[11].offy = -157;
	//for (int i = 0; i < 9; i++)
	//{
	//	sprintf_s(buf, 64, "ɨ��%d", i + 1);
	//	sprintf_s(buf2, 64, "pic/����/0%d.bmp", i + 20);
	//	go->AddImage(buf, buf2);
	//}
	/*go->AddBmp("ɨ��1", "ɨ��1", 0, 0, 246, 277, RGB(0, 0, 0));
	go->AddBmp("ɨ��2", "ɨ��2", 0, 0, 314, 265, RGB(0, 0, 0));
	go->AddBmp("ɨ��3", "ɨ��3", 0, 0, 291, 275, RGB(0, 0, 0));
	go->AddBmp("ɨ��4", "ɨ��4", 0, 0, 378, 283, RGB(0, 0, 0));
	go->AddBmp("ɨ��5", "ɨ��5", 0, 0, 379, 267, RGB(0, 0, 0));
	go->AddBmp("ɨ��6", "ɨ��6", 0, 0, 314, 258, RGB(0, 0, 0));
	go->AddBmp("ɨ��7", "ɨ��7", 0, 0, 269, 264, RGB(0, 0, 0));
	go->AddBmp("ɨ��8", "ɨ��8", 0, 0, 241, 276, RGB(0, 0, 0));
	go->AddBmp("ɨ��9", "ɨ��9", 0, 0, 243, 287, RGB(0, 0, 0));*/
	//a3[0].id = "ɨ��1"; a3[0].cf = 3; a3[0].offx = 27; a3[0].offy = -132;
	//a3[1].id = "ɨ��2"; a3[1].cf = 3; a3[1].offx = 23; a3[1].offy = -88;
	//a3[2].id = "ɨ��3"; a3[2].cf = 6; a3[2].offx = 18; a3[2].offy = -113;
	//a3[3].id = "ɨ��4"; a3[3].cf = 6; a3[3].offx = 42; a3[3].offy = -77;
	//a3[4].id = "ɨ��5"; a3[4].cf = 6; a3[4].offx = 22; a3[4].offy = -61;
	//a3[5].id = "ɨ��6"; a3[5].cf = 3; a3[5].offx = -36; a3[5].offy = -84;
	//a3[6].id = "ɨ��7"; a3[6].cf = 3; a3[6].offx = -51; a3[6].offy = -113;
	//a3[7].id = "ɨ��8"; a3[7].cf = 3; a3[7].offx = -37; a3[7].offy = -138;
	//a3[8].id = "ɨ��9"; a3[8].cf = 3; a3[8].offx = -31; a3[8].offy = -148;
	//for (int i = 0; i < 6; i++)
	//{
	//	sprintf_s(buf, 64, "����%d", i + 1);
	//	sprintf_s(buf2, 64, "pic/��/02%d.bmp", i + 25);
	//	go->AddImage(buf, buf2);
	//}
	/*go->AddBmp("����1", "����1", 0, 0, 241, 274, RGB(0, 0, 0));
	go->AddBmp("����2", "����2", 0, 0, 241, 270, RGB(0, 0, 0));
	go->AddBmp("����3", "����3", 0, 0, 347, 263, RGB(0, 0, 0));
	go->AddBmp("����4", "����4", 0, 0, 336, 265, RGB(0, 0, 0));
	go->AddBmp("����5", "����5", 0, 0, 244, 268, RGB(0, 0, 0));
	go->AddBmp("����6", "����6", 0, 0, 243, 278, RGB(0, 0, 0));*/
	//a4[0].id = "����1"; a4[0].cf = 3; a4[0].offx = -39; a4[0].offy = -153;
	//a4[1].id = "����2"; a4[1].cf = 3; a4[1].offx = -49; a4[1].offy = -149;
	//a4[2].id = "����3"; a4[2].cf = 6; a4[2].offx = -25; a4[2].offy = -89;
	//a4[3].id = "����4"; a4[3].cf = 6; a4[3].offx = -25; a4[3].offy = -96;
	//a4[4].id = "����5"; a4[4].cf = 3; a4[4].offx = -61; a4[4].offy = -145;
	//a4[5].id = "����6"; a4[5].cf = 3; a4[5].offx = -29;  a4[5].offy = -153;
	//for (int i = 0; i < 13; i++)
	//{
	//	if (i < 10)
	//		sprintf_s(buf2, 64, "bmp\\��������\\rc211_0%d.bmp", i);
	//	else
	//		sprintf_s(buf2, 64, "bmp\\��������\\rc211_%d.bmp", i);
	//	sprintf_s(buf, 64, "��������%d", i);
	//	go->AddImage(buf, buf2);
	//}
	//go->AddBmp("��������0", "��������0", 0, 0, 263, 440, 0xffffff);
	//go->AddBmp("��������1", "��������1", 0, 0, 351, 478, 0xffffff);
	//go->AddBmp("��������2", "��������2", 0, 0, 378, 486, 0xffffff);
	//go->AddBmp("��������3", "��������3", 0, 0, 359, 487, 0xffffff);
	//go->AddBmp("��������4", "��������4", 0, 0, 353, 476, 0xffffff);
	//go->AddBmp("��������5", "��������5", 0, 0, 375, 473, 0xffffff);
	//go->AddBmp("��������6", "��������6", 0, 0, 489, 472, 0xffffff);
	//go->AddBmp("��������7", "��������7", 0, 0, 499, 472, 0xffffff);
	//go->AddBmp("��������8", "��������8", 0, 0, 470, 475, 0xffffff);
	//go->AddBmp("��������9", "��������9", 0, 0, 356, 485, 0xffffff);
	//go->AddBmp("��������10", "��������10", 0, 0, 309, 488, 0xffffff);
	//go->AddBmp("��������11", "��������11", 0, 0, 354, 456, 0xffffff);
	//go->AddBmp("��������12", "��������12", 0, 0, 288, 415, 0xffffff);
	//a5[0].BmpId = "��������0";     a5[0].ContinueFrame = 3;   a5[0].offx =                23 ;         a5[0].offy =             -205;
	//a5[1].BmpId = "��������1";     a5[1].ContinueFrame = 3;   a5[1].offx =                33  ;        a5[1].offy =             -224;
	//a5[2].BmpId = "��������2";     a5[2].ContinueFrame = 3;   a5[2].offx =                46   ;       a5[2].offy =             -228;
	//a5[3].BmpId = "��������3";     a5[3].ContinueFrame = 3;   a5[3].offx =                39    ;      a5[3].offy =             -229;
	//a5[4].BmpId = "��������4";     a5[4].ContinueFrame = 3;   a5[4].offx =                56  ;        a5[4].offy =             -223;
	//a5[5].BmpId = "��������5";     a5[5].ContinueFrame = 3;   a5[5].offx =                -8;          a5[5].offy =               -222;
	//a5[6].BmpId = "��������6";     a5[6].ContinueFrame = 3;   a5[6].offx =                -102;      a5[6].offy =            -221;
	//a5[7].BmpId = "��������7";     a5[7].ContinueFrame = 3;   a5[7].offx =                -107;      a5[7].offy =            -221;
	//a5[8].BmpId = "��������8";     a5[8].ContinueFrame = 3;    a5[8].offx =               -94 ;      a5[8].offy =           -223;
	//a5[9].BmpId = "��������9";     a5[9].ContinueFrame = 3;    a5[9].offx =               -33 ;      a5[9].offy =           -229;
	//a5[10].BmpId = "��������10";   a5[10].ContinueFrame = 3; a5[10].offx =              28  ;       a5[10].offy =         -230;
	//a5[11].BmpId = "��������11";   a5[11].ContinueFrame = 3; a5[11].offx =              49    ;     a5[11].offy =         -214;
	//a5[12].BmpId = "��������12";   a5[12].ContinueFrame = 3; a5[12].offx =              40     ;    a5[12].offy =         -194;
	//for (int i = 0; i < 5; i++)
	//{
	//	sprintf_s(buf2, 64, "bmp\\��\\rc052_0%d.bmp", i);
	//	sprintf_s(buf, 64, "����������%d", i);
	//	go->AddImage(buf, buf2);
	//}
	//go->AddBmp("����������0", "����������0", 0, 0, 302, 352, 0xffffff);
	//go->AddBmp("����������1", "����������1", 0, 0, 312, 341, 0xffffff);
	//go->AddBmp("����������2", "����������2", 0, 0, 275, 340, 0xffffff);
	//go->AddBmp("����������3", "����������3", 0, 0, 367, 339, 0xffffff);
	//go->AddBmp("����������4", "����������4", 0, 0, 466, 338, 0xffffff);
	//a6[0].BmpId = "����������0";     a6[0].ContinueFrame = 3;   a6[0].offx =                 24          ;         a6[0].offy =            -160                ;
	//a6[1].BmpId = "����������1";     a6[1].ContinueFrame = 3;   a6[1].offx =                 22          ;         a6[1].offy =            -155                ;
	//a6[2].BmpId = "����������2";     a6[2].ContinueFrame = 3;   a6[2].offx =                 11          ;         a6[2].offy =            -153                ;
	//a6[3].BmpId = "����������3";     a6[3].ContinueFrame = 3;   a6[3].offx =                 47          ;         a6[3].offy =            -153                ;
	//a6[4].BmpId = "����������4";     a6[4].ContinueFrame = 3;   a6[4].offx =                 87          ;         a6[4].offy =            -152                ;
//	for (int i = 0; i < 15; i++)//0~14
//	{
//		sprintf_s(buf2, 64, "bmp\\����������\\%d.bmp", i);//0~14
//		sprintf_s(buf, 64, "����������%d", i);//0~14
//		go->AddImage(buf, buf2);
//	}										 
//	go->AddBmp("����������0", "����������0",     0, 0,    335     ,    538    , RGB(0,255,0));
//	go->AddBmp("����������1", "����������1",     0, 0,    314     ,    441    , RGB(0,255,0));
//	go->AddBmp("����������2", "����������2",     0, 0,    412     ,    664    , RGB(0,255,0));
//	go->AddBmp("����������3", "����������3",     0, 0,    405     ,    664    , RGB(0,255,0));
//	go->AddBmp("����������4", "����������4",     0, 0,    404     ,   606    , RGB(0,255,0));
//	go->AddBmp("����������5", "����������5",     0, 0,     364    ,    389    , RGB(0,255,0));
//	go->AddBmp("����������6", "����������6",     0, 0,    357     ,    438    , RGB(0,255,0));
//	go->AddBmp("����������7", "����������7",     0, 0,    342     ,   535    , RGB(0,255,0));
//	go->AddBmp("����������8", "����������8",     0, 0,    330     ,    533    , RGB(0,255,0));
//	go->AddBmp("����������9", "����������9",     0, 0,    289     ,   438    , RGB(0,255,0));
//	go->AddBmp("����������10", "����������10", 0, 0,    330     ,    486    , RGB(0,255,0));
//	go->AddBmp("����������11", "����������11", 0, 0,    293     ,   523    , RGB(0,255,0));
//	go->AddBmp("����������12", "����������12", 0, 0,     368    ,    504    , RGB(0,255,0));
//	go->AddBmp("����������13", "����������13", 0, 0,    393     ,   491    , RGB(0,255,0));
//	go->AddBmp("����������14", "����������14", 0, 0,    434     ,   470    , RGB(0,255,0));
//	a7[0].BmpId =   "����������9";       a7[0].ContinueFrame = 2;       a7[0].offx =            32        ;						  a7[0].offy =          -204        ;
//	a7[1].BmpId =   "����������10";       a7[1].ContinueFrame = 2;       a7[1].offx =          32        ;                        a7[1].offy =         -228      ;
//	a7[2].BmpId =   "����������2";       a7[2].ContinueFrame = 2;       a7[2].offx =            74        ;                        a7[2].offy =         -410      ;
//	a7[3].BmpId =   "����������3";       a7[3].ContinueFrame = 2;       a7[3].offx =            76        ;                        a7[3].offy =         -468      ;
//	a7[4].BmpId =   "����������4";       a7[4].ContinueFrame = 2;       a7[4].offx =            54        ;                        a7[4].offy =         -473      ;
//	a7[5].BmpId =   "����������5";       a7[5].ContinueFrame = 2;       a7[5].offx =            21        ;                        a7[5].offy =         -406      ;
//	a7[6].BmpId =   "����������6";       a7[6].ContinueFrame = 2;       a7[6].offx =            14        ;                        a7[6].offy =         -375      ;
//	a7[7].BmpId =   "����������0";       a7[7].ContinueFrame = 2;       a7[7].offx =            21        ;                        a7[7].offy =         -354      ;
//	a7[8].BmpId =   "����������7";       a7[8].ContinueFrame = 2;       a7[8].offx =            41        ;                        a7[8].offy =         -300      ;
//	a7[9].BmpId =   "����������8";       a7[9].ContinueFrame = 2;     a7[9].offx =              25          ;                        a7[9].offy =       -272      ;
//	a7[10].BmpId = "����������11";     a7[10].ContinueFrame = 2;   a7[10].offx =            20          ;                      a7[10].offy =       -262      ;
//	a7[11].BmpId = "����������12";     a7[11].ContinueFrame = 2;   a7[11].offx =            24          ;                      a7[11].offy =       -245      ;
//	a7[12].BmpId = "����������13";     a7[12].ContinueFrame = 2;   a7[12].offx =            16          ;                      a7[12].offy =       -232      ;
//	a7[13].BmpId = "����������14";     a7[13].ContinueFrame = 2;   a7[13].offx =            21          ;                      a7[13].offy =       -221      ;
//	a7[14].BmpId = "����������1";       a7[14].ContinueFrame = 2;   a7[14].offx =              1         ;					    a7[14].offy =          -207         ; 
//	for (int i = 0; i < 16; ++i)
//	{
//		if (i < 10)
//			sprintf_s(buf, 64, "bmp\\��\\rc032_0%d.bmp", i);
//		else
//			sprintf_s(buf, 64, "bmp\\��\\rc032_%d.bmp", i);
//		sprintf_s(buf2, 64, "��%d", i);
//		go->AddImage(buf2, buf);
//	}
//	go->AddBmp("��0", "��0", 0, 0, 255, 385, 0xffffff);
//	go->AddBmp("��1", "��1", 0, 0, 292, 358, 0xffffff);
//	go->AddBmp("��2", "��2", 0, 0, 331, 392, 0xffffff);
//	go->AddBmp("��3", "��3", 0, 0, 409, 367, 0xffffff);
//	go->AddBmp("��4", "��4", 0, 0, 415, 367, 0xffffff);
//	go->AddBmp("��5", "��5", 0, 0, 417, 367, 0xffffff);
//	go->AddBmp("��6", "��6", 0, 0, 410, 367, 0xffffff);
//	go->AddBmp("��7", "��7", 0, 0, 416, 367, 0xffffff);
//	go->AddBmp("��8", "��8", 0, 0, 415, 367, 0xffffff);
//	go->AddBmp("��9", "��9", 0, 0, 409, 381, 0xffffff);
//	go->AddBmp("��10", "��10", 0, 0, 370, 375, 0xffffff);
//	go->AddBmp("��11", "��11", 0, 0, 378, 383, 0xffffff);
//	go->AddBmp("��12", "��12", 0, 0, 286, 384, 0xffffff);
//	go->AddBmp("��13", "��13", 0, 0, 336, 387, 0xffffff);
//	go->AddBmp("��14", "��14", 0, 0, 297, 401, 0xffffff);
//	go->AddBmp("��15", "��15", 0, 0, 258, 403, 0xffffff);
//	a8[0].BmpId = "��0";           a8[0].ContinueFrame =   2;       a8[0].offx =     9;   					  a8[0].offy = -178;
//	a8[1].BmpId = "��1";           a8[1].ContinueFrame = 2;       a8[1].offx = 27;                       a8[1].offy = -189;
//	a8[2].BmpId = "��2";           a8[2].ContinueFrame = 2;       a8[2].offx = 24;                       a8[2].offy = -186;
//	a8[3].BmpId = "��3";           a8[3].ContinueFrame = 2;       a8[3].offx = 63;                       a8[3].offy = -199;
//	a8[4].BmpId = "��4";           a8[4].ContinueFrame = 2;       a8[4].offx = 66;                       a8[4].offy = -199;
//	a8[5].BmpId = "��5";           a8[5].ContinueFrame = 2;       a8[5].offx = 68;                       a8[5].offy = -198;
//	a8[6].BmpId = "��6";           a8[6].ContinueFrame = 2;       a8[6].offx = 65;                       a8[6].offy = -198;
//	a8[7].BmpId = "��7";           a8[7].ContinueFrame = 2;       a8[7].offx = 67;                       a8[7].offy = -198;
//	a8[8].BmpId = "��8";           a8[8].ContinueFrame = 2;       a8[8].offx = 66;                       a8[8].offy = -198;
//		a8[9].BmpId = "��9";           a8[9].ContinueFrame = 2;       a8[9].offx = 83;                       a8[9].offy = -182;
//		a8[10].BmpId = "��10";       a8[10].ContinueFrame = 2;       a8[10].offx = 54;                    a8[10].offy = -178;
//		a8[11].BmpId = "��11";       a8[11].ContinueFrame = 2;       a8[11].offx = 27;                    a8[11].offy = -186;
//		a8[12].BmpId = "��12";       a8[12].ContinueFrame = 2;       a8[12].offx = 2;                       a8[12].offy = -190;
//		a8[13].BmpId = "��13";       a8[13].ContinueFrame = 2;       a8[13].offx = -17;                   a8[13].offy = -188;
//		a8[14].BmpId = "��14";       a8[14].ContinueFrame = 2;       a8[14].offx = -4;   			      a8[14].offy = -182;
//		a8[15].BmpId = "��15";       a8[15].ContinueFrame = 2;       a8[15].offx = 17;  			      a8[15].offy = -184;
//		for (int i = 0; i < 14; ++i)
//		{
//			if (i < 10)
//				sprintf_s(buf, 64, "bmp\\BOSS\\BOSS��\\ar000_0%d.bmp", i);
//			else
//				sprintf_s(buf, 64, "bmp\\BOSS\\BOSS��\\ar000_%d.bmp", i);
//			sprintf_s(buf2, 64, "BOSS��%d", i);
//			go->AddImage(buf2, buf);
//		}
//		go->AddBmp("BOSS��0", "BOSS��0", 0, 0,          394         ,      368   , 0xffffff);
//		go->AddBmp("BOSS��1", "BOSS��1", 0, 0,          393         ,      363   , 0xffffff);
//		go->AddBmp("BOSS��2", "BOSS��2", 0, 0,          398         ,      361   , 0xffffff);
//		go->AddBmp("BOSS��3", "BOSS��3", 0, 0,          407         ,      359   , 0xffffff);
//		go->AddBmp("BOSS��4", "BOSS��4", 0, 0,          437         ,      361   , 0xffffff);
//		go->AddBmp("BOSS��5", "BOSS��5", 0, 0,          425         ,      363   , 0xffffff);
//		go->AddBmp("BOSS��6", "BOSS��6", 0, 0,          410         ,      364   , 0xffffff);
//		go->AddBmp("BOSS��7", "BOSS��7", 0, 0,          398         ,      363   , 0xffffff);
//		go->AddBmp("BOSS��8", "BOSS��8", 0, 0,          398         ,      365   , 0xffffff);
//		go->AddBmp("BOSS��9", "BOSS��9", 0, 0,          424         ,      366   , 0xffffff);
//		go->AddBmp("BOSS��10", "BOSS��10", 0, 0,      445         ,      368   , 0xffffff);
//		go->AddBmp("BOSS��11", "BOSS��11", 0, 0,      441         ,      369   , 0xffffff);
//		go->AddBmp("BOSS��12", "BOSS��12", 0, 0,      423         ,      370   , 0xffffff);
//		go->AddBmp("BOSS��13", "BOSS��13", 0, 0,      403         ,      368   , 0xffffff);
//		a9[0].BmpId = "BOSS��0";           a9[0].ContinueFrame = 2;         a9[0].offx =      41 ;   					    a9[0].offy =  -173       ;
//		a9[1].BmpId = "BOSS��1";           a9[1].ContinueFrame = 2;         a9[1].offx =      38 ;                       a9[1].offy =      -170       ;
//		a9[2].BmpId = "BOSS��2";           a9[2].ContinueFrame = 2;         a9[2].offx =      37 ;                       a9[2].offy =      -168       ;
//		a9[3].BmpId = "BOSS��3";           a9[3].ContinueFrame = 2;         a9[3].offx =      41 ;                       a9[3].offy =      -168       ;
//		a9[4].BmpId = "BOSS��4";           a9[4].ContinueFrame = 2;         a9[4].offx =      56 ;                       a9[4].offy =      -168       ;
//		a9[5].BmpId = "BOSS��5";           a9[5].ContinueFrame = 2;         a9[5].offx =      49 ;                       a9[5].offy =      -170       ;
//		a9[6].BmpId = "BOSS��6";           a9[6].ContinueFrame = 2;         a9[6].offx =      43 ;                       a9[6].offy =      -170       ;
//		a9[7].BmpId = "BOSS��7";           a9[7].ContinueFrame = 2;         a9[7].offx =      38 ;                       a9[7].offy =      -169       ;
//		a9[8].BmpId = "BOSS��8";           a9[8].ContinueFrame = 2;         a9[8].offx =      39 ;                       a9[8].offy =      -170       ;
//		a9[9].BmpId = "BOSS��9";           a9[9].ContinueFrame = 2;         a9[9].offx =      54 ;                       a9[9].offy =      -169       ;
//		a9[10].BmpId = "BOSS��10";         a9[10].ContinueFrame = 2;       a9[10].offx =  67   ;                     a9[10].offy =    -169       ;
//		a9[11].BmpId = "BOSS��11";         a9[11].ContinueFrame = 2;       a9[11].offx =  62   ;                     a9[11].offy =    -167       ;
//		a9[12].BmpId = "BOSS��12";         a9[12].ContinueFrame = 2;       a9[12].offx =  51   ;                       a9[12].offy =  -168       ;
//		a9[13].BmpId = "BOSS��13";         a9[13].ContinueFrame = 2;       a9[13].offx =  40  ;                    a9[13].offy =      -171        ;
	/*for (int i = 0; i < 10; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSվ\\ar001_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSվ\\ar000_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSվ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSվ0", "BOSSվ0", 0, 0, 384, 380, 0xffffff);
	go->AddBmp("BOSSվ1", "BOSSվ1", 0, 0, 366, 388, 0xffffff);
	go->AddBmp("BOSSվ2", "BOSSվ2", 0, 0, 351, 389, 0xffffff);
	go->AddBmp("BOSSվ3", "BOSSվ3", 0, 0, 355, 375, 0xffffff);
	go->AddBmp("BOSSվ4", "BOSSվ4", 0, 0, 355, 338, 0xffffff);
	go->AddBmp("BOSSվ5", "BOSSվ5", 0, 0, 366, 333, 0xffffff);
	go->AddBmp("BOSSվ6", "BOSSվ6", 0, 0, 370, 326, 0xffffff);
	go->AddBmp("BOSSվ7", "BOSSվ7", 0, 0, 386, 346, 0xffffff);
	go->AddBmp("BOSSվ8", "BOSSվ8", 0, 0, 385, 349, 0xffffff);
	go->AddBmp("BOSSվ9", "BOSSվ9", 0, 0, 374, 351, 0xffffff);
	a10[0].BmpId = "BOSSվ0";           a10[0].ContinueFrame = 2;         a10[0].offx = 60;   				    a10[0].offy = -189;
	a10[1].BmpId = "BOSSվ1";           a10[1].ContinueFrame = 2;         a10[1].offx = 52;                       a10[1].offy = -192;
	a10[2].BmpId = "BOSSվ2";           a10[2].ContinueFrame = 2;         a10[2].offx = 44;                       a10[2].offy = -191;
	a10[3].BmpId = "BOSSվ3";           a10[3].ContinueFrame = 2;         a10[3].offx = 35;                       a10[3].offy = -184;
	a10[4].BmpId = "BOSSվ4";           a10[4].ContinueFrame = 2;         a10[4].offx = 31;                       a10[4].offy = -164;
	a10[5].BmpId = "BOSSվ5";           a10[5].ContinueFrame = 2;         a10[5].offx = 38;                       a10[5].offy = -162;
	a10[6].BmpId = "BOSSվ6";           a10[6].ContinueFrame = 2;         a10[6].offx = 34;                       a10[6].offy = -159;
	a10[7].BmpId = "BOSSվ7";           a10[7].ContinueFrame = 2;         a10[7].offx = 44;                       a10[7].offy = -170;
	a10[8].BmpId = "BOSSվ8";           a10[8].ContinueFrame = 2;         a10[8].offx = 58;                       a10[8].offy = -172;
	a10[9].BmpId = "BOSSվ9";           a10[9].ContinueFrame = 2;         a10[9].offx = 53;                       a10[9].offy = -173;*/
	//for (int i = 0; i < 3; ++i)
	//{
	//	if (i < 10)
	//		sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar900_0%d.bmp", i);//��
	//	else
	//		sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSվ\\ar900_%d.bmp", i);
	//	sprintf_s(ArrBmpName, MAX_PATH, "BOSS��%d", i);
	//	go->AddImage(ArrBmpName, ArrFileName);
	//}
	//go->AddBmp("BOSS��0", "BOSS��0", 0, 0, 215, 259, 0xffffff);
	//go->AddBmp("BOSS��1", "BOSS��1", 0, 0, 215, 243, 0xffffff);
	//go->AddBmp("BOSS��2", "BOSS��2", 0, 0, 215, 250, 0xffffff);
	//a11[0].BmpId = "BOSS��0";           a11[0].ContinueFrame = 2;         a11[0].offx = 4;   				      a11[0].offy = -219;
	//a11[1].BmpId = "BOSS��1";           a11[1].ContinueFrame = 2;         a11[1].offx = 5;                       a11[1].offy = -211;
	//a11[2].BmpId = "BOSS��2";           a11[2].ContinueFrame = 2;         a11[2].offx = 4;                       a11[2].offy = -215;
	for (int i = 0; i < 11; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar030_0%d.bmp", i);//��
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar030_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS��0", "BOSS��0",     0, 0, 470, 295, 0xffffff);
	go->AddBmp("BOSS��1", "BOSS��1",     0, 0, 449, 270, 0xffffff);
	go->AddBmp("BOSS��2", "BOSS��2",     0, 0, 410, 300, 0xffffff);
	go->AddBmp("BOSS��3", "BOSS��3",     0, 0, 409, 301, 0xffffff);
	go->AddBmp("BOSS��4", "BOSS��4",     0, 0, 427, 293, 0xffffff);
	go->AddBmp("BOSS��5", "BOSS��5",     0, 0, 421, 302, 0xffffff);
	go->AddBmp("BOSS��6", "BOSS��6",     0, 0, 407, 300, 0xffffff);
	go->AddBmp("BOSS��7", "BOSS��7",     0, 0, 357, 300, 0xffffff);
	go->AddBmp("BOSS��8", "BOSS��8",     0, 0, 394, 274, 0xffffff);
	go->AddBmp("BOSS��9", "BOSS��9",     0, 0, 405, 283, 0xffffff);
	go->AddBmp("BOSS��10", "BOSS��10", 0, 0, 376, 359, 0xffffff);
	a12[0].BmpId = "BOSS��0";           a12[0].ContinueFrame = 2;         a12[0].offx = 0       ;   				      a12[0].offy = -151  ;
	a12[1].BmpId = "BOSS��1";           a12[1].ContinueFrame = 2;         a12[1].offx = -25   ;                       a12[1].offy =  -137    ;
	a12[2].BmpId = "BOSS��2";           a12[2].ContinueFrame = 2;         a12[2].offx = -38   ;                       a12[2].offy =  -142   ;
	a12[3].BmpId = "BOSS��3";           a12[3].ContinueFrame = 2;         a12[3].offx = -25   ;   				      a12[3].offy = -140  ;
	a12[4].BmpId = "BOSS��4";           a12[4].ContinueFrame = 2;         a12[4].offx = -17   ;                       a12[4].offy =  -130   ;
	a12[5].BmpId = "BOSS��5";           a12[5].ContinueFrame = 2;         a12[5].offx = -19   ;                       a12[5].offy =  -133   ;
	a12[6].BmpId = "BOSS��6";           a12[6].ContinueFrame = 2;         a12[6].offx = -5     ;   				      a12[6].offy = -133  ;
	a12[7].BmpId = "BOSS��7";           a12[7].ContinueFrame = 2;         a12[7].offx = 13    ;                       a12[7].offy =   -142    ;
	a12[8].BmpId = "BOSS��8";           a12[8].ContinueFrame = 2;         a12[8].offx = -15   ;                       a12[8].offy =   -131    ;
	a12[9].BmpId = "BOSS��9";           a12[9].ContinueFrame = 2;         a12[9].offx = -17   ;                       a12[9].offy =   -135    ;
	a12[10].BmpId = "BOSS��10";      a12[10].ContinueFrame = 2;      a12[10].offx = -16   ;                     a12[10].offy =   -165    ;
	for (int i = 0; i < 16; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSҧ\\ar202_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSҧ\\ar202_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSҧ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSҧ0", "BOSSҧ0", 0, 0,         373 ,  390, 0xffffff);
	go->AddBmp("BOSSҧ1", "BOSSҧ1", 0, 0,         407 ,  387, 0xffffff);
	go->AddBmp("BOSSҧ2", "BOSSҧ2", 0, 0,         406 ,  399, 0xffffff);
	go->AddBmp("BOSSҧ3", "BOSSҧ3", 0, 0,         427 ,  347, 0xffffff);
	go->AddBmp("BOSSҧ4", "BOSSҧ4", 0, 0,         428 ,  324, 0xffffff);
	go->AddBmp("BOSSҧ5", "BOSSҧ5", 0, 0,         447 ,  396, 0xffffff);
	go->AddBmp("BOSSҧ6", "BOSSҧ6", 0, 0,         562 ,  409, 0xffffff);
	go->AddBmp("BOSSҧ7", "BOSSҧ7", 0, 0,         602 ,  415, 0xffffff);
	go->AddBmp("BOSSҧ8", "BOSSҧ8", 0, 0,         602 ,  420, 0xffffff);
	go->AddBmp("BOSSҧ9", "BOSSҧ9", 0, 0,         487 ,  475, 0xffffff);
	go->AddBmp("BOSSҧ10", "BOSSҧ10", 0, 0,     488 ,  485, 0xffffff);
	go->AddBmp("BOSSҧ11", "BOSSҧ11", 0, 0,     414 ,  485, 0xffffff);
	go->AddBmp("BOSSҧ12", "BOSSҧ12", 0, 0,     377 ,  459, 0xffffff);
	go->AddBmp("BOSSҧ13", "BOSSҧ13", 0, 0,     378 , 416, 0xffffff);
	go->AddBmp("BOSSҧ14", "BOSSҧ14", 0, 0,     404 ,  379, 0xffffff);
	go->AddBmp("BOSSҧ15", "BOSSҧ15",     0, 0, 399 ,  375, 0xffffff);
	a13[0].BmpId =   "BOSSҧ0";              a13[0].ContinueFrame = 2;         a13[0].offx =  33   ;   				           a13[0].offy =   -184 ;
	a13[1].BmpId =   "BOSSҧ1";              a13[1].ContinueFrame = 2;         a13[1].offx =  14   ;                       a13[1].offy =         -179 ;
	a13[2].BmpId =   "BOSSҧ2";              a13[2].ContinueFrame = 2;         a13[2].offx =  11   ;                       a13[2].offy =         -184 ;
	a13[3].BmpId =   "BOSSҧ3";              a13[3].ContinueFrame = 2;         a13[3].offx =  -45  ;   				       a13[3].offy =       -155   ;
	a13[4].BmpId =   "BOSSҧ4";              a13[4].ContinueFrame = 2;         a13[4].offx =  -46  ;                       a13[4].offy =        -143  ;
	a13[5].BmpId =   "BOSSҧ5";              a13[5].ContinueFrame = 2;         a13[5].offx =  -66  ;                       a13[5].offy =        -179  ;
	a13[6].BmpId =   "BOSSҧ6";              a13[6].ContinueFrame = 2;         a13[6].offx =  -38  ;   				       a13[6].offy =       -187 ;
	a13[7].BmpId =   "BOSSҧ7";              a13[7].ContinueFrame = 2;         a13[7].offx =  -37    ;                         a13[7].offy =    -187 ;
	a13[8].BmpId =   "BOSSҧ8";              a13[8].ContinueFrame = 2;         a13[8].offx =  -50    ;                        a13[8].offy =     -188  ;
	a13[9].BmpId =   "BOSSҧ9";              a13[9].ContinueFrame = 2;         a13[9].offx =   -1   ;                        a13[9].offy =      -214   ;
	a13[10].BmpId = "BOSSҧ10";            a13[10].ContinueFrame = 2;       a13[10].offx =   1   ;                      a13[10].offy =      -223   ;
	a13[11].BmpId = "BOSSҧ11";            a13[11].ContinueFrame = 2;       a13[11].offx =   -1    ;   				        a13[11].offy =-227   ;
	a13[12].BmpId = "BOSSҧ12";            a13[12].ContinueFrame = 2;       a13[12].offx =   -3    ;                        a13[12].offy = -214    ;
	a13[13].BmpId = "BOSSҧ13";            a13[13].ContinueFrame = 2;       a13[13].offx =   11   ;                       a13[13].offy =   -191    ;
	a13[14].BmpId = "BOSSҧ14";            a13[14].ContinueFrame = 2;       a13[14].offx =   22   ;                       a13[14].offy =   -176    ;
	a13[15].BmpId = "BOSSҧ15";            a13[15].ContinueFrame = 2;       a13[15].offx =   29   ;                       a13[15].offy =   -175    ;
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������˯\\rc011_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������˯\\rc011_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������˯%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������˯0",   "������˯0", 0, 0,   320, 255, 0xffffff);
	go->AddBmp("������˯1",   "������˯1", 0, 0,   331, 250, 0xffffff);
	go->AddBmp("������˯2",   "������˯2", 0, 0,   333, 248, 0xffffff);
	go->AddBmp("������˯3",   "������˯3", 0, 0,   330, 254, 0xffffff);
	go->AddBmp("������˯4",   "������˯4", 0, 0,   330, 258, 0xffffff);
	go->AddBmp("������˯5",   "������˯5", 0, 0,   333, 248, 0xffffff);
	go->AddBmp("������˯6",   "������˯6", 0, 0,   326, 256, 0xffffff);
	go->AddBmp("������˯7",   "������˯7", 0, 0,   322, 262, 0xffffff);
	go->AddBmp("������˯8",   "������˯8", 0, 0,   333, 249, 0xffffff);
	go->AddBmp("������˯9",   "������˯9", 0, 0,   335, 255, 0xffffff);
	go->AddBmp("������˯10", "������˯10", 0, 0, 329, 257, 0xffffff);
	go->AddBmp("������˯11", "������˯11", 0, 0, 331, 257, 0xffffff);
	go->AddBmp("������˯12", "������˯12", 0, 0, 336, 257, 0xffffff);
	go->AddBmp("������˯13", "������˯13", 0, 0, 338, 256, 0xffffff);
	go->AddBmp("������˯14", "������˯14", 0, 0, 342, 255, 0xffffff);
	go->AddBmp("������˯15", "������˯15", 0, 0, 343, 254, 0xffffff);
	go->AddBmp("������˯16", "������˯16", 0, 0, 316, 268, 0xffffff);
	go->AddBmp("������˯17", "������˯17", 0, 0, 302, 258, 0xffffff);
	a14[0].BmpId =   "������˯0";  a14[0].  ContinueFrame = 2;     a14[0].offx   =      14   ;        a14[0].offy =          -119    ;
	a14[1].BmpId =   "������˯1";  a14[1].  ContinueFrame = 2;     a14[1].offx   =      7     ;        a14[1].offy =          -116    ;
	a14[2].BmpId =   "������˯2";  a14[2].  ContinueFrame = 2;     a14[2].offx   =      5     ;        a14[2].offy =          -115    ;
	a14[3].BmpId =   "������˯3";  a14[3].  ContinueFrame = 2;     a14[3].offx   =      7     ;        a14[3].offy =          -118     ;
	a14[4].BmpId =   "������˯4";  a14[4].  ContinueFrame = 2;     a14[4].offx   =      6     ;        a14[4].offy =          -120     ;
	a14[5].BmpId =   "������˯5";  a14[5].  ContinueFrame = 2;     a14[5].offx   =      5     ;        a14[5].offy =          -116     ;
	a14[6].BmpId =   "������˯6";  a14[6].  ContinueFrame = 2;     a14[6].offx   =      9     ;        a14[6].offy =          -121     ;
	a14[7].BmpId =   "������˯7";  a14[7].  ContinueFrame = 2;     a14[7].offx   =      14   ;        a14[7].offy =          -124     ;
	a14[8].BmpId =   "������˯8";  a14[8].  ContinueFrame = 2;     a14[8].offx   =      9     ;        a14[8].offy =          -118     ;
	a14[9].BmpId =   "������˯9";  a14[9].  ContinueFrame = 2;     a14[9].offx   =      8      ;        a14[9].offy =         -120      ;
	a14[10].BmpId = "������˯10";a14[10].ContinueFrame = 2;     a14[10].offx =      -2    ;         a14[10].offy =       -120     ;
	a14[11].BmpId = "������˯11";a14[11].ContinueFrame = 2;     a14[11].offx =      1     ;        a14[11].offy =        -120    ;
	a14[12].BmpId = "������˯12";a14[12].ContinueFrame = 2;     a14[12].offx =      3     ;        a14[12].offy =        -120    ;
	a14[13].BmpId = "������˯13";a14[13].ContinueFrame = 2;     a14[13].offx =      3      ;        a14[13].offy =       -119     ;
	a14[14].BmpId = "������˯14";a14[14].ContinueFrame = 2;     a14[14].offx =      5      ;        a14[14].offy =       -119     ;
	a14[15].BmpId = "������˯15";a14[15].ContinueFrame = 2;     a14[15].offx =      5      ;        a14[15].offy =       -118     ;
	a14[16].BmpId = "������˯16"; a14[16].ContinueFrame = 2;     a14[16].offx =     4      ;        a14[16].offy =       -125       ;
	a14[17].BmpId = "������˯17"; a14[17].ContinueFrame = 2;     a14[17].offx =     13    ;        a14[17].offy =       -120      ;
	for (int i = 0; i < 6; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������˯��\\rc230_0%d.bmp", i);//��
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar030_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������˯��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������˯��0", "������˯��0", 0, 0, 347, 275, 0xffffff);
	go->AddBmp("������˯��1", "������˯��1", 0, 0, 364, 273, 0xffffff);
	go->AddBmp("������˯��2", "������˯��2", 0, 0, 359, 258, 0xffffff);
	go->AddBmp("������˯��3", "������˯��3", 0, 0, 506, 258, 0xffffff);
	go->AddBmp("������˯��4", "������˯��4", 0, 0, 497, 260, 0xffffff);
	go->AddBmp("������˯��5", "������˯��5", 0, 0, 430, 258, 0xffffff);
	a15[0].BmpId = "������˯��0";           a15[0].ContinueFrame = 2;         a15[0].offx = 18      ;   			            a15[0].offy = -122;
	a15[1].BmpId = "������˯��1";           a15[1].ContinueFrame = 2;         a15[1].offx = 25     ;                         a15[1].offy = -121;
	a15[2].BmpId = "������˯��2";           a15[2].ContinueFrame = 2;         a15[2].offx = 41     ;                         a15[2].offy = -113;
	a15[3].BmpId = "������˯��3";           a15[3].ContinueFrame = 2;         a15[3].offx = -15     ;   				        a15[3].offy = -113;
	a15[4].BmpId = "������˯��4";           a15[4].ContinueFrame = 2;         a15[4].offx = -6     ;                         a15[4].offy = -114;
	a15[5].BmpId = "������˯��5";           a15[5].ContinueFrame = 2;         a15[5].offx =  9     ;                         a15[5].offy = -112;
	for (int i = 0; i < 5; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������\\rc052_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "", i);
		sprintf_s(ArrBmpName, MAX_PATH, "��������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("��������0", "��������0", 0, 0, 302, 352, 0xffffff);
	go->AddBmp("��������1", "��������1", 0, 0, 312, 341, 0xffffff);
	go->AddBmp("��������2", "��������2", 0, 0, 275, 340, 0xffffff);
	go->AddBmp("��������3", "��������3", 0, 0, 367, 339, 0xffffff);
	go->AddBmp("��������4", "��������4", 0, 0, 466, 338, 0xffffff);

	a16[0].BmpId = "��������0";           a16[0].ContinueFrame = 2;         a16[0].offx = 25;   			            a16[0].offy = -161;
	a16[1].BmpId = "��������1";           a16[1].ContinueFrame = 2;         a16[1].offx = 23;                         a16[1].offy = -157;
	a16[2].BmpId = "��������2";           a16[2].ContinueFrame = 2;         a16[2].offx = 12;                         a16[2].offy = -154;
	a16[3].BmpId = "��������3";           a16[3].ContinueFrame = 2;         a16[3].offx = 59;   				        a16[3].offy = -154;
	a16[4].BmpId = "��������4";           a16[4].ContinueFrame = 2;         a16[4].offx = 98;                         a16[4].offy = -153;
	for (int i = 2; i < 12; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��\\rc111_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��\\rc111_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "��������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("��������2", "��������2", 0, 0, 289, 287, 0xffffff);
	go->AddBmp("��������3", "��������3", 0, 0, 332, 285, 0xffffff);
	go->AddBmp("��������4", "��������4", 0, 0, 389, 278, 0xffffff);
	go->AddBmp("��������5", "��������5", 0, 0, 320, 284, 0xffffff);
	go->AddBmp("��������6", "��������6", 0, 0, 336, 259, 0xffffff);
	go->AddBmp("��������7", "��������7", 0, 0, 313, 292, 0xffffff);
	go->AddBmp("��������8", "��������8", 0, 0, 305, 284, 0xffffff);
	go->AddBmp("��������9", "��������9", 0, 0, 397, 297, 0xffffff);
	go->AddBmp("��������10", "��������10", 0, 0, 245, 277, 0xffffff);
	go->AddBmp("��������11", "��������11", 0, 0, 330, 277, 0xffffff);
	a17[0].BmpId = "��������2";             a17[0].ContinueFrame = 2;         a17[0].offx =  4;   			            a17[0].offy =  -142   ;
	a17[1].BmpId = "��������3";             a17[1].ContinueFrame = 2;         a17[1].offx =  -11;                         a17[1].offy = -144	;
	a17[2].BmpId = "��������4";             a17[2].ContinueFrame = 2;         a17[2].offx =  13;                         a17[2].offy = -138	;
	a17[3].BmpId = "��������5";             a17[3].ContinueFrame = 2;         a17[3].offx =  25;   				        a17[3].offy =  -142	  ;
	a17[4].BmpId = "��������6";             a17[4].ContinueFrame = 2;         a17[4].offx =  42;                         a17[4].offy = -128	;
	a17[5].BmpId = "��������7";             a17[5].ContinueFrame = 2;         a17[5].offx =  66;   			            a17[5].offy =  -144	  ;
	a17[6].BmpId = "��������8";             a17[6].ContinueFrame = 2;         a17[6].offx =  27;                         a17[6].offy = -139	;
	a17[7].BmpId = "��������9";             a17[7].ContinueFrame = 2;         a17[7].offx =  -48;                         a17[7].offy =-147	;
	a17[8].BmpId = "��������10";           a17[8].ContinueFrame = 2;         a17[8].offx =  24;   				        a17[8].offy =  -136	  ;
	a17[9].BmpId = "��������11";           a17[9].ContinueFrame = 2;         a17[9].offx =  -2;                         a17[9].offy = -138;
	for (int i = 0; i < 20; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar203_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar203_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS��0",   "BOSS��0",   0, 0, 386	, 310, 0xffffff);
	go->AddBmp("BOSS��1",   "BOSS��1",   0, 0, 401	, 328, 0xffffff);
	go->AddBmp("BOSS��2",   "BOSS��2",   0, 0, 351	, 369, 0xffffff);
	go->AddBmp("BOSS��3",   "BOSS��3",   0, 0, 330	, 368, 0xffffff);
	go->AddBmp("BOSS��4",   "BOSS��4",   0, 0, 336	, 343, 0xffffff);
	go->AddBmp("BOSS��5",   "BOSS��5",   0, 0, 320	, 320, 0xffffff);
	go->AddBmp("BOSS��6",   "BOSS��6",   0, 0, 348	, 315, 0xffffff);
	go->AddBmp("BOSS��7",   "BOSS��7",   0, 0, 353	, 315, 0xffffff);
	go->AddBmp("BOSS��8",   "BOSS��8",   0, 0, 363	, 315, 0xffffff);
	go->AddBmp("BOSS��9",   "BOSS��9",   0, 0, 392	, 317, 0xffffff);
	go->AddBmp("BOSS��10", "BOSS��10", 0, 0, 406	, 378, 0xffffff);
	go->AddBmp("BOSS��11", "BOSS��11", 0, 0, 402	, 391, 0xffffff);
	go->AddBmp("BOSS��12", "BOSS��12", 0, 0, 392	, 400, 0xffffff);
	go->AddBmp("BOSS��13", "BOSS��13", 0, 0, 378	, 368, 0xffffff);
	go->AddBmp("BOSS��14", "BOSS��14", 0, 0, 361	, 273, 0xffffff);
	go->AddBmp("BOSS��15", "BOSS��15", 0, 0, 352	, 284, 0xffffff);
	go->AddBmp("BOSS��16", "BOSS��16", 0, 0, 354	, 334, 0xffffff);
	go->AddBmp("BOSS��17", "BOSS��17", 0, 0, 367	, 407, 0xffffff);
	go->AddBmp("BOSS��18", "BOSS��18", 0, 0, 374 ,424,  0xffffff);
	go->AddBmp("BOSS��19", "BOSS��19", 0, 0, 390, 377 , 0xffffff);
	a18[0].BmpId = "BOSS��0";                 a18[0].ContinueFrame = 2;             a18[0].offx = 45		;	               a18[0].offy = -139;
	a18[1].BmpId = "BOSS��1";                 a18[1].ContinueFrame = 2;             a18[1].offx = 32     ;                   a18[1].offy = -145;
	a18[2].BmpId = "BOSS��2";                 a18[2].ContinueFrame = 2;             a18[2].offx = 29     ;                  a18[2].offy = -166;
	a18[3].BmpId = "BOSS��3";                 a18[3].ContinueFrame = 2;             a18[3].offx = 4 		;		           a18[3].offy = -165;
	a18[4].BmpId = "BOSS��4";                 a18[4].ContinueFrame = 2;             a18[4].offx = 11     ;                  a18[4].offy = -153;
	a18[5].BmpId = "BOSS��5";                 a18[5].ContinueFrame = 2;             a18[5].offx = 11 		;	              a18[5].offy = -142;
	a18[6].BmpId = "BOSS��6";                 a18[6].ContinueFrame = 2;             a18[6].offx = -9     ;                  a18[6].offy = -142;
	a18[7].BmpId = "BOSS��7";                 a18[7].ContinueFrame = 2;             a18[7].offx = -8     ;                 a18[7].offy = -143;
	a18[8].BmpId = "BOSS��8";                 a18[8].ContinueFrame = 2;             a18[8].offx = -17 	;			          a18[8].offy = -143;
	a18[9].BmpId = "BOSS��9";                 a18[9].ContinueFrame = 2;             a18[9].offx = -23   ;                   a18[9].offy = -148;
	a18[10].BmpId = "BOSS��10";             a18[10].ContinueFrame = 2;         a18[10].offx = -9		;	               a18[10].offy = -178;
	a18[11].BmpId = "BOSS��11";             a18[11].ContinueFrame = 2;         a18[11].offx = -1      ;                 a18[11].offy = -185;
	a18[12].BmpId = "BOSS��12";             a18[12].ContinueFrame = 2;         a18[12].offx = -5      ;                  a18[12].offy = -186;
	a18[13].BmpId = "BOSS��13";             a18[13].ContinueFrame = 2;         a18[13].offx = 0 		;		          a18[13].offy = -172;
	a18[14].BmpId = "BOSS��14";             a18[14].ContinueFrame = 2;         a18[14].offx = 29     ;                  a18[14].offy = -126;
	a18[15].BmpId = "BOSS��15";             a18[15].ContinueFrame = 2;         a18[15].offx = 27 		;	             a18[15].offy = -133;
	a18[16].BmpId = "BOSS��16";             a18[16].ContinueFrame = 2;         a18[16].offx = 28     ;                  a18[16].offy = -154;
	a18[17].BmpId = "BOSS��17";             a18[17].ContinueFrame = 2;         a18[17].offx = 19     ;                 a18[17].offy = -187;
	a18[18].BmpId = "BOSS��18";             a18[18].ContinueFrame = 2;         a18[18].offx = 6 		;		         a18[18].offy = -194;
	a18[19].BmpId = "BOSS��19";             a18[19].ContinueFrame = 2;         a18[19].offx = 17;                 a18[19].offy = -172;
	for (int i = 1; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��ɫ��\\vraref233_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��ɫ��\\vraref233_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS��ɫ��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS��ɫ��1",   "BOSS��ɫ��1", 0, 0,   136,   157, 0xffffff);
	go->AddBmp("BOSS��ɫ��2",   "BOSS��ɫ��2", 0, 0,    95 ,   206, 0xffffff);
	go->AddBmp("BOSS��ɫ��3",   "BOSS��ɫ��3", 0, 0,    83 ,   240, 0xffffff);
	go->AddBmp("BOSS��ɫ��4",   "BOSS��ɫ��4", 0, 0,    129,    228, 0xffffff);
	go->AddBmp("BOSS��ɫ��5",   "BOSS��ɫ��5", 0, 0,    154,    278, 0xffffff);
	go->AddBmp("BOSS��ɫ��6",   "BOSS��ɫ��6", 0, 0,    263,    305, 0xffffff);
	go->AddBmp("BOSS��ɫ��7",   "BOSS��ɫ��7", 0, 0,    266,    328, 0xffffff);
	go->AddBmp("BOSS��ɫ��8",   "BOSS��ɫ��8", 0, 0,    231,    373, 0xffffff);
	go->AddBmp("BOSS��ɫ��9",   "BOSS��ɫ��9", 0, 0,    244,    310, 0xffffff);
	go->AddBmp("BOSS��ɫ��10", "BOSS��ɫ��10", 0, 0,  158,  273, 0xffffff);
	go->AddBmp("BOSS��ɫ��11", "BOSS��ɫ��11", 0, 0,  88 ,  281, 0xffffff);
	go->AddBmp("BOSS��ɫ��12", "BOSS��ɫ��12", 0, 0,  77 ,  275, 0xffffff);
	go->AddBmp("BOSS��ɫ��13", "BOSS��ɫ��13", 0, 0, 76  ,  261, 0xffffff);
	a19[0  ].BmpId =   "BOSS��ɫ��1";             a19[0  ].ContinueFrame = 2;         a19[0  ].offx = 32;                   a19[1].offy = -145;
	a19[1  ].BmpId =   "BOSS��ɫ��2";             a19[1  ].ContinueFrame = 2;         a19[1  ].offx = 29;                  a19[2].offy = -166;
	a19[2  ].BmpId =   "BOSS��ɫ��3";             a19[2  ].ContinueFrame = 2;         a19[2  ].offx = 4;		           a19[3].offy = -165;
	a19[3  ].BmpId =   "BOSS��ɫ��4";             a19[3  ].ContinueFrame = 2;         a19[3  ].offx = 11;                  a19[4].offy = -153;
	a19[4  ].BmpId =   "BOSS��ɫ��5";             a19[4  ].ContinueFrame = 2;         a19[4  ].offx = 11;	              a19[5].offy = -142;
	a19[5  ].BmpId =   "BOSS��ɫ��6";             a19[5  ].ContinueFrame = 2;         a19[5  ].offx = -9;                  a19[6].offy = -142;
	a19[6  ].BmpId =   "BOSS��ɫ��7";             a19[6  ].ContinueFrame = 2;         a19[6  ].offx = -8;                 a19[7].offy = -143;
	a19[7  ].BmpId =   "BOSS��ɫ��8";             a19[7  ].ContinueFrame = 2;         a19[7  ].offx = -17;			          a19[8].offy = -143;
	a19[8  ].BmpId =   "BOSS��ɫ��9";             a19[8  ].ContinueFrame = 2;         a19[8  ].offx = -23;                   a19[9].offy = -148;
	a19[9  ].BmpId = "BOSS��ɫ��10";             a19[9  ].ContinueFrame = 2;         a19[9  ].offx = -9;	               a19[10].offy = -178;
	a19[10].BmpId = "BOSS��ɫ��11";             a19[10].ContinueFrame = 2;         a19[10].offx = -1;                 a19[11].offy = -185;
	a19[11].BmpId = "BOSS��ɫ��12";             a19[11].ContinueFrame = 2;         a19[11].offx = -5;                  a19[12].offy = -186;
	a19[12].BmpId = "BOSS��ɫ��13";             a19[12].ContinueFrame = 2;         a19[12].offx = 0;		          a19[13].offy = -172;
	for (int i = 2; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ħ����Ů�׽�վ\\pt010_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ħ����Ů�׽�վ\\pt010_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ħ����Ů�׽�վ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ħ����Ů�׽�վ2", "ħ����Ů�׽�վ2", 0, 0,     287       , 343		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ3", "ħ����Ů�׽�վ3", 0, 0,     287       , 344		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ4", "ħ����Ů�׽�վ4", 0, 0,     287       , 344		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ5", "ħ����Ů�׽�վ5", 0, 0,     287       , 345		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ6", "ħ����Ů�׽�վ6", 0, 0,     287       , 344		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ7", "ħ����Ů�׽�վ7", 0, 0,     287       , 344		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ8", "ħ����Ů�׽�վ8", 0, 0,     287       , 343		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ9", "ħ����Ů�׽�վ9", 0, 0,     287       , 343		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ10", "ħ����Ů�׽�վ10", 0, 0, 287       , 342		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ11", "ħ����Ů�׽�վ11", 0, 0, 287       , 342		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ12", "ħ����Ů�׽�վ12", 0, 0, 287       , 343		, 0xffffff);
	go->AddBmp("ħ����Ů�׽�վ13", "ħ����Ů�׽�վ13", 0, 0, 287       , 343		, 0xffffff);
	a20[0].BmpId =   "ħ����Ů�׽�վ2";               a20[0].ContinueFrame = 2;           a20[0].offx = 32;                     a20   [0 ].offy = -145;
	a20[1].BmpId =   "ħ����Ů�׽�վ3";               a20[1].ContinueFrame = 2;           a20[1].offx = 29;                     a20   [1 ].offy = -166;
	a20[2].BmpId =   "ħ����Ů�׽�վ4";               a20[2].ContinueFrame = 2;           a20[2].offx = 4;		                  a20   [2 ].offy = -165;
	a20[3].BmpId =   "ħ����Ů�׽�վ5";               a20[3].ContinueFrame = 2;           a20[3].offx = 11;                     a20   [3 ].offy = -153;
	a20[4].BmpId =   "ħ����Ů�׽�վ6";               a20[4].ContinueFrame = 2;           a20[4].offx = 11;	                  a20   [4 ].offy = -142;
	a20[5].BmpId =   "ħ����Ů�׽�վ7";               a20[5].ContinueFrame = 2;           a20[5].offx = -9;                      a20   [5 ].offy = -142;
	a20[6].BmpId =   "ħ����Ů�׽�վ8";               a20[6].ContinueFrame = 2;           a20[6].offx = -8;                      a20   [6 ].offy = -143;
	a20[7].BmpId =   "ħ����Ů�׽�վ9";               a20[7].ContinueFrame = 2;           a20[7].offx = -17;			          a20   [7 ].offy = -143;
	a20[8].BmpId =   "ħ����Ů�׽�վ10";             a20[8].ContinueFrame = 2;           a20[8].offx = -23;                    a20   [8 ].offy = -148;
	a20[9].BmpId =   "ħ����Ů�׽�վ11";             a20[9].ContinueFrame = 2;           a20[9].offx = -9;	                  a20   [9 ].offy = -178;
	a20[10].BmpId = "ħ����Ů�׽�վ12";             a20[10].ContinueFrame = 2;         a20[10].offx = -1;                    a20   [10 ].offy = -185;
	a20[11].BmpId = "ħ����Ů�׽�վ13";             a20[11].ContinueFrame = 2;         a20[11].offx = -5;                    a20   [11 ].offy = -186;
	for (int i = 0; i < 5; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ħ����Ů�׽���\\pt054_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ħ����Ů�׽�վ\\pt010_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ħ����Ů�׽���%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ħ����Ů�׽���0", "ħ����Ů�׽���0", 0, 0, 277, 350, 0xffffff);
	go->AddBmp("ħ����Ů�׽���1", "ħ����Ů�׽���1", 0, 0, 281, 362, 0xffffff);
	go->AddBmp("ħ����Ů�׽���2", "ħ����Ů�׽���2", 0, 0, 267, 360, 0xffffff);
	go->AddBmp("ħ����Ů�׽���3", "ħ����Ů�׽���3", 0, 0, 268, 356, 0xffffff);
	go->AddBmp("ħ����Ů�׽���4", "ħ����Ů�׽���4", 0, 0, 278, 353, 0xffffff);

	a21[0].BmpId = "ħ����Ů�׽���0";               a21[0].ContinueFrame = 2;           a21[0].offx = 39;                       a21[0].offy = -116;
	a21[1].BmpId = "ħ����Ů�׽���1";               a21[1].ContinueFrame = 2;           a21[1].offx = 40;                       a21[1].offy = -115;
	a21[2].BmpId = "ħ����Ů�׽���2";               a21[2].ContinueFrame = 2;           a21[2].offx = 45;		                  a21[2].offy = -117;
	a21[3].BmpId = "ħ����Ů�׽���3";               a21[3].ContinueFrame = 2;           a21[3].offx = 51;                       a21[3].offy = -117;
	a21[4].BmpId = "ħ����Ů�׽���4";               a21[4].ContinueFrame = 2;           a21[4].offx = 53;	                      a21[4].offy = -116;
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS����һ��\\ar611_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS����һ��\\ar611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS����һ��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS����һ��0", "BOSS����һ��0", 0,     0, 453,  396, 0xffffff);
	go->AddBmp("BOSS����һ��1", "BOSS����һ��1", 0,     0, 548,  433, 0xffffff);
	go->AddBmp("BOSS����һ��2", "BOSS����һ��2", 0,     0, 657,  461, 0xffffff);
	go->AddBmp("BOSS����һ��3", "BOSS����һ��3", 0,     0, 775,  595, 0xffffff);
	go->AddBmp("BOSS����һ��4", "BOSS����һ��4", 0,     0, 868,  578, 0xffffff);
	go->AddBmp("BOSS����һ��5", "BOSS����һ��5", 0,     0, 602,  535, 0xffffff);
	go->AddBmp("BOSS����һ��6", "BOSS����һ��6", 0,     0, 552,  505, 0xffffff);
	go->AddBmp("BOSS����һ��7", "BOSS����һ��7", 0,     0, 512,  465, 0xffffff);
	go->AddBmp("BOSS����һ��8", "BOSS����һ��8", 0,     0, 557,  468, 0xffffff);
	go->AddBmp("BOSS����һ��9", "BOSS����һ��9", 0,     0, 622,  423, 0xffffff);
	go->AddBmp("BOSS����һ��10", "BOSS����һ��10", 0, 0, 759,  444, 0xffffff);
	go->AddBmp("BOSS����һ��11", "BOSS����һ��11", 0, 0, 843,  544, 0xffffff);
	go->AddBmp("BOSS����һ��12", "BOSS����һ��12", 0, 0, 700,  592, 0xffffff);
	go->AddBmp("BOSS����һ��13", "BOSS����һ��13", 0, 0, 659,  540, 0xffffff);
	go->AddBmp("BOSS����һ��14", "BOSS����һ��14", 0, 0, 659,  446, 0xffffff);
	go->AddBmp("BOSS����һ��15", "BOSS����һ��15", 0, 0, 704,  312, 0xffffff);
	go->AddBmp("BOSS����һ��16", "BOSS����һ��16", 0, 0, 667,  261, 0xffffff);
	go->AddBmp("BOSS����һ��17", "BOSS����һ��17", 0, 0, 754, 88, 0xffffff);
	a22[0].BmpId = "BOSS����һ��0";                 a22[0].ContinueFrame = 2;                a22[0].offx = 39;                           a22[0].offy = -116;
	a22[1].BmpId = "BOSS����һ��1";                 a22[1].ContinueFrame = 2;                a22[1].offx = 40;                           a22[1].offy = -115;
	a22[2].BmpId = "BOSS����һ��2";                 a22[2].ContinueFrame = 2;                a22[2].offx = 45;		                      a22[2].offy = -117;
	a22[3].BmpId = "BOSS����һ��3";                 a22[3].ContinueFrame = 2;                a22[3].offx = 51;                           a22[3].offy = -117;
	a22[4].BmpId = "BOSS����һ��4";                 a22[4].ContinueFrame = 2;                a22[4].offx = 53;	                          a22[4].offy = -116;
	a22[5].BmpId = "BOSS����һ��5";                 a22[5].ContinueFrame = 2;                a22[5].offx = 39;                           a22[5].offy = -116;
	a22[6].BmpId = "BOSS����һ��6";                 a22[6].ContinueFrame = 2;                a22[6].offx = 40;                           a22[6].offy = -115;
	a22[7].BmpId = "BOSS����һ��7";                 a22[7].ContinueFrame = 2;                a22[7].offx = 45;		                      a22[7].offy = -117;
	a22[8].BmpId = "BOSS����һ��8";                 a22[8].ContinueFrame = 2;                a22[8].offx = 51;                           a22[8].offy = -117;
	a22[9].BmpId = "BOSS����һ��9";                 a22[9].ContinueFrame = 2;               a22[9].offx = 53;	                          a22[9].offy = -116;
	a22[10].BmpId = "BOSS����һ��10";               a22[10].ContinueFrame = 2;           a22[10].offx = 39;                           a22[10].offy = -116;
	a22[11].BmpId = "BOSS����һ��11";               a22[11].ContinueFrame = 2;           a22[11].offx = 40;                           a22[11].offy = -115;
	a22[12].BmpId = "BOSS����һ��12";               a22[12].ContinueFrame = 2;           a22[12].offx = 45;		                    a22[12].offy = -117;
	a22[13].BmpId = "BOSS����һ��13";               a22[13].ContinueFrame = 2;           a22[13].offx = 51;                           a22[13].offy = -117;
	a22[14].BmpId = "BOSS����һ��14";               a22[14].ContinueFrame = 2;           a22[14].offx = 53;	                        a22[14].offy = -116;
	a22[15].BmpId = "BOSS����һ��15";               a22[15].ContinueFrame = 2;           a22[15].offx = 53;	                        a22[15].offy = -116;
	a22[16].BmpId = "BOSS����һ��16";               a22[16].ContinueFrame = 2;           a22[16].offx = 53;	                        a22[16].offy = -116;
	a22[17].BmpId = "BOSS����һ��17";               a22[17].ContinueFrame = 2;           a22[17].offx = 53;	                        a22[17].offy = -116;
	for (int i = 0; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS���ж���\\vraref253_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS���ж���\\vraref253_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS���ж���%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS���ж���0",     "BOSS���ж���0", 0, 0,		 210		, 55, 0xffffff);
	go->AddBmp("BOSS���ж���1",     "BOSS���ж���1", 0, 0,		 198		, 58, 0xffffff);
	go->AddBmp("BOSS���ж���2",     "BOSS���ж���2", 0, 0,		 200		, 46, 0xffffff);
	go->AddBmp("BOSS���ж���3",     "BOSS���ж���3", 0, 0,		 189		, 176, 0xffffff);
	go->AddBmp("BOSS���ж���4",     "BOSS���ж���4", 0, 0,		 188		, 215, 0xffffff);
	go->AddBmp("BOSS���ж���5",     "BOSS���ж���5", 0, 0,		 240		, 239, 0xffffff);
	go->AddBmp("BOSS���ж���6",     "BOSS���ж���6", 0, 0,		 262		, 254, 0xffffff);
	go->AddBmp("BOSS���ж���7",     "BOSS���ж���7", 0, 0,		 245		, 260, 0xffffff);
	go->AddBmp("BOSS���ж���8",     "BOSS���ж���8", 0, 0,		 224		, 201, 0xffffff);
	go->AddBmp("BOSS���ж���9",     "BOSS���ж���9", 0, 0,		 253		, 158, 0xffffff);
	go->AddBmp("BOSS���ж���10", "BOSS���ж���10", 0, 0,		 246		, 156, 0xffffff);
	go->AddBmp("BOSS���ж���11", "BOSS���ж���11", 0, 0,		 229		, 180, 0xffffff);
	go->AddBmp("BOSS���ж���12", "BOSS���ж���12", 0, 0,		 217		, 124, 0xffffff);
	go->AddBmp("BOSS���ж���13", "BOSS���ж���13", 0, 0,		 197		, 122, 0xffffff);
	a23[0].BmpId =   "BOSS���ж���0";                 a23[0].ContinueFrame = 2;             a23[0].offx = 39;                           a23[0].offy = -116;
	a23[1].BmpId =   "BOSS���ж���1";                 a23[1].ContinueFrame = 2;             a23[1].offx = 40;                           a23[1].offy = -115;
	a23[2].BmpId =   "BOSS���ж���2";                 a23[2].ContinueFrame = 2;             a23[2].offx = 45;		                      a23[2].offy = -117;
	a23[3].BmpId =   "BOSS���ж���3";                 a23[3].ContinueFrame = 2;             a23[3].offx = 51;                           a23[3].offy = -117;
	a23[4].BmpId =   "BOSS���ж���4";                 a23[4].ContinueFrame = 2;             a23[4].offx = 53;	                          a23[4].offy = -116;
	a23[5].BmpId =   "BOSS���ж���5";                 a23[5].ContinueFrame = 2;             a23[5].offx = 39;                           a23[5].offy = -116;
	a23[6].BmpId =   "BOSS���ж���6";                 a23[6].ContinueFrame = 2;             a23[6].offx = 40;                           a23[6].offy = -115;
	a23[7].BmpId =   "BOSS���ж���7";                 a23[7].ContinueFrame = 2;             a23[7].offx = 45;		                      a23[7].offy = -117;
	a23[8].BmpId =   "BOSS���ж���8";                 a23[8].ContinueFrame = 2;             a23[8].offx = 51;                           a23[8].offy = -117;
	a23[9].BmpId =   "BOSS���ж���9";                 a23[9].ContinueFrame = 2;             a23[9].offx = 53;	                          a23[9].offy = -116;
	a23[10].BmpId = "BOSS���ж���10";               a23[10].ContinueFrame = 2;           a23[10].offx = 39;                         a23[10].offy = -116;
	a23[11].BmpId = "BOSS���ж���11";               a23[11].ContinueFrame = 2;           a23[11].offx = 40;                         a23[11].offy = -115;
	a23[12].BmpId = "BOSS���ж���12";               a23[12].ContinueFrame = 2;           a23[12].offx = 45;		                  a23[12].offy = -117;
	a23[13].BmpId = "BOSS���ж���13";               a23[13].ContinueFrame = 2;           a23[13].offx = 51;                         a23[13].offy = -117;
	for (int i = 0; i < 19; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ȦȦ\\rc234_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ȦȦ\\rc234_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������ȦȦ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������ȦȦ0",   "������ȦȦ0",   0, 0, 320, 247, 0xffffff);
	go->AddBmp("������ȦȦ1",   "������ȦȦ1",   0, 0, 391, 259, 0xffffff);
	go->AddBmp("������ȦȦ2",   "������ȦȦ2",   0, 0, 386, 250, 0xffffff);
	go->AddBmp("������ȦȦ3",   "������ȦȦ3",   0, 0, 327, 254, 0xffffff);
	go->AddBmp("������ȦȦ4",   "������ȦȦ4",   0, 0, 378, 256, 0xffffff);
	go->AddBmp("������ȦȦ5",   "������ȦȦ5",   0, 0, 438, 255, 0xffffff);
	go->AddBmp("������ȦȦ6",   "������ȦȦ6",   0, 0, 499, 258, 0xffffff);
	go->AddBmp("������ȦȦ7",   "������ȦȦ7",   0, 0, 456, 262, 0xffffff);
	go->AddBmp("������ȦȦ8",   "������ȦȦ8",   0, 0, 447, 267, 0xffffff);
	go->AddBmp("������ȦȦ9",   "������ȦȦ9",   0, 0, 472, 258, 0xffffff);
	go->AddBmp("������ȦȦ10", "������ȦȦ10", 0, 0, 540, 258, 0xffffff);
	go->AddBmp("������ȦȦ11", "������ȦȦ11", 0, 0, 461, 263, 0xffffff);
	go->AddBmp("������ȦȦ12", "������ȦȦ12", 0, 0, 474, 269, 0xffffff);
	go->AddBmp("������ȦȦ13", "������ȦȦ13", 0, 0, 457, 259, 0xffffff);
	go->AddBmp("������ȦȦ14", "������ȦȦ14", 0, 0, 553, 258, 0xffffff);
	go->AddBmp("������ȦȦ15", "������ȦȦ15", 0, 0, 501, 260, 0xffffff);
	go->AddBmp("������ȦȦ16", "������ȦȦ16", 0, 0, 400, 261 , 0xffffff);
	go->AddBmp("������ȦȦ17", "������ȦȦ17", 0, 0, 372, 265, 0xffffff);
	go->AddBmp("������ȦȦ18", "������ȦȦ18", 0, 0, 369, 265, 0xffffff);
	a24[0].BmpId =   "������ȦȦ0";                 a24[0].ContinueFrame =  5;             a24[0].offx = 39;									     a24[0].offy = -116;
	a24[1].BmpId =   "������ȦȦ1";                 a24[1].ContinueFrame =  5;             a24[1].offx = 40;									     a24[1].offy = -115;
	a24[2].BmpId =   "������ȦȦ2";                 a24[2].ContinueFrame =  5;             a24[2].offx = 45;									     a24[2].offy = -117;
	a24[3].BmpId =   "������ȦȦ3";                 a24[3].ContinueFrame =  5;             a24[3].offx = 51;									     a24[3].offy = -117;
	a24[4].BmpId =   "������ȦȦ4";                 a24[4].ContinueFrame =  5;             a24[4].offx = 53;									     a24[4].offy = -116;
	a24[5].BmpId =   "������ȦȦ5";                 a24[5].ContinueFrame =  5;             a24[5].offx = 39;									     a24[5].offy = -116;
	a24[6].BmpId =   "������ȦȦ6";                 a24[6].ContinueFrame =  5;             a24[6].offx = 40;									     a24[6].offy = -115;
	a24[7].BmpId =   "������ȦȦ7";                 a24[7].ContinueFrame =  5;             a24[7].offx = 45;									     a24[7].offy = -117;
	a24[8].BmpId =   "������ȦȦ8";                 a24[8].ContinueFrame =  5;             a24[8].offx = 51;									     a24[8].offy = -117;
	a24[9].BmpId =   "������ȦȦ9";                 a24[9].ContinueFrame =  5;             a24[9].offx = 53;									     a24[9].offy = -116;
	a24[10].BmpId = "������ȦȦ10";               a24[10].ContinueFrame =5;           a24[10].offx = 39;								         a24[10].offy = -116;
	a24[11].BmpId = "������ȦȦ11";               a24[11].ContinueFrame =5;           a24[11].offx = 40;								         a24[11].offy = -115;
	a24[12].BmpId = "������ȦȦ12";               a24[12].ContinueFrame =5;           a24[12].offx = 45;								         a24[12].offy = -117;
	a24[13].BmpId = "������ȦȦ13";               a24[13].ContinueFrame =5;           a24[13].offx = 51;								         a24[13].offy = -117;
	a24[14].BmpId = "������ȦȦ14";               a24[14].ContinueFrame =5;           a24[14].offx = 51;								         a24[14].offy = -117;
	a24[15].BmpId = "������ȦȦ15";               a24[15].ContinueFrame =5;           a24[15].offx = 51;								         a24[15].offy = -117;
	a24[16].BmpId = "������ȦȦ16";               a24[16].ContinueFrame =5;           a24[16].offx = 51;								         a24[16].offy = -117;
	a24[17].BmpId = "������ȦȦ17";               a24[17].ContinueFrame =5;           a24[17].offx = 51;								         a24[17].offy = -117;
	a24[18].BmpId = "������ȦȦ18";               a24[18].ContinueFrame =5;           a24[18].offx = 51;								         a24[18].offy = -117;
	for (int i = 0; i < 21; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ӡ��\\rc430_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ӡ��\\rc430_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������ӡ��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������ӡ��0",   "������ӡ��0",   0, 0, 422, 419, 0xffffff);
	go->AddBmp("������ӡ��1",   "������ӡ��1",   0, 0, 377, 386, 0xffffff);
	go->AddBmp("������ӡ��2",   "������ӡ��2",   0, 0, 275, 334, 0xffffff);
	go->AddBmp("������ӡ��3",   "������ӡ��3",   0, 0, 260, 330, 0xffffff);
	go->AddBmp("������ӡ��4",   "������ӡ��4",   0, 0, 257, 332, 0xffffff);
	go->AddBmp("������ӡ��5",   "������ӡ��5",   0, 0, 195, 333, 0xffffff);
	go->AddBmp("������ӡ��6",   "������ӡ��6",   0, 0, 279, 335, 0xffffff);
	go->AddBmp("������ӡ��7",   "������ӡ��7",   0, 0, 462, 337, 0xffffff);
	go->AddBmp("������ӡ��8",   "������ӡ��8",   0, 0, 608, 347, 0xffffff);
	go->AddBmp("������ӡ��9",   "������ӡ��9",   0, 0, 722, 442, 0xffffff);
	go->AddBmp("������ӡ��10", "������ӡ��10", 0, 0, 640, 397, 0xffffff);
	go->AddBmp("������ӡ��11", "������ӡ��11", 0, 0, 640, 411, 0xffffff);
	go->AddBmp("������ӡ��12", "������ӡ��12", 0, 0, 659, 392, 0xffffff);
	go->AddBmp("������ӡ��13", "������ӡ��13", 0, 0, 651, 572, 0xffffff);
	go->AddBmp("������ӡ��14", "������ӡ��14", 0, 0, 642, 581, 0xffffff);
	go->AddBmp("������ӡ��15", "������ӡ��15", 0, 0, 639, 588, 0xffffff);
	go->AddBmp("������ӡ��16", "������ӡ��16", 0, 0, 660, 583, 0xffffff);
	go->AddBmp("������ӡ��17", "������ӡ��17", 0, 0, 578, 528, 0xffffff);
	go->AddBmp("������ӡ��18", "������ӡ��18", 0, 0, 518, 411, 0xffffff);
	go->AddBmp("������ӡ��19", "������ӡ��19", 0, 0, 471, 403, 0xffffff);
	go->AddBmp("������ӡ��20", "������ӡ��20", 0, 0, 368, 414, 0xffffff);
	a25[0].BmpId =   "������ӡ��0";                 a25[0].ContinueFrame = 5;             a25[0].offx = 39;									     a25[0].offy = -116;
	a25[1].BmpId =   "������ӡ��1";                 a25[1].ContinueFrame = 5;             a25[1].offx = 40;									     a25[1].offy = -115;
	a25[2].BmpId =   "������ӡ��2";                 a25[2].ContinueFrame = 5;             a25[2].offx = 45;									     a25[2].offy = -117;
	a25[3].BmpId =   "������ӡ��3";                 a25[3].ContinueFrame = 5;             a25[3].offx = 51;									     a25[3].offy = -117;
	a25[4].BmpId =   "������ӡ��4";                 a25[4].ContinueFrame = 5;             a25[4].offx = 53;									     a25[4].offy = -116;
	a25[5].BmpId =   "������ӡ��5";                 a25[5].ContinueFrame = 5;             a25[5].offx = 39;									     a25[5].offy = -116;
	a25[6].BmpId =   "������ӡ��6";                 a25[6].ContinueFrame = 5;             a25[6].offx = 40;									     a25[6].offy = -115;
	a25[7].BmpId =   "������ӡ��7";                 a25[7].ContinueFrame = 5;             a25[7].offx = 45;									     a25[7].offy = -117;
	a25[8].BmpId =   "������ӡ��8";                 a25[8].ContinueFrame = 5;             a25[8].offx = 51;									     a25[8].offy = -117;
	a25[9].BmpId =   "������ӡ��9";                 a25[9].ContinueFrame = 5;             a25[9].offx = 53;									     a25[9].offy = -116;
	a25[10].BmpId = "������ӡ��10";               a25[10].ContinueFrame = 5;           a25[10].offx = 39;								         a25[10].offy = -116;
	a25[11].BmpId = "������ӡ��11";               a25[11].ContinueFrame = 5;           a25[11].offx = 40;								         a25[11].offy = -115;
	a25[12].BmpId = "������ӡ��12";               a25[12].ContinueFrame = 5;           a25[12].offx = 45;								         a25[12].offy = -117;
	a25[13].BmpId = "������ӡ��13";               a25[13].ContinueFrame = 5;           a25[13].offx = 51;								         a25[13].offy = -117;
	a25[14].BmpId = "������ӡ��14";               a25[14].ContinueFrame = 5;           a25[14].offx = 51;								         a25[14].offy = -117;
	a25[15].BmpId = "������ӡ��15";               a25[15].ContinueFrame = 5;           a25[15].offx = 51;								         a25[15].offy = -117;
	a25[16].BmpId = "������ӡ��16";               a25[16].ContinueFrame = 5;           a25[16].offx = 51;								         a25[16].offy = -117;
	a25[17].BmpId = "������ӡ��17";               a25[17].ContinueFrame = 5;           a25[17].offx = 51;								         a25[17].offy = -117;
	a25[18].BmpId = "������ӡ��18";               a25[18].ContinueFrame = 5;           a25[18].offx = 51;								         a25[18].offy = -117;
	a25[19].BmpId = "������ӡ��19";               a25[19].ContinueFrame = 5;           a25[19].offx = 51;								         a25[19].offy = -117;
	a25[20].BmpId = "������ӡ��20";               a25[20].ContinueFrame = 5;           a25[20].offx = 51;								         a25[20].offy = -117;
	for (int i = 0; i < 16; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ţ��\\rc432_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ţ��\\rc432_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������ţ��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}

	go->AddBmp("������ţ��0", "������ţ��0", 0, 0, 319, 400, 0xffffff);
	go->AddBmp("������ţ��1", "������ţ��1", 0, 0, 333, 365, 0xffffff);
	go->AddBmp("������ţ��2", "������ţ��2", 0, 0, 328, 333, 0xffffff);
	go->AddBmp("������ţ��3", "������ţ��3", 0, 0, 311, 341, 0xffffff);
	go->AddBmp("������ţ��4", "������ţ��4", 0, 0, 262, 354, 0xffffff);
	go->AddBmp("������ţ��5", "������ţ��5", 0, 0, 243, 337, 0xffffff);
	go->AddBmp("������ţ��6", "������ţ��6", 0, 0, 221, 330, 0xffffff);
	go->AddBmp("������ţ��7", "������ţ��7", 0, 0, 189, 322, 0xffffff);
	go->AddBmp("������ţ��8", "������ţ��8", 0, 0, 286, 335, 0xffffff);
	go->AddBmp("������ţ��9", "������ţ��9", 0, 0, 319, 346, 0xffffff);
	go->AddBmp("������ţ��10", "������ţ��10", 0, 0, 332, 327, 0xffffff);
	go->AddBmp("������ţ��11", "������ţ��11", 0, 0, 301, 347, 0xffffff);
	go->AddBmp("������ţ��12", "������ţ��12", 0, 0, 361, 337, 0xffffff);
	go->AddBmp("������ţ��13", "������ţ��13", 0, 0, 297, 405, 0xffffff);
	go->AddBmp("������ţ��14", "������ţ��14", 0, 0, 331, 409, 0xffffff);
	go->AddBmp("������ţ��15", "������ţ��15", 0, 0, 296, 410, 0xffffff);
	a26[0].BmpId =   "������ţ��0";                 a26[0].ContinueFrame = 5;             a26[0].offx = 39;									     a26[0].offy = -116;
	a26[1].BmpId =   "������ţ��1";                 a26[1].ContinueFrame = 5;             a26[1].offx = 40;									     a26[1].offy = -115;
	a26[2].BmpId =   "������ţ��2";                 a26[2].ContinueFrame = 5;             a26[2].offx = 45;									     a26[2].offy = -117;
	a26[3].BmpId =   "������ţ��3";                 a26[3].ContinueFrame = 5;             a26[3].offx = 51;									     a26[3].offy = -117;
	a26[4].BmpId =   "������ţ��4";                 a26[4].ContinueFrame = 5;             a26[4].offx = 53;									     a26[4].offy = -116;
	a26[5].BmpId =   "������ţ��5";                 a26[5].ContinueFrame = 5;             a26[5].offx = 39;									     a26[5].offy = -116;
	a26[6].BmpId =   "������ţ��6";                 a26[6].ContinueFrame = 5;             a26[6].offx = 40;									     a26[6].offy = -115;
	a26[7].BmpId =   "������ţ��7";                 a26[7].ContinueFrame = 5;             a26[7].offx = 45;									     a26[7].offy = -117;
	a26[8].BmpId =   "������ţ��8";                 a26[8].ContinueFrame = 5;             a26[8].offx = 51;									     a26[8].offy = -117;
	a26[9].BmpId =   "������ţ��9";                 a26[9].ContinueFrame = 5;             a26[9].offx = 53;									     a26[9].offy = -116;
	a26[10].BmpId = "������ţ��10";               a26[10].ContinueFrame = 5;           a26[10].offx = 39;								         a26[10].offy = -116;
	a26[11].BmpId = "������ţ��11";               a26[11].ContinueFrame = 5;           a26[11].offx = 40;								         a26[11].offy = -115;
	a26[12].BmpId = "������ţ��12";               a26[12].ContinueFrame = 5;           a26[12].offx = 45;								         a26[12].offy = -117;
	a26[13].BmpId = "������ţ��13";               a26[13].ContinueFrame = 5;           a26[13].offx = 51;								         a26[13].offy = -117;
	a26[14].BmpId = "������ţ��14";               a26[14].ContinueFrame = 5;           a26[14].offx = 51;								         a26[14].offy = -117;
	a26[15].BmpId = "������ţ��15";               a26[15].ContinueFrame = 5;           a26[15].offx = 51;								         a26[15].offy = -117;
	for (int i = 0; i < 4; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ţ��\\vrrcef_stmB0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ţ��\\vrrcef_stmB%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������ţ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������ţ0", "������ţ0", 0, 0, 386, 257, 0xffffff);
	go->AddBmp("������ţ1", "������ţ1", 0, 0, 415, 262, 0xffffff);
	go->AddBmp("������ţ2", "������ţ2", 0, 0, 440, 250, 0xffffff);
	go->AddBmp("������ţ3", "������ţ3", 0, 0, 421, 259, 0xffffff);

	a27[0].BmpId = "������ţ0";                 a27[0].ContinueFrame = 5;             a27[0].offx = 39;									     a27[0].offy = -116;
	a27[1].BmpId = "������ţ1";                 a27[1].ContinueFrame = 5;             a27[1].offx = 40;									     a27[1].offy = -115;
	a27[2].BmpId = "������ţ2";                 a27[2].ContinueFrame = 5;             a27[2].offx = 45;									     a27[2].offy = -117;
	a27[3].BmpId = "������ţ3";                 a27[3].ContinueFrame = 5;             a27[3].offx = 51;									     a27[3].offy = -117;
	for (int i = 0; i < 19; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������\\rc406_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������\\rc406_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "��������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("��������0", "��������0",     0, 0, 269, 364, 0xffffff);
	go->AddBmp("��������1", "��������1",     0, 0, 238, 360, 0xffffff);
	go->AddBmp("��������2", "��������2",     0, 0, 250, 382, 0xffffff);
	go->AddBmp("��������3", "��������3",     0, 0, 328, 381, 0xffffff);
	go->AddBmp("��������4", "��������4",     0, 0, 308, 375, 0xffffff);
	go->AddBmp("��������5", "��������5",     0, 0, 249, 346, 0xffffff);
	go->AddBmp("��������6", "��������6",     0, 0, 216, 341, 0xffffff);
	go->AddBmp("��������7", "��������7",     0, 0, 260, 358, 0xffffff);
	go->AddBmp("��������8", "��������8",     0, 0, 298, 376, 0xffffff);
	go->AddBmp("��������9", "��������9",     0, 0, 327, 392, 0xffffff);
	go->AddBmp("��������10", "��������10", 0, 0, 380, 382, 0xffffff);
	go->AddBmp("��������11", "��������11", 0, 0, 428, 383, 0xffffff);
	go->AddBmp("��������12", "��������12", 0, 0, 423, 387, 0xffffff);
	go->AddBmp("��������13", "��������13", 0, 0, 343, 393, 0xffffff);
	go->AddBmp("��������14", "��������14", 0, 0, 285, 383, 0xffffff);
	go->AddBmp("��������15", "��������15", 0, 0, 280, 373, 0xffffff);
	go->AddBmp("��������16", "��������16", 0, 0, 263, 378, 0xffffff);
	go->AddBmp("��������17", "��������17", 0, 0, 288, 372, 0xffffff);
	go->AddBmp("��������18", "��������18", 0, 0, 316, 373, 0xffffff);
	a28[0].BmpId = "��������0";                   a28[0].ContinueFrame = 5;             a28[0].offx = 39;									     a28[0].offy = -116;
	a28[1].BmpId = "��������1";                   a28[1].ContinueFrame = 5;             a28[1].offx = 40;									     a28[1].offy = -115;
	a28[2].BmpId = "��������2";                   a28[2].ContinueFrame = 5;             a28[2].offx = 45;									     a28[2].offy = -117;
	a28[3].BmpId = "��������3";                   a28[3].ContinueFrame = 5;             a28[3].offx = 51;									     a28[3].offy = -117;
	a28[4].BmpId = "��������4";                   a28[0].ContinueFrame = 5;             a28[4].offx = 39;									     a28[4].offy = -116;
	a28[5].BmpId = "��������5";                   a28[1].ContinueFrame = 5;             a28[5].offx = 40;									     a28[5].offy = -115;
	a28[6].BmpId = "��������6";                   a28[2].ContinueFrame = 5;             a28[6].offx = 45;									     a28[6].offy = -117;
	a28[7].BmpId = "��������7";                   a28[3].ContinueFrame = 5;             a28[7].offx = 51;									     a28[7].offy = -117;
	a28[8].BmpId = "��������8";                   a28[0].ContinueFrame = 5;             a28[8].offx = 39;									     a28[8].offy = -116;
	a28[9].BmpId = "��������9";                   a28[1].ContinueFrame = 5;             a28[9].offx = 40;									     a28[9].offy = -115;
	a28[10].BmpId = "��������10";                 a28[2].ContinueFrame = 5;             a28[10].offx = 45;									     a28[10].offy = -117;
	a28[11].BmpId = "��������11";                 a28[3].ContinueFrame = 5;             a28[11].offx = 51;									     a28[11].offy = -117;
	a28[12].BmpId = "��������12";                 a28[0].ContinueFrame = 5;             a28[12].offx = 39;									     a28[12].offy = -116;
	a28[13].BmpId = "��������13";                 a28[1].ContinueFrame = 5;             a28[13].offx = 40;									     a28[13].offy = -115;
	a28[14].BmpId = "��������14";                 a28[2].ContinueFrame = 5;             a28[14].offx = 45;									     a28[14].offy = -117;
	a28[15].BmpId = "��������15";                 a28[3].ContinueFrame = 5;             a28[15].offx = 51;									     a28[15].offy = -117;
	a28[16].BmpId = "��������16";                 a28[3].ContinueFrame = 5;             a28[16].offx = 51;									     a28[16].offy = -117;
	a28[17].BmpId = "��������17";                 a28[3].ContinueFrame = 5;             a28[17].offx = 51;									     a28[17].offy = -117;
	a28[18].BmpId = "��������18";                 a28[3].ContinueFrame = 5;             a28[18].offx = 51;									     a28[18].offy = -117;
	for (int i = 0; i < 13; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������\\rc001_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������\\rc001_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "��������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("��������0",   "��������0", 0, 0,   233, 413, 0xffffff);
	go->AddBmp("��������1",   "��������1", 0, 0,   242, 442, 0xffffff);
	go->AddBmp("��������2",   "��������2", 0, 0,   257, 472, 0xffffff);
	go->AddBmp("��������3",   "��������3", 0, 0,   310, 481, 0xffffff);
	go->AddBmp("��������4",   "��������4", 0, 0,   381, 490, 0xffffff);
	go->AddBmp("��������5",   "��������5", 0, 0,   409, 435, 0xffffff);
	go->AddBmp("��������6",   "��������6", 0, 0,   495, 430, 0xffffff);
	go->AddBmp("��������7",   "��������7", 0, 0,   353, 414, 0xffffff);
	go->AddBmp("��������8",   "��������8", 0, 0,   342, 406, 0xffffff);
	go->AddBmp("��������9",   "��������9", 0, 0,   280, 404, 0xffffff);
	go->AddBmp("��������10", "��������10", 0, 0, 266, 402, 0xffffff);
	go->AddBmp("��������11", "��������11", 0, 0, 251, 402, 0xffffff);
	go->AddBmp("��������12", "��������12", 0, 0, 245, 403, 0xffffff);
	a29[0].BmpId =   "��������0";                   a29[0].ContinueFrame = 5;               a29[0].offx = 39;									          a29[0].offy = -116;
	a29[1].BmpId =   "��������1";                   a29[1].ContinueFrame = 5;               a29[1].offx = 40;									          a29[1].offy = -115;
	a29[2].BmpId =   "��������2";                   a29[2].ContinueFrame = 5;               a29[2].offx = 45;									          a29[2].offy = -117;
	a29[3].BmpId =   "��������3";                   a29[3].ContinueFrame = 5;               a29[3].offx = 51;									          a29[3].offy = -117;
	a29[4].BmpId =   "��������4";                   a29[4].ContinueFrame = 5;               a29[4].offx = 39;									          a29[4].offy = -116;
	a29[5].BmpId =   "��������5";                   a29[5].ContinueFrame = 5;               a29[5].offx = 40;									          a29[5].offy = -115;
	a29[6].BmpId =   "��������6";                   a29[6].ContinueFrame = 5;               a29[6].offx = 45;									          a29[6].offy = -117;
	a29[7].BmpId =   "��������7";                   a29[7].ContinueFrame = 5;               a29[7].offx = 51;									          a29[7].offy = -117;
	a29[8].BmpId =   "��������8";                   a29[8].ContinueFrame = 5;               a29[8].offx = 39;									          a29[8].offy = -116;
	a29[9].BmpId =   "��������9";                   a29[9].ContinueFrame = 5;               a29[9].offx = 40;									          a29[9].offy = -115;
	a29[10].BmpId = "��������10";                 a29[10].ContinueFrame = 5;             a29[10].offx = 45;									     a29[10].offy = -117;
	a29[11].BmpId = "��������11";                 a29[11].ContinueFrame = 5;             a29[11].offx = 51;									     a29[11].offy = -117;
	a29[12].BmpId = "��������12";                 a29[12].ContinueFrame = 5;             a29[12].offx = 39;									     a29[12].offy = -116;
	for (int i = 0; i < 15; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\����������\\rc212_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\����������\\rc212_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "����������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("����������0",   "����������0", 0, 0,   321,  400, 0xffffff);
	go->AddBmp("����������1",   "����������1", 0, 0,   352,  377, 0xffffff);
	go->AddBmp("����������2",   "����������2", 0, 0,   407,  437, 0xffffff);
	go->AddBmp("����������3",   "����������3", 0, 0,   465,  391, 0xffffff);
	go->AddBmp("����������4",   "����������4", 0, 0,   389,  417, 0xffffff);
	go->AddBmp("����������5",   "����������5", 0, 0,   370,  413, 0xffffff);
	go->AddBmp("����������6",   "����������6", 0, 0,   355,  393, 0xffffff);
	go->AddBmp("����������7",   "����������7", 0, 0,   370,  395, 0xffffff);
	go->AddBmp("����������8",   "����������8", 0, 0,   418,  432, 0xffffff);
	go->AddBmp("����������9",   "����������9", 0, 0,   439,  380, 0xffffff);
	go->AddBmp("����������10", "����������10", 0, 0, 457,378, 0xffffff);
	go->AddBmp("����������11", "����������11", 0, 0, 466,374, 0xffffff);
	go->AddBmp("����������12", "����������12", 0, 0, 395,375, 0xffffff);
	go->AddBmp("����������13", "����������13", 0, 0, 349,382, 0xffffff);
	go->AddBmp("����������14", "����������14", 0, 0, 335,403, 0xffffff);
	a30[0].BmpId =   "����������0";                   a30[0].ContinueFrame = 5;               a30[0].offx = 39;									     a30[0].offy = -116;
	a30[1].BmpId =   "����������1";                   a30[1].ContinueFrame = 5;               a30[1].offx = 40;									     a30[1].offy = -115;
	a30[2].BmpId =   "����������2";                   a30[2].ContinueFrame = 5;               a30[2].offx = 45;									     a30[2].offy = -117;
	a30[3].BmpId =   "����������3";                   a30[3].ContinueFrame = 5;               a30[3].offx = 51;									     a30[3].offy = -117;
	a30[4].BmpId =   "����������4";                   a30[4].ContinueFrame = 5;               a30[4].offx = 39;									     a30[4].offy = -116;
	a30[5].BmpId =   "����������5";                   a30[5].ContinueFrame = 5;               a30[5].offx = 40;									     a30[5].offy = -115;
	a30[6].BmpId =   "����������6";                   a30[6].ContinueFrame = 5;               a30[6].offx = 45;									     a30[6].offy = -117;
	a30[7].BmpId =   "����������7";                   a30[7].ContinueFrame = 5;               a30[7].offx = 51;									     a30[7].offy = -117;
	a30[8].BmpId =   "����������8";                   a30[8].ContinueFrame = 5;               a30[8].offx = 39;									     a30[8].offy = -116;
	a30[9].BmpId =   "����������9";                   a30[9].ContinueFrame = 5;               a30[9].offx = 40;									     a30[9].offy = -115;
	a30[10].BmpId = "����������10";                 a30[10].ContinueFrame = 5;             a30[10].offx = 45;									     a30[10].offy = -117;
	a30[11].BmpId = "����������11";                 a30[11].ContinueFrame = 5;             a30[11].offx = 51;									     a30[11].offy = -117;
	a30[12].BmpId = "����������12";                 a30[12].ContinueFrame = 5;             a30[12].offx = 39;									     a30[12].offy = -116;
	a30[13].BmpId = "����������13";                 a30[13].ContinueFrame = 5;             a30[13].offx = 39;									     a30[13].offy = -116;
	a30[14].BmpId = "����������14";                 a30[14].ContinueFrame = 5;             a30[14].offx = 39;									     a30[14].offy = -116;
	for (int i = 0; i < 17; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������ˮ\\rc213_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������ˮ\\rc213_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "��������ˮ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("��������ˮ0",   "��������ˮ0", 0, 0,  305,   405, 0xffffff);
	go->AddBmp("��������ˮ1",   "��������ˮ1", 0, 0,  365,   396, 0xffffff);
	go->AddBmp("��������ˮ2",   "��������ˮ2", 0, 0,  413,   383, 0xffffff);
	go->AddBmp("��������ˮ3",   "��������ˮ3", 0, 0,  393,   364, 0xffffff);
	go->AddBmp("��������ˮ4",   "��������ˮ4", 0, 0,  355,   365, 0xffffff);
	go->AddBmp("��������ˮ5",   "��������ˮ5", 0, 0,  318,   348, 0xffffff);
	go->AddBmp("��������ˮ6",   "��������ˮ6", 0, 0,  255,   348, 0xffffff);
	go->AddBmp("��������ˮ7",   "��������ˮ7", 0, 0,  256,   354, 0xffffff);
	go->AddBmp("��������ˮ8",   "��������ˮ8", 0, 0,  250,   365, 0xffffff);
	go->AddBmp("��������ˮ9",   "��������ˮ9", 0, 0,  330,   365, 0xffffff);
	go->AddBmp("��������ˮ10", "��������ˮ10", 0, 0,428, 404, 0xffffff);
	go->AddBmp("��������ˮ11", "��������ˮ11", 0, 0,471, 379, 0xffffff);
	go->AddBmp("��������ˮ12", "��������ˮ12", 0, 0,453, 382, 0xffffff);
	go->AddBmp("��������ˮ13", "��������ˮ13", 0, 0, 444, 374, 0xffffff);
	go->AddBmp("��������ˮ14", "��������ˮ14", 0, 0, 361, 396, 0xffffff);
	go->AddBmp("��������ˮ15", "��������ˮ15", 0, 0, 328, 406, 0xffffff);
	go->AddBmp("��������ˮ16", "��������ˮ16", 0, 0,289, 407, 0xffffff);
	a31[0].BmpId =   "��������ˮ0";                   a31[0].ContinueFrame = 5;               a31[0].offx = 39;									     a31[0].offy = -116;
	a31[1].BmpId =   "��������ˮ1";                   a31[1].ContinueFrame = 5;               a31[1].offx = 40;									     a31[1].offy = -115;
	a31[2].BmpId =   "��������ˮ2";                   a31[2].ContinueFrame = 5;               a31[2].offx = 45;									     a31[2].offy = -117;
	a31[3].BmpId =   "��������ˮ3";                   a31[3].ContinueFrame = 5;               a31[3].offx = 51;									     a31[3].offy = -117;
	a31[4].BmpId =   "��������ˮ4";                   a31[4].ContinueFrame = 5;               a31[4].offx = 39;									     a31[4].offy = -116;
	a31[5].BmpId =   "��������ˮ5";                   a31[5].ContinueFrame = 5;               a31[5].offx = 40;									     a31[5].offy = -115;
	a31[6].BmpId =   "��������ˮ6";                   a31[6].ContinueFrame = 5;               a31[6].offx = 45;									     a31[6].offy = -117;
	a31[7].BmpId =   "��������ˮ7";                   a31[7].ContinueFrame = 5;               a31[7].offx = 51;									     a31[7].offy = -117;
	a31[8].BmpId =   "��������ˮ8";                   a31[8].ContinueFrame = 5;               a31[8].offx = 39;									     a31[8].offy = -116;
	a31[9].BmpId =   "��������ˮ9";                   a31[9].ContinueFrame = 5;               a31[9].offx = 40;									     a31[9].offy = -115;
	a31[10].BmpId = "��������ˮ10";                 a31[10].ContinueFrame = 5;             a31[10].offx = 45;									     a31[10].offy = -117;
	a31[11].BmpId = "��������ˮ11";                 a31[11].ContinueFrame = 5;             a31[11].offx = 51;									     a31[11].offy = -117;
	a31[12].BmpId = "��������ˮ12";                 a31[12].ContinueFrame = 5;             a31[12].offx = 39;									     a31[12].offy = -116;
	a31[13].BmpId = "��������ˮ13";                 a31[13].ContinueFrame = 5;             a31[13].offx = 39;									     a31[13].offy = -116;
	a31[14].BmpId = "��������ˮ14";                 a31[14].ContinueFrame = 5;             a31[14].offx = 39;									     a31[14].offy = -116;
	a31[15].BmpId = "��������ˮ15";                 a31[15].ContinueFrame = 5;             a31[15].offx = 39;									     a31[15].offy = -116;
	a31[16].BmpId = "��������ˮ16";                 a31[16].ContinueFrame = 5;             a31[16].offx = 39;									     a31[16].offy = -116;
	for (int i = 0; i < 10; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar620_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������ˮ\\ar620_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS��0", "BOSS��0", 0, 0, 284, 397, 0xffffff);
	go->AddBmp("BOSS��1", "BOSS��1", 0, 0, 204, 416, 0xffffff);
	go->AddBmp("BOSS��2", "BOSS��2", 0, 0, 189, 456, 0xffffff);
	go->AddBmp("BOSS��3", "BOSS��3", 0, 0, 182, 459, 0xffffff);
	go->AddBmp("BOSS��4", "BOSS��4", 0, 0, 182, 460, 0xffffff);
	go->AddBmp("BOSS��5", "BOSS��5", 0, 0, 223, 455, 0xffffff);
	go->AddBmp("BOSS��6", "BOSS��6", 0, 0, 249, 454, 0xffffff);
	go->AddBmp("BOSS��7", "BOSS��7", 0, 0, 444, 395, 0xffffff);
	go->AddBmp("BOSS��8", "BOSS��8", 0, 0, 497, 154, 0xffffff);
	go->AddBmp("BOSS��9", "BOSS��9", 0, 0, 496, 174, 0xffffff);
	a32[0].BmpId = "BOSS��0";                   a32[0].ContinueFrame = 5;               a32[0].offx = 39;									     a32[0].offy = -116;
	a32[1].BmpId = "BOSS��1";                   a32[1].ContinueFrame = 5;               a32[1].offx = 40;									     a32[1].offy = -115;
	a32[2].BmpId = "BOSS��2";                   a32[2].ContinueFrame = 5;               a32[2].offx = 45;									     a32[2].offy = -117;
	a32[3].BmpId = "BOSS��3";                   a32[3].ContinueFrame = 5;               a32[3].offx = 51;									     a32[3].offy = -117;
	a32[4].BmpId = "BOSS��4";                   a32[4].ContinueFrame = 5;               a32[4].offx = 39;									     a32[4].offy = -116;
	a32[5].BmpId = "BOSS��5";                   a32[5].ContinueFrame = 5;               a32[5].offx = 40;									     a32[5].offy = -115;
	a32[6].BmpId = "BOSS��6";                   a32[6].ContinueFrame = 5;               a32[6].offx = 45;									     a32[6].offy = -117;
	a32[7].BmpId = "BOSS��7";                   a32[7].ContinueFrame = 5;               a32[7].offx = 51;									     a32[7].offy = -117;
	a32[8].BmpId = "BOSS��8";                   a32[8].ContinueFrame = 5;               a32[8].offx = 39;									     a32[8].offy = -116;
	a32[9].BmpId = "BOSS��9";                   a32[9].ContinueFrame = 5;               a32[9].offx = 40;									     a32[9].offy = -115;
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������POS\\rc611_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������POS\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������POS%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������POS0",   "������POS0",   0, 0, 436, 423, 0xffffff);
	go->AddBmp("������POS1",   "������POS1",   0, 0, 395, 384, 0xffffff);
	go->AddBmp("������POS2",   "������POS2",   0, 0, 367, 354, 0xffffff);
	go->AddBmp("������POS3",   "������POS3",   0, 0, 269, 341, 0xffffff);
	go->AddBmp("������POS4",   "������POS4",   0, 0, 232, 342, 0xffffff);
	go->AddBmp("������POS5",   "������POS5",   0, 0, 211, 342, 0xffffff);
	go->AddBmp("������POS6",   "������POS6",   0, 0, 242, 341, 0xffffff);
	go->AddBmp("������POS7",   "������POS7",   0, 0, 415, 338, 0xffffff);
	go->AddBmp("������POS8",   "������POS8",   0, 0, 441, 335, 0xffffff);
	go->AddBmp("������POS9",   "������POS9",   0, 0, 378, 340, 0xffffff);
	go->AddBmp("������POS10", "������POS10", 0, 0, 277, 325, 0xffffff);
	go->AddBmp("������POS11", "������POS11", 0, 0, 408, 333, 0xffffff);
	go->AddBmp("������POS12", "������POS12", 0, 0, 404, 340, 0xffffff);
	go->AddBmp("������POS13", "������POS13", 0, 0, 401, 344, 0xffffff);
	go->AddBmp("������POS14", "������POS14", 0, 0, 391, 338, 0xffffff);
	go->AddBmp("������POS15", "������POS15", 0, 0, 386, 335, 0xffffff);
	go->AddBmp("������POS16", "������POS16", 0, 0, 381, 330, 0xffffff);
	go->AddBmp("������POS17", "������POS17", 0, 0, 378, 329, 0xffffff);
	a33[0].BmpId =   "������POS0";                   a33[0].ContinueFrame = 5;					 a33[0].offx = 39;									     a33[0].offy = -116;
	a33[1].BmpId =   "������POS1";                   a33[1].ContinueFrame = 5;					 a33[1].offx = 40;									     a33[1].offy = -115;
	a33[2].BmpId =   "������POS2";                   a33[2].ContinueFrame = 5;					 a33[2].offx = 45;									     a33[2].offy = -117;
	a33[3].BmpId =   "������POS3";                   a33[3].ContinueFrame = 5;					 a33[3].offx = 51;									     a33[3].offy = -117;
	a33[4].BmpId =   "������POS4";                   a33[4].ContinueFrame = 5;					 a33[4].offx = 39;									     a33[4].offy = -116;
	a33[5].BmpId =   "������POS5";                   a33[5].ContinueFrame = 5;					 a33[5].offx = 40;									     a33[5].offy = -115;
	a33[6].BmpId =   "������POS6";                   a33[6].ContinueFrame = 5;					 a33[6].offx = 45;									     a33[6].offy = -117;
	a33[7].BmpId =   "������POS7";                   a33[7].ContinueFrame = 5;					 a33[7].offx = 51;									     a33[7].offy = -117;
	a33[8].BmpId =   "������POS8";                   a33[8].ContinueFrame = 5;					 a33[8].offx = 39;									     a33[8].offy = -116;
	a33[9].BmpId =   "������POS9";                   a33[9].ContinueFrame = 5;					 a33[9].offx = 40;									     a33[9].offy = -115;
	a33[10].BmpId = "������POS10";                   a33[10].ContinueFrame = 5;               a33[10].offx = 40;									     a33[10].offy = -115;
	a33[11].BmpId = "������POS11";                   a33[11].ContinueFrame = 5;               a33[11].offx = 40;									     a33[11].offy = -115;
	a33[12].BmpId = "������POS12";                   a33[12].ContinueFrame = 5;               a33[12].offx = 40;									     a33[12].offy = -115;
	a33[13].BmpId = "������POS13";                   a33[13].ContinueFrame = 5;               a33[13].offx = 40;									     a33[13].offy = -115;
	a33[14].BmpId = "������POS14";                   a33[14].ContinueFrame = 5;               a33[14].offx = 40;									     a33[14].offy = -115;
	a33[15].BmpId = "������POS15";                   a33[15].ContinueFrame = 5;               a33[15].offx = 40;									     a33[15].offy = -115;
	a33[16].BmpId = "������POS16";                   a33[16].ContinueFrame = 5;               a33[16].offx = 40;									     a33[16].offy = -115;
	a33[17].BmpId = "������POS17";                   a33[17].ContinueFrame = 5;               a33[17].offx = 40;									     a33[17].offy = -115;
	for (int i = 0; i < 7; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\����ϣ\\%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\����ϣ\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "����ϣ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("����ϣ0", "����ϣ0", 0, 0, 804, 828, 0xffffff);
	go->AddBmp("����ϣ1", "����ϣ1", 0, 0, 802, 800, 0xffffff);
	go->AddBmp("����ϣ2", "����ϣ2", 0, 0, 800, 802, 0xffffff);
	go->AddBmp("����ϣ3", "����ϣ3", 0, 0, 800, 802, 0xffffff);
	go->AddBmp("����ϣ4", "����ϣ4", 0, 0, 800, 800, 0xffffff);
	go->AddBmp("����ϣ5", "����ϣ5", 0, 0, 804, 804, 0xffffff);
	go->AddBmp("����ϣ6", "����ϣ6", 0, 0, 800, 800, 0xffffff);

	a34[0].BmpId = "����ϣ0";                   a34[0].ContinueFrame = 5;					 a34[0].offx = 39;									     a34[0].offy = -116;
	a34[1].BmpId = "����ϣ1";                   a34[1].ContinueFrame = 5;					 a34[1].offx = 40;									     a34[1].offy = -115;
	a34[2].BmpId = "����ϣ2";                   a34[2].ContinueFrame = 5;					 a34[2].offx = 45;									     a34[2].offy = -117;
	a34[3].BmpId = "����ϣ3";                   a34[3].ContinueFrame = 5;					 a34[3].offx = 51;									     a34[3].offy = -117;
	a34[4].BmpId = "����ϣ4";                   a34[4].ContinueFrame = 5;					 a34[4].offx = 39;									     a34[4].offy = -116;
	a34[5].BmpId = "����ϣ5";                   a34[5].ContinueFrame = 5;					 a34[5].offx = 40;									     a34[5].offy = -115;
	a34[6].BmpId = "����ϣ6";                   a34[6].ContinueFrame = 5;					 a34[6].offx = 45;									     a34[6].offy = -117;

	for (int i = 0; i < 9; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha030_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������0", "������0", 0, 0, 592, 435, 0xffffff);
	go->AddBmp("������1", "������1", 0, 0, 563, 439, 0xffffff);
	go->AddBmp("������2", "������2", 0, 0, 542, 439, 0xffffff);
	go->AddBmp("������3", "������3", 0, 0, 535, 437, 0xffffff);
	go->AddBmp("������4", "������4", 0, 0, 529, 442, 0xffffff);
	go->AddBmp("������5", "������5", 0, 0, 533, 440, 0xffffff);
	go->AddBmp("������6", "������6", 0, 0, 530, 438, 0xffffff);
	go->AddBmp("������7", "������7", 0, 0, 537, 442, 0xffffff);
	go->AddBmp("������8", "������8", 0, 0, 580, 444, 0xffffff);


	a35[0].BmpId = "������0";                   a35[0].ContinueFrame = 5;					 a35[0].offx = 39;									     a35[0].offy = -116;
	a35[1].BmpId = "������1";                   a35[1].ContinueFrame = 5;					 a35[1].offx = 40;									     a35[1].offy = -115;
	a35[2].BmpId = "������2";                   a35[2].ContinueFrame = 5;					 a35[2].offx = 45;									     a35[2].offy = -117;
	a35[3].BmpId = "������3";                   a35[3].ContinueFrame = 5;					 a35[3].offx = 51;									     a35[3].offy = -117;
	a35[4].BmpId = "������4";                   a35[4].ContinueFrame = 5;					 a35[4].offx = 39;									     a35[4].offy = -116;
	a35[5].BmpId = "������5";                   a35[5].ContinueFrame = 5;					 a35[5].offx = 40;									     a35[5].offy = -115;
	a35[6].BmpId = "������6";                   a35[6].ContinueFrame = 5;					 a35[6].offx = 45;									     a35[6].offy = -117;
	a35[7].BmpId = "������7";                   a35[7].ContinueFrame = 5;					 a35[7].offx = 45;									     a35[7].offy = -117;
	a35[8].BmpId = "������8";                   a35[8].ContinueFrame = 5;					 a35[8].offx = 45;									     a35[8].offy = -117;


	for (int i = 0; i < 26; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\���濳\\ha431_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\���濳\\ha431_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "���濳%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("���濳0", "���濳0", 0, 0, 459, 408, 0xffffff);
	go->AddBmp("���濳1", "���濳1", 0, 0, 343, 441, 0xffffff);
	go->AddBmp("���濳2", "���濳2", 0, 0, 330, 454, 0xffffff);
	go->AddBmp("���濳3", "���濳3", 0, 0, 361, 435, 0xffffff);
	go->AddBmp("���濳4", "���濳4", 0, 0, 402, 419, 0xffffff);
	go->AddBmp("���濳5", "���濳5", 0, 0, 413, 414, 0xffffff);
	go->AddBmp("���濳6", "���濳6", 0, 0, 410, 413, 0xffffff);
	go->AddBmp("���濳7", "���濳7", 0, 0, 406, 408, 0xffffff);
	go->AddBmp("���濳8", "���濳8", 0, 0, 392, 409, 0xffffff);
	go->AddBmp("���濳9", "���濳9", 0, 0, 378, 411, 0xffffff);
	go->AddBmp("���濳10", "���濳10", 0, 0, 370, 415, 0xffffff);
	go->AddBmp("���濳11", "���濳11", 0, 0, 350, 416, 0xffffff);
	go->AddBmp("���濳12", "���濳12", 0, 0, 299, 412, 0xffffff);
	go->AddBmp("���濳13", "���濳13", 0, 0, 293, 411, 0xffffff);
	go->AddBmp("���濳14", "���濳14", 0, 0, 289, 409, 0xffffff);
	go->AddBmp("���濳15", "���濳15", 0, 0, 286, 416, 0xffffff);
	go->AddBmp("���濳16", "���濳16", 0, 0, 465, 422, 0xffffff);
	go->AddBmp("���濳17", "���濳17", 0, 0, 465, 442, 0xffffff);
	go->AddBmp("���濳18", "���濳18", 0, 0, 465, 450, 0xffffff);
	go->AddBmp("���濳19", "���濳19", 0, 0, 465, 484, 0xffffff);
	go->AddBmp("���濳20", "���濳20", 0, 0, 465, 476, 0xffffff);
	go->AddBmp("���濳21", "���濳21", 0, 0, 483, 357, 0xffffff);
	go->AddBmp("���濳22", "���濳22", 0, 0, 492, 349, 0xffffff);
	go->AddBmp("���濳23", "���濳23", 0, 0, 505, 396, 0xffffff);
	go->AddBmp("���濳24", "���濳24", 0, 0, 412, 456, 0xffffff);
	go->AddBmp("���濳25", "���濳25", 0, 0, 296, 488, 0xffffff);


	a36[0].BmpId =   "���濳0";                     a36[0].ContinueFrame =   5;					     a36[0].offx = 39;							        	     a36[0].offy = -116;
	a36[1].BmpId =   "���濳1";                     a36[1].ContinueFrame =   5;					     a36[1].offx = 40;							        	     a36[1].offy = -115;
	a36[2].BmpId =   "���濳2";                     a36[2].ContinueFrame =   5;					     a36[2].offx = 45;							        	     a36[2].offy = -117;
	a36[3].BmpId =   "���濳3";                     a36[3].ContinueFrame =   5;					     a36[3].offx = 51;							        	     a36[3].offy = -117;
	a36[4].BmpId =   "���濳4";                     a36[4].ContinueFrame =   5;					     a36[4].offx = 39;							        	     a36[4].offy = -116;
	a36[5].BmpId =   "���濳5";                     a36[5].ContinueFrame =   5;					     a36[5].offx = 40;							        	     a36[5].offy = -115;
	a36[6].BmpId =   "���濳6";                     a36[6].ContinueFrame =   5;					     a36[6].offx = 45;							        	     a36[6].offy = -117;
	a36[7].BmpId =   "���濳7";                     a36[7].ContinueFrame =   5;					     a36[7].offx = 45;							        	     a36[7].offy = -117;
	a36[8].BmpId =   "���濳8";                     a36[8].ContinueFrame =   5;					     a36[8].offx = 45;							        	     a36[8].offy = -117;
	a36[9].BmpId =   "���濳9";                     a36[9].ContinueFrame =   5;					     a36[9].offx = 39;							        	     a36[9].offy = -116;
	a36[10].BmpId = "���濳10";                   a36[10].ContinueFrame = 5;					 a36[10].offx = 40;									     a36[10].offy = -115;
	a36[11].BmpId = "���濳11";                   a36[11].ContinueFrame = 5;					 a36[11].offx = 45;									     a36[11].offy = -117;
	a36[12].BmpId = "���濳12";                   a36[12].ContinueFrame = 5;					 a36[12].offx = 51;									     a36[12].offy = -117;
	a36[13].BmpId = "���濳13";                   a36[13].ContinueFrame = 5;					 a36[13].offx = 39;									     a36[13].offy = -116;
	a36[14].BmpId = "���濳14";                   a36[14].ContinueFrame = 5;					 a36[14].offx = 40;									     a36[14].offy = -115;
	a36[15].BmpId = "���濳15";                   a36[15].ContinueFrame = 5;					 a36[15].offx = 45;									     a36[15].offy = -117;
	a36[16].BmpId = "���濳16";                   a36[16].ContinueFrame = 5;					 a36[16].offx = 45;									     a36[16].offy = -117;
	a36[17].BmpId = "���濳17";                   a36[17].ContinueFrame = 5;					 a36[17].offx = 45;									     a36[17].offy = -117;
	a36[18].BmpId = "���濳18";                   a36[18].ContinueFrame = 5;					 a36[18].offx = 39;									     a36[18].offy = -116;
	a36[19].BmpId = "���濳19";                   a36[19].ContinueFrame = 5;					 a36[19].offx = 40;									     a36[19].offy = -115;
	a36[20].BmpId = "���濳20";                   a36[20].ContinueFrame = 5;					 a36[20].offx = 45;									     a36[20].offy = -117;
	a36[21].BmpId = "���濳21";                   a36[21].ContinueFrame = 5;					 a36[21].offx = 51;									     a36[21].offy = -117;
	a36[22].BmpId = "���濳22";                   a36[22].ContinueFrame = 5;					 a36[22].offx = 39;									     a36[22].offy = -116;
	a36[23].BmpId = "���濳23";                   a36[23].ContinueFrame = 5;					 a36[23].offx = 40;									     a36[23].offy = -115;
	a36[24].BmpId = "���濳24";                   a36[24].ContinueFrame = 5;					 a36[24].offx = 45;									     a36[24].offy = -117;
	a36[25].BmpId = "���濳25";                   a36[25].ContinueFrame = 5;					 a36[25].offx = 45;									     a36[25].offy = -117;


	for (int i = 0; i < 43; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\�����\\ha451_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\�����\\ha451_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "�����%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("�����0", "�����0", 0, 0, 528, 530, 0xffffff);
	go->AddBmp("�����1", "�����1", 0, 0, 422, 556, 0xffffff);
	go->AddBmp("�����2", "�����2", 0, 0, 457, 474, 0xffffff);
	go->AddBmp("�����3", "�����3", 0, 0, 483, 484, 0xffffff);
	go->AddBmp("�����4", "�����4", 0, 0, 510, 464, 0xffffff);
	go->AddBmp("�����5", "�����5", 0, 0, 496, 469, 0xffffff);
	go->AddBmp("�����6", "�����6", 0, 0, 490, 479, 0xffffff);
	go->AddBmp("�����7", "�����7", 0, 0, 485, 495, 0xffffff);
	go->AddBmp("�����8", "�����8", 0, 0, 452, 507, 0xffffff);
	go->AddBmp("�����9", "�����9", 0, 0, 415, 531, 0xffffff);
	go->AddBmp("�����10", "�����10", 0, 0, 712, 563, 0xffffff);
	go->AddBmp("�����11", "�����11", 0, 0, 719, 562, 0xffffff);
	go->AddBmp("�����12", "�����12", 0, 0, 738, 546, 0xffffff);
	go->AddBmp("�����13", "�����13", 0, 0, 759, 529, 0xffffff);
	go->AddBmp("�����14", "�����14", 0, 0, 709, 505, 0xffffff);
	go->AddBmp("�����15", "�����15", 0, 0, 477, 553, 0xffffff);
	go->AddBmp("�����16", "�����16", 0, 0, 501, 527, 0xffffff);
	go->AddBmp("�����17", "�����17", 0, 0, 431, 436, 0xffffff);
	go->AddBmp("�����18", "�����18", 0, 0, 409, 406, 0xffffff);
	go->AddBmp("�����19", "�����19", 0, 0, 460, 376, 0xffffff);
	go->AddBmp("�����20", "�����20", 0, 0, 491, 392, 0xffffff);
	go->AddBmp("�����21", "�����21", 0, 0, 573, 476, 0xffffff);
	go->AddBmp("�����22", "�����22", 0, 0, 268, 486, 0xffffff);
	go->AddBmp("�����23", "�����23", 0, 0, 253, 477, 0xffffff);
	go->AddBmp("�����24", "�����24", 0, 0, 278, 475, 0xffffff);
	go->AddBmp("�����25", "�����25", 0, 0, 299, 473, 0xffffff);
	go->AddBmp("�����26", "�����26", 0, 0, 386, 478, 0xffffff);
	go->AddBmp("�����27", "�����27", 0, 0, 598, 630, 0xffffff);
	go->AddBmp("�����28", "�����28", 0, 0, 315, 615, 0xffffff);
	go->AddBmp("�����29", "�����29", 0, 0, 429, 599, 0xffffff);
	go->AddBmp("�����30", "�����30", 0, 0, 447, 579, 0xffffff);
	go->AddBmp("�����31", "�����31", 0, 0, 234, 620, 0xffffff);
	go->AddBmp("�����32", "�����32", 0, 0, 235, 623, 0xffffff);
	go->AddBmp("�����33", "�����33", 0, 0, 239, 607, 0xffffff);
	go->AddBmp("�����34", "�����34", 0, 0, 231, 541, 0xffffff);
	go->AddBmp("�����35", "�����35", 0, 0, 231, 540, 0xffffff);
	go->AddBmp("�����36", "�����36", 0, 0, 212, 539, 0xffffff);
	go->AddBmp("�����37", "�����37", 0, 0, 231, 539, 0xffffff);
	go->AddBmp("�����38", "�����38", 0, 0, 225, 539, 0xffffff);
	go->AddBmp("�����39", "�����39", 0, 0, 349, 538, 0xffffff);
	go->AddBmp("�����40", "�����40", 0, 0, 337, 538, 0xffffff);
	go->AddBmp("�����41", "�����41", 0, 0, 411, 538, 0xffffff);
	go->AddBmp("�����42", "�����42", 0, 0, 398, 538, 0xffffff);
	


	a37[0].BmpId = "�����0";                           a37[0].ContinueFrame = 15;					     a37[0].offx = 39;							        	     a37[0].offy = -116;
	a37[1].BmpId = "�����1";                           a37[1].ContinueFrame = 15;					     a37[1].offx = 40;							        	     a37[1].offy = -115;
	a37[2].BmpId = "�����2";                           a37[2].ContinueFrame = 15;					     a37[2].offx = 45;							        	     a37[2].offy = -117;
	a37[3].BmpId = "�����3";                           a37[3].ContinueFrame = 15;					     a37[3].offx = 51;							        	     a37[3].offy = -117;
	a37[4].BmpId = "�����4";                           a37[4].ContinueFrame = 15;					     a37[4].offx = 39;							        	     a37[4].offy = -116;
	a37[5].BmpId = "�����5";                           a37[5].ContinueFrame = 15;					     a37[5].offx = 40;							        	     a37[5].offy = -115;
	a37[6].BmpId = "�����6";                           a37[6].ContinueFrame = 15;					     a37[6].offx = 45;							        	     a37[6].offy = -117;
	a37[7].BmpId = "�����7";                           a37[7].ContinueFrame = 15;					     a37[7].offx = 45;							        	     a37[7].offy = -117;
	a37[8].BmpId = "�����8";                           a37[8].ContinueFrame = 15;					     a37[8].offx = 45;							        	     a37[8].offy = -117;
	a37[9].BmpId = "�����9";                           a37[9].ContinueFrame = 15;					     a37[9].offx = 39;							        	     a37[9].offy = -116;
	a37[10].BmpId = "�����10";                     a37[10].ContinueFrame = 15;					     a37[10].offx = 40;									         a37[10].offy = -115;
	a37[11].BmpId = "�����11";                     a37[11].ContinueFrame = 15;					     a37[11].offx = 45;									         a37[11].offy = -117;
	a37[12].BmpId = "�����12";                     a37[12].ContinueFrame = 15;					     a37[12].offx = 51;									         a37[12].offy = -117;
	a37[13].BmpId = "�����13";                     a37[13].ContinueFrame = 15;					     a37[13].offx = 39;									         a37[13].offy = -116;
	a37[14].BmpId = "�����14";                     a37[14].ContinueFrame = 15;					     a37[14].offx = 40;									         a37[14].offy = -115;
	a37[15].BmpId = "�����15";                     a37[15].ContinueFrame = 15;					     a37[15].offx = 45;									         a37[15].offy = -117;
	a37[16].BmpId = "�����16";                     a37[16].ContinueFrame = 15;					     a37[16].offx = 45;									         a37[16].offy = -117;
	a37[17].BmpId = "�����17";                     a37[17].ContinueFrame = 15;					     a37[17].offx = 45;									         a37[17].offy = -117;
	a37[18].BmpId = "�����18";                     a37[18].ContinueFrame = 15;					     a37[18].offx = 39;									         a37[18].offy = -116;
	a37[19].BmpId = "�����19";                     a37[19].ContinueFrame = 15;					     a37[19].offx = 40;									         a37[19].offy = -115;
	a37[20].BmpId = "�����20";                     a37[20].ContinueFrame = 15;					     a37[20].offx = 39;							        	     a37[20].offy = -116;
	a37[21].BmpId = "�����21";                     a37[21].ContinueFrame = 15;					     a37[21].offx = 40;							        	     a37[21].offy = -115;
	a37[22].BmpId = "�����22";                     a37[22].ContinueFrame = 15;					     a37[22].offx = 45;							        	     a37[22].offy = -117;
	a37[23].BmpId = "�����23";                     a37[23].ContinueFrame = 15;					     a37[23].offx = 51;							        	     a37[23].offy = -117;
	a37[24].BmpId = "�����24";                     a37[24].ContinueFrame = 15;					     a37[24].offx = 39;							        	     a37[24].offy = -116;
	a37[25].BmpId = "�����25";                     a37[25].ContinueFrame = 15;					     a37[25].offx = 40;							        	     a37[25].offy = -115;
	a37[26].BmpId = "�����26";                     a37[26].ContinueFrame = 15;					     a37[26].offx = 45;							        	     a37[26].offy = -117;
	a37[27].BmpId = "�����27";                     a37[27].ContinueFrame = 15;					     a37[27].offx = 45;							        	     a37[27].offy = -117;
	a37[28].BmpId = "�����28";                     a37[28].ContinueFrame = 15;					     a37[28].offx = 45;							        	     a37[28].offy = -117;
	a37[29].BmpId = "�����29";                     a37[29].ContinueFrame = 15;					     a37[29].offx = 39;							        	     a37[29].offy = -116;
	a37[30].BmpId = "�����30";                     a37[30].ContinueFrame = 15;					     a37[30].offx = 40;									         a37[30].offy = -115;
	a37[31].BmpId = "�����31";                     a37[31].ContinueFrame = 15;					     a37[31].offx = 45;									         a37[31].offy = -117;
	a37[32].BmpId = "�����32";                     a37[31].ContinueFrame = 15;					     a37[31].offx = 51;									         a37[31].offy = -117;
	a37[33].BmpId = "�����33";                     a37[33].ContinueFrame = 15;					     a37[33].offx = 39;									         a37[33].offy = -116;
	a37[34].BmpId = "�����34";                     a37[34].ContinueFrame = 15;					     a37[34].offx = 40;									         a37[34].offy = -115;
	a37[35].BmpId = "�����35";                     a37[35].ContinueFrame = 15;					     a37[35].offx = 45;									         a37[35].offy = -117;
	a37[36].BmpId = "�����36";                     a37[36].ContinueFrame = 15;					     a37[36].offx = 45;									         a37[36].offy = -117;
	a37[37].BmpId = "�����37";                     a37[37].ContinueFrame = 15;					     a37[37].offx = 45;									         a37[37].offy = -117;
	a37[38].BmpId = "�����38";                     a37[38].ContinueFrame = 15;					     a37[38].offx = 39;									         a37[38].offy = -116;
	a37[39].BmpId = "�����39";                     a37[39].ContinueFrame = 15;					     a37[39].offx = 40;									         a37[39].offy = -115;
	a37[40].BmpId = "�����40";                     a37[40].ContinueFrame = 15;					     a37[40].offx = 40;									         a37[40].offy = -115;
	a37[41].BmpId = "�����41";                     a37[41].ContinueFrame = 15;					     a37[41].offx = 40;									         a37[41].offy = -115;
	a37[42].BmpId = "�����42";                     a37[42].ContinueFrame = 15;					     a37[42].offx = 40;									         a37[42].offy = -115;


	for (int i = 0; i < 43; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha060_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha060_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������0",   "������0",   0, 0, 567, 457, 0xffffff);
	go->AddBmp("������1",   "������1",   0, 0, 376, 398, 0xffffff);
	go->AddBmp("������2",   "������2",   0, 0, 374, 352, 0xffffff);	
	go->AddBmp("������3",   "������3",   0, 0, 421, 345, 0xffffff);
	go->AddBmp("������4",   "������4",   0, 0, 423, 207, 0xffffff);
	go->AddBmp("������5",   "������5",   0, 0, 398, 467, 0xffffff);
	go->AddBmp("������6",   "������6",   0, 0, 398, 467, 0xffffff);
	go->AddBmp("������7",   "������7",   0, 0, 484, 376, 0xffffff);
	go->AddBmp("������8",   "������8",   0, 0, 507, 262, 0xffffff);
	go->AddBmp("������9",   "������9",   0, 0, 470, 208, 0xffffff);
	go->AddBmp("������10", "������10", 0, 0, 504, 167, 0xffffff);
	go->AddBmp("������11", "������11", 0, 0, 494, 133, 0xffffff);
	go->AddBmp("������12", "������12", 0, 0, 496, 141, 0xffffff);
	go->AddBmp("������13", "������13", 0, 0, 501, 117, 0xffffff);
	go->AddBmp("������14", "������14", 0, 0, 505, 106, 0xffffff);


	a38[0].BmpId =   "������0";                       a38[0].ContinueFrame = 15;						     a38[0].offx = 39;							        			 a38[0].offy = -116;
	a38[1].BmpId =   "������1";                       a38[1].ContinueFrame = 15;						     a38[1].offx = 40;							        			 a38[1].offy = -115;
	a38[2].BmpId =   "������2";                       a38[2].ContinueFrame = 15;						     a38[2].offx = 45;							        			 a38[2].offy = -117;
	a38[3].BmpId =   "������3";                       a38[3].ContinueFrame = 15;						     a38[3].offx = 51;							        			 a38[3].offy = -117;
	a38[4].BmpId =   "������4";                       a38[4].ContinueFrame = 15;						     a38[4].offx = 39;							        			 a38[4].offy = -116;
	a38[5].BmpId =   "������5";                       a38[5].ContinueFrame = 15;						     a38[5].offx = 40;							        			 a38[5].offy = -115;
	a38[6].BmpId =   "������6";                       a38[6].ContinueFrame = 15;						     a38[6].offx = 45;							        			 a38[6].offy = -117;
	a38[7].BmpId =   "������7";                       a38[7].ContinueFrame = 15;						     a38[7].offx = 45;							        			 a38[7].offy = -117;
	a38[8].BmpId =   "������8";                       a38[8].ContinueFrame = 15;						     a38[8].offx = 45;							        			 a38[8].offy = -117;
	a38[9].BmpId =   "������9";                       a38[9].ContinueFrame = 15;						     a38[9].offx = 39;							        			 a38[9].offy = -116;
	a38[10].BmpId = "������10";                     a38[10].ContinueFrame = 15;					     a38[10].offx = 40;									         a38[10].offy = -115;
	a38[11].BmpId = "������11";                     a38[11].ContinueFrame = 15;					     a38[11].offx = 45;									         a38[11].offy = -117;
	a38[12].BmpId = "������12";                     a38[12].ContinueFrame = 15;					     a38[12].offx = 51;									         a38[12].offy = -117;
	a38[13].BmpId = "������13";                     a38[13].ContinueFrame = 15;					     a38[13].offx = 39;									         a38[13].offy = -116;
	a38[14].BmpId = "������14";                     a38[14].ContinueFrame = 15;					     a38[14].offx = 40;									         a38[14].offy = -115;

	for (int i = 0; i < 5; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha050_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha050_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������0", "������0", 0, 0, 538, 432, 0xffffff);
	go->AddBmp("������1", "������1", 0, 0, 561, 439, 0xffffff);
	go->AddBmp("������2", "������2", 0, 0, 576, 406, 0xffffff);
	go->AddBmp("������3", "������3", 0, 0, 602, 339, 0xffffff);
	go->AddBmp("������4", "������4", 0, 0, 635, 312, 0xffffff);
	


	a39[0].BmpId = "������0";                       a39[0].ContinueFrame = 15;						     a39[0].offx = 39;							        			 a39[0].offy = -116;
	a39[1].BmpId = "������1";                       a39[1].ContinueFrame = 15;						     a39[1].offx = 40;							        			 a39[1].offy = -115;
	a39[2].BmpId = "������2";                       a39[2].ContinueFrame = 15;						     a39[2].offx = 45;							        			 a39[2].offy = -117;
	a39[3].BmpId = "������3";                       a39[3].ContinueFrame = 15;						     a39[3].offx = 51;							        			 a39[3].offy = -117;
	a39[4].BmpId = "������4";                       a39[4].ContinueFrame = 15;						     a39[4].offx = 39;							        			 a39[4].offy = -116;




























	x1 = 750;
	y1 = 568;

	curA = 38;
	curf = 0;
	curf2 = 11;
	curcf = 0;
	piclen = 0;
	Move = false;
	go->SetFont(30, 50);
	m_PicLen0Or1 = true;
	buf[30] = {};
	pf = nullptr;
}

void CTest::Run()
{
	CGO* go = CGO::GetGO();
	CGI* gi = CGI::GetGI();
	BMP* pic = 0;
	BMP* pic2 = 0;

	if (curA == 0)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 11;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a1[curf];
		pic2 = &a1[curf2];
	}
	else if (curA == 1)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 11; ++
				curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a2[curf];
		pic2 = &a2[curf2];
	}
	else if (curA == 2)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 8;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a3[curf];
		pic2 = &a3[curf2];
	}
	else if (curA == 3)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 5;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a4[curf];
		pic2 = &a4[curf2];
	}
	else if (curA == 4)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 12;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a5[curf];
		pic2 = &a5[curf2];
	}
	else if (curA == 5)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 4;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a6[curf];
		pic2 = &a6[curf2];
	}
	else if (curA == 6)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 14;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a7[curf];
		pic2 = &a7[curf2];
	}
	else if (curA == 7)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 15;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a8[curf];
		pic2 = &a8[curf2];
	}
	else if (curA == 8)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 13;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a9[curf];
		pic2 = &a9[curf2];
	}
	else if (curA == 9)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 9;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a10[curf];
		pic2 = &a10[curf2];
	}
	else if (curA == 10)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 2;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic = &a11[curf];
		pic2 = &a11[curf2];
	}
	else if (curA == 11)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 10;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic =   &a12[curf];
		pic2 = &a12[curf2];
	}
	else if (curA == 12)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 15;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic = &a13[curf];
	pic2 = &a13[curf2];
	}
	else if (curA == 13)
	{
		if (m_PicLen0Or1 == true)
		{
			piclen = 17;
			curf2 = piclen;
			m_PicLen0Or1 = false;
		}
		pic =   &a14[curf];
		pic2 = &a14[curf2];
	}
	else if (curA == 14)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 5;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a15[curf];
	pic2 = &a15[curf2];
	}

	else if (curA == 15)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 4;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a16[curf];
	pic2 = &a16[curf2];
	}
	else if (curA == 16)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 9;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a17[curf];
	pic2 = &a17[curf2];
	}
	else if (curA == 17)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 19;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a18[curf];
	pic2 = &a18[curf2];
	}
	else if (curA == 18)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 12;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a19[curf];
	pic2 = &a19[curf2];
	}
	else if (curA == 19)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 11;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a20[curf];
	pic2 = &a20[curf2];
	}
	else if (curA == 20)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 4;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a21[curf];
	pic2 = &a21[curf2];
	}
	else if (curA == 21)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 17;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a22[curf];
	pic2 = &a22[curf2];
	}
	else if (curA == 22)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 13;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a23[curf];
	pic2 = &a23[curf2];
	}
	else if (curA == 23)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 18;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a24[curf];
	pic2 = &a24[curf2];
	}
	else if (curA == 24)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 20;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =	 &a25[curf];
	pic2 =	 &a25[curf2];
	}
	else if (curA == 25)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 15;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a26[curf];
	pic2 = &a26[curf2];
	}
	else if (curA == 26)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 3;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a27[curf];
	pic2 = &a27[curf2];
	}
	else if (curA == 27)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 18;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a28[curf];
	pic2 = &a28[curf2];
	}
	else if (curA == 28)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 12;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a29[curf];
	pic2 = &a29[curf2];
	}
	else if (curA == 29)
	{
	if (m_PicLen0Or1 == true)	
	{
		piclen = 14;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a30[curf];
	pic2 = &a30[curf2];
	}
	else if (curA == 30)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 16;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a31[curf];
	pic2 = &a31[curf2];
	}
	else if (curA == 31)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 9;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a32[curf];
	pic2 = &a32[curf2];
	}
	else if (curA == 32)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 17;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a33[curf];
	pic2 = &a33[curf2];
	}
	else if (curA == 33)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 6;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a34[curf];
	pic2 = &a34[curf2];
	}
	else if (curA == 34)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 8;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a35[curf];
	pic2 = &a35[curf2];
	}
	else if (curA == 35)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 25;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a36[curf];
	pic2 = &a36[curf2];
	}
	else if (curA == 36)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 43;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a37[curf];
	pic2 = &a37[curf2];
	}
	else if (curA == 37)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 14;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a38[curf];
	pic2 = &a38[curf2];
	}
	else if (curA == 38)
	{
	if (m_PicLen0Or1 == true)
	{
		piclen = 4;
		curf2 = piclen;
		m_PicLen0Or1 = false;
	}
	pic =   &a39[curf];
	pic2 = &a39[curf2];
	}


	if (Move)
	{
		go->DrawBmp(pic->BmpId, x1 + pic->offx, y1 + pic->offy, _Back);
		curcf += 1;
		if (curcf >= pic->ContinueFrame)
		{
			curf += 1;
			curcf = 0;
			if (curf > piclen)
				curf = 0;
		}
	}
	else
	{
		go->DrawBmp(pic2->BmpId, x1 + pic2->offx, y1 + pic2->offy, _Back);
		go->DrawBmp(pic->BmpId, x1 + pic->offx, y1 + pic->offy, _Back);

		if (gi->Get(_GI_K_W) == KS_UC)
		{
			pic->offy -= 1;
		}
		else if (gi->Get(_GI_K_W) == KS_DH && gi->Get(_GI_K_SPACE) == KS_DH)
		{
			pic->offy -= 5;
		}
		else if (gi->Get(_GI_K_S) == KS_UC)
		{
			pic->offy += 1;
		}
		else if (gi->Get(_GI_K_S) == KS_DH && gi->Get(_GI_K_SPACE) == KS_DH)
		{
			pic->offy += 5;
		}
		if (gi->Get(_GI_K_A) == KS_UC)
		{
			pic->offx -= 1;
		}
		else if (gi->Get(_GI_K_D) == KS_UC)
		{
			pic->offx += 1;
		}
		else if (gi->Get(_GI_K_A) == KS_DH && gi->Get(_GI_K_SPACE) == KS_DH)
		{
			pic->offx -= 5;
		}
		else if (gi->Get(_GI_K_D) == KS_DH && gi->Get(_GI_K_SPACE) == KS_DH)
		{
			pic->offx += 5;
		}
		if (gi->Get(_GI_M_L) == KS_DC)
		{
			gi->GetCursor(&m_CurMousePosX, &m_CurMousePosY);
			m_OldPicPosX = pic->offx;
			m_OldPicPosY = pic->offy;
		}
		else if (gi->Get(_GI_M_L) == KS_DH)	
		{
			int x, y;
			gi->GetCursor(&x, &y);
			pic->offx = m_OldPicPosX + (x - m_CurMousePosX);
			pic->offy = m_OldPicPosY + (y - m_CurMousePosY);
		}

		if (gi->Get(_GI_K_LEFT) == KS_UC)
		{
			curf -= 1;
			if (curf < 0)
				curf = piclen;
			curf2 -= 1;
			if (curf2 < 0)
				curf2 = piclen;
		}

		if (gi->Get(_GI_K_RIGHT) == KS_UC)
		{
			curf += 1;
			if (curf > piclen)
				curf = 0;
			curf2 += 1;
			if (curf2 > piclen)
				curf2 = 0;
		}

		if (gi->Get(_GI_K_UP) == KS_UC)
		{
			curf = 0;
			curf2 = piclen;
			curA -= 1;
			if (curA < 0)
				curA = 4;
			m_PicLen0Or1 = true;
		}
		if (gi->Get(_GI_K_DOWN) == KS_UC)
		{
			curf = 0;
			curf2 = piclen;
			curA += 1;
			if (curA > 4)
				curA = 0;
			m_PicLen0Or1 = true;
		}
	}

	if (gi->Get(_GI_K_J) == KS_UC)
	{
		if (Move == true)
		{
			Move = false;
			curf2 = curf - 1;
			if (curf2 < 0)
				curf2 = piclen;
		}
		else
		{
			Move = true;
			curcf = 0;
		}
	}
	if (gi->Get(_GI_NK_0) == KS_UC)
	{
		char* arr = new char[100];
		sprintf_s(arr, 100, "id = %s, x =\t\t%d,y =\t\t%d\n", pic->BmpId, pic->offx, pic->offy);
		m_AnchorPosDataVector.push_back(arr);
	}
	if (gi->Get(_GI_K_RETURN) == KS_UC)
	{
		fopen_s(&pf, "ê������.txt", "wb");
		int size = m_AnchorPosDataVector.size();
		for (int i = 0; i < size; i++)
		{
			char* arr = m_AnchorPosDataVector[i];
			fwrite(arr, 1, strlen(arr), pf);
		}
		fclose(pf);
	}
	go->DrawRect(x1, y1, 3, 3, 3, RGB(255, 0, 0));
	go->DrawLine(0, y1, 2000, y1, 0, 2);
	go->DrawLine(x1, 0, x1, 2000, 0, 2);
	char buf[128];
	sprintf_s(buf, 128, "id = %s, x = %d, y = %d", pic->BmpId, pic->offx, pic->offy);
	go->DrawTxt(10, 20, buf, RGB(0, 0, 255));
}
void CTest::End()
{
}

COBJM* CTest::GetHeroManager()
{
	return nullptr;
}

COBJM* CTest::GetEnemyManager()
{
	return nullptr;
}

COBJM* CTest::GetObstacleManager()
{
	return nullptr;
}

CAudioManager* CTest::GetAudio()
{
	return nullptr;
}

CTXManager* CTest::GetTX()
{
	return nullptr;
}

int CTest::TrueOrFalse()
{
	return false;
}

