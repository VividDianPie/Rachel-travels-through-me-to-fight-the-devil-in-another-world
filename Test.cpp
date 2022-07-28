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
	//go->AddImage("³¡¾°»ÃÉ­", "bmp\\³¡¾°\\³¡¾°»ÃÉ­.bmp");
	//go->AddBmp("³¡¾°»ÃÉ­", "³¡¾°»ÃÉ­", 0, 0, 2048, 768, 0xffffff);
	//for (int i = 0; i < 12; ++i)
	//{
	//	sprintf_s(buf, 64, "Õ¾Á¢%d", i + 1);
	//	sprintf_s(buf2, 64, "pic/Õ¾Á¢/00%d.bmp", i + 8);
	//	go->AddImage(buf, buf2);
	//}
	/*go->AddBmp("Õ¾1", "Õ¾Á¢1", 0, 0, 241, 286, RGB(0, 0, 0));
	go->AddBmp("Õ¾2", "Õ¾Á¢2", 0, 0, 241, 286, RGB(0, 0, 0));
	go->AddBmp("Õ¾3", "Õ¾Á¢3", 0, 0, 240, 287, RGB(0, 0, 0));
	go->AddBmp("Õ¾4", "Õ¾Á¢4", 0, 0, 239, 288, RGB(0, 0, 0));
	go->AddBmp("Õ¾5", "Õ¾Á¢5", 0, 0, 240, 289, RGB(0, 0, 0));
	go->AddBmp("Õ¾6", "Õ¾Á¢6", 0, 0, 241, 290, RGB(0, 0, 0));
	go->AddBmp("Õ¾7", "Õ¾Á¢7", 0, 0, 241, 290, RGB(0, 0, 0));
	go->AddBmp("Õ¾8", "Õ¾Á¢8", 0, 0, 241, 290, RGB(0, 0, 0));
	go->AddBmp("Õ¾9", "Õ¾Á¢9", 0, 0, 243, 289, RGB(0, 0, 0));
	go->AddBmp("Õ¾10", "Õ¾Á¢10", 0, 0, 243, 288, RGB(0, 0, 0));
	go->AddBmp("Õ¾11", "Õ¾Á¢11", 0, 0, 243, 287, RGB(0, 0, 0));
	go->AddBmp("Õ¾12", "Õ¾Á¢12", 0, 0, 241, 286, RGB(0, 0, 0));*/
	//a1[0].id = "Õ¾1"; a1[0].cf = 3; a1[0].offx = -35; a1[0].offy = -159;
	//a1[1].id = "Õ¾2"; a1[1].cf = 3; a1[1].offx = -35; a1[1].offy = -159;
	//a1[2].id = "Õ¾3"; a1[2].cf = 3; a1[2].offx = -34; a1[2].offy = -160;
	//a1[3].id = "Õ¾4"; a1[3].cf = 3; a1[3].offx = -34; a1[3].offy = -162;
	//a1[4].id = "Õ¾5"; a1[4].cf = 3; a1[4].offx = -34; a1[4].offy = -162;
	//a1[5].id = "Õ¾6"; a1[5].cf = 3; a1[5].offx = -35; a1[5].offy = -163;
	//a1[6].id = "Õ¾7"; a1[6].cf = 3; a1[6].offx = -35; a1[6].offy = -163;
	//a1[7].id = "Õ¾8"; a1[7].cf = 3; a1[7].offx = -35; a1[7].offy = -163;
	//a1[8].id = "Õ¾9"; a1[8].cf = 3; a1[8].offx = -35; a1[8].offy = -161;
	//a1[9].id = "Õ¾10"; a1[9].cf = 3; a1[9].offx = -35; a1[9].offy = -160;
	//a1[10].id = "Õ¾11"; a1[10].cf = 3; a1[10].offx = -35; a1[10].offy = -159;
	//a1[11].id = "Õ¾12"; a1[11].cf = 3; a1[11].offx = -35; a1[11].offy = -159;
	//for (int i = 0; i < 12; ++i)
	//{
	//	sprintf_s(buf, 64, "×ß%d", i + 1);
	//	sprintf_s(buf2, 64, "pic/×ß/00%d.bmp", i + 24);
	//	go->AddImage(buf, buf2);
	//}
	/*go->AddBmp("×ß1", "×ß1", 0, 0, 247, 289, RGB(0, 0, 0));
	go->AddBmp("×ß2", "×ß2", 0, 0, 241, 293, RGB(0, 0, 0));
	go->AddBmp("×ß3", "×ß3", 0, 0, 238, 296, RGB(0, 0, 0));
	go->AddBmp("×ß4", "×ß4", 0, 0, 234, 297, RGB(0, 0, 0));
	go->AddBmp("×ß5", "×ß5", 0, 0, 238, 296, RGB(0, 0, 0));
	go->AddBmp("×ß6", "×ß6", 0, 0, 259, 293, RGB(0, 0, 0));
	go->AddBmp("×ß7", "×ß7", 0, 0, 254, 289, RGB(0, 0, 0));
	go->AddBmp("×ß8", "×ß8", 0, 0, 241, 293, RGB(0, 0, 0));
	go->AddBmp("×ß9", "×ß9", 0, 0, 238, 296, RGB(0, 0, 0));
	go->AddBmp("×ß10", "×ß10", 0, 0, 234, 297, RGB(0, 0, 0));
	go->AddBmp("×ß11", "×ß11", 0, 0, 238, 296, RGB(0, 0, 0));
	go->AddBmp("×ß12", "×ß12", 0, 0, 254, 293, RGB(0, 0, 0));*/
	//a2[0].id = "×ß1";   a2[0].cf = 3;  a2[0].offx = -50; a2[0].offy = -157;
	//a2[1].id = "×ß2";   a2[1].cf = 3;  a2[1].offx = -52; a2[1].offy = -163;
	//a2[2].id = "×ß3";   a2[2].cf = 3;  a2[2].offx = -52; a2[2].offy = -167;
	//a2[3].id = "×ß4";   a2[3].cf = 3;  a2[3].offx = -52; a2[3].offy = -170;
	//a2[4].id = "×ß5";   a2[4].cf = 3;  a2[4].offx = -55; a2[4].offy = -167;
	//a2[5].id = "×ß6";   a2[5].cf = 3;  a2[5].offx = -49; a2[5].offy = -155;
	//a2[6].id = "×ß7";   a2[6].cf = 3;  a2[6].offx = -55; a2[6].offy = -153;
	//a2[7].id = "×ß8";   a2[7].cf = 3;  a2[7].offx = -58; a2[7].offy = -163;
	//a2[8].id = "×ß9";   a2[8].cf = 3;  a2[8].offx = -56; a2[8].offy = -167;
	//a2[9].id = "×ß10";  a2[9].cf = 3;  a2[9].offx = -54; a2[9].offy = -170;
	//a2[10].id = "×ß11"; a2[10].cf = 3; a2[10].offx = -54; a2[10].offy = -167;
	//a2[11].id = "×ß12"; a2[11].cf = 3; a2[11].offx = -48; a2[11].offy = -157;
	//for (int i = 0; i < 9; i++)
	//{
	//	sprintf_s(buf, 64, "É¨ÍÈ%d", i + 1);
	//	sprintf_s(buf2, 64, "pic/¹¥»÷/0%d.bmp", i + 20);
	//	go->AddImage(buf, buf2);
	//}
	/*go->AddBmp("É¨ÍÈ1", "É¨ÍÈ1", 0, 0, 246, 277, RGB(0, 0, 0));
	go->AddBmp("É¨ÍÈ2", "É¨ÍÈ2", 0, 0, 314, 265, RGB(0, 0, 0));
	go->AddBmp("É¨ÍÈ3", "É¨ÍÈ3", 0, 0, 291, 275, RGB(0, 0, 0));
	go->AddBmp("É¨ÍÈ4", "É¨ÍÈ4", 0, 0, 378, 283, RGB(0, 0, 0));
	go->AddBmp("É¨ÍÈ5", "É¨ÍÈ5", 0, 0, 379, 267, RGB(0, 0, 0));
	go->AddBmp("É¨ÍÈ6", "É¨ÍÈ6", 0, 0, 314, 258, RGB(0, 0, 0));
	go->AddBmp("É¨ÍÈ7", "É¨ÍÈ7", 0, 0, 269, 264, RGB(0, 0, 0));
	go->AddBmp("É¨ÍÈ8", "É¨ÍÈ8", 0, 0, 241, 276, RGB(0, 0, 0));
	go->AddBmp("É¨ÍÈ9", "É¨ÍÈ9", 0, 0, 243, 287, RGB(0, 0, 0));*/
	//a3[0].id = "É¨ÍÈ1"; a3[0].cf = 3; a3[0].offx = 27; a3[0].offy = -132;
	//a3[1].id = "É¨ÍÈ2"; a3[1].cf = 3; a3[1].offx = 23; a3[1].offy = -88;
	//a3[2].id = "É¨ÍÈ3"; a3[2].cf = 6; a3[2].offx = 18; a3[2].offy = -113;
	//a3[3].id = "É¨ÍÈ4"; a3[3].cf = 6; a3[3].offx = 42; a3[3].offy = -77;
	//a3[4].id = "É¨ÍÈ5"; a3[4].cf = 6; a3[4].offx = 22; a3[4].offy = -61;
	//a3[5].id = "É¨ÍÈ6"; a3[5].cf = 3; a3[5].offx = -36; a3[5].offy = -84;
	//a3[6].id = "É¨ÍÈ7"; a3[6].cf = 3; a3[6].offx = -51; a3[6].offy = -113;
	//a3[7].id = "É¨ÍÈ8"; a3[7].cf = 3; a3[7].offx = -37; a3[7].offy = -138;
	//a3[8].id = "É¨ÍÈ9"; a3[8].cf = 3; a3[8].offx = -31; a3[8].offy = -148;
	//for (int i = 0; i < 6; i++)
	//{
	//	sprintf_s(buf, 64, "ÇáÌß%d", i + 1);
	//	sprintf_s(buf2, 64, "pic/Ìß/02%d.bmp", i + 25);
	//	go->AddImage(buf, buf2);
	//}
	/*go->AddBmp("ÇáÌß1", "ÇáÌß1", 0, 0, 241, 274, RGB(0, 0, 0));
	go->AddBmp("ÇáÌß2", "ÇáÌß2", 0, 0, 241, 270, RGB(0, 0, 0));
	go->AddBmp("ÇáÌß3", "ÇáÌß3", 0, 0, 347, 263, RGB(0, 0, 0));
	go->AddBmp("ÇáÌß4", "ÇáÌß4", 0, 0, 336, 265, RGB(0, 0, 0));
	go->AddBmp("ÇáÌß5", "ÇáÌß5", 0, 0, 244, 268, RGB(0, 0, 0));
	go->AddBmp("ÇáÌß6", "ÇáÌß6", 0, 0, 243, 278, RGB(0, 0, 0));*/
	//a4[0].id = "ÇáÌß1"; a4[0].cf = 3; a4[0].offx = -39; a4[0].offy = -153;
	//a4[1].id = "ÇáÌß2"; a4[1].cf = 3; a4[1].offx = -49; a4[1].offy = -149;
	//a4[2].id = "ÇáÌß3"; a4[2].cf = 6; a4[2].offx = -25; a4[2].offy = -89;
	//a4[3].id = "ÇáÌß4"; a4[3].cf = 6; a4[3].offx = -25; a4[3].offy = -96;
	//a4[4].id = "ÇáÌß5"; a4[4].cf = 3; a4[4].offx = -61; a4[4].offy = -145;
	//a4[5].id = "ÇáÌß6"; a4[5].cf = 3; a4[5].offx = -29;  a4[5].offy = -153;
	//for (int i = 0; i < 13; i++)
	//{
	//	if (i < 10)
	//		sprintf_s(buf2, 64, "bmp\\ÀÙç÷¶ù¹¥\\rc211_0%d.bmp", i);
	//	else
	//		sprintf_s(buf2, 64, "bmp\\ÀÙç÷¶ù¹¥\\rc211_%d.bmp", i);
	//	sprintf_s(buf, 64, "ÀÙç÷¶ù¹¥%d", i);
	//	go->AddImage(buf, buf2);
	//}
	//go->AddBmp("ÀÙç÷¶ù¹¥0", "ÀÙç÷¶ù¹¥0", 0, 0, 263, 440, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥1", "ÀÙç÷¶ù¹¥1", 0, 0, 351, 478, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥2", "ÀÙç÷¶ù¹¥2", 0, 0, 378, 486, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥3", "ÀÙç÷¶ù¹¥3", 0, 0, 359, 487, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥4", "ÀÙç÷¶ù¹¥4", 0, 0, 353, 476, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥5", "ÀÙç÷¶ù¹¥5", 0, 0, 375, 473, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥6", "ÀÙç÷¶ù¹¥6", 0, 0, 489, 472, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥7", "ÀÙç÷¶ù¹¥7", 0, 0, 499, 472, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥8", "ÀÙç÷¶ù¹¥8", 0, 0, 470, 475, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥9", "ÀÙç÷¶ù¹¥9", 0, 0, 356, 485, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥10", "ÀÙç÷¶ù¹¥10", 0, 0, 309, 488, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥11", "ÀÙç÷¶ù¹¥11", 0, 0, 354, 456, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ù¹¥12", "ÀÙç÷¶ù¹¥12", 0, 0, 288, 415, 0xffffff);
	//a5[0].BmpId = "ÀÙç÷¶ù¹¥0";     a5[0].ContinueFrame = 3;   a5[0].offx =                23 ;         a5[0].offy =             -205;
	//a5[1].BmpId = "ÀÙç÷¶ù¹¥1";     a5[1].ContinueFrame = 3;   a5[1].offx =                33  ;        a5[1].offy =             -224;
	//a5[2].BmpId = "ÀÙç÷¶ù¹¥2";     a5[2].ContinueFrame = 3;   a5[2].offx =                46   ;       a5[2].offy =             -228;
	//a5[3].BmpId = "ÀÙç÷¶ù¹¥3";     a5[3].ContinueFrame = 3;   a5[3].offx =                39    ;      a5[3].offy =             -229;
	//a5[4].BmpId = "ÀÙç÷¶ù¹¥4";     a5[4].ContinueFrame = 3;   a5[4].offx =                56  ;        a5[4].offy =             -223;
	//a5[5].BmpId = "ÀÙç÷¶ù¹¥5";     a5[5].ContinueFrame = 3;   a5[5].offx =                -8;          a5[5].offy =               -222;
	//a5[6].BmpId = "ÀÙç÷¶ù¹¥6";     a5[6].ContinueFrame = 3;   a5[6].offx =                -102;      a5[6].offy =            -221;
	//a5[7].BmpId = "ÀÙç÷¶ù¹¥7";     a5[7].ContinueFrame = 3;   a5[7].offx =                -107;      a5[7].offy =            -221;
	//a5[8].BmpId = "ÀÙç÷¶ù¹¥8";     a5[8].ContinueFrame = 3;    a5[8].offx =               -94 ;      a5[8].offy =           -223;
	//a5[9].BmpId = "ÀÙç÷¶ù¹¥9";     a5[9].ContinueFrame = 3;    a5[9].offx =               -33 ;      a5[9].offy =           -229;
	//a5[10].BmpId = "ÀÙç÷¶ù¹¥10";   a5[10].ContinueFrame = 3; a5[10].offx =              28  ;       a5[10].offy =         -230;
	//a5[11].BmpId = "ÀÙç÷¶ù¹¥11";   a5[11].ContinueFrame = 3; a5[11].offx =              49    ;     a5[11].offy =         -214;
	//a5[12].BmpId = "ÀÙç÷¶ù¹¥12";   a5[12].ContinueFrame = 3; a5[12].offx =              40     ;    a5[12].offy =         -194;
	//for (int i = 0; i < 5; i++)
	//{
	//	sprintf_s(buf2, 64, "bmp\\ÊÜ\\rc052_0%d.bmp", i);
	//	sprintf_s(buf, 64, "ÀÙç÷¶ùÊÜÉË%d", i);
	//	go->AddImage(buf, buf2);
	//}
	//go->AddBmp("ÀÙç÷¶ùÊÜÉË0", "ÀÙç÷¶ùÊÜÉË0", 0, 0, 302, 352, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ùÊÜÉË1", "ÀÙç÷¶ùÊÜÉË1", 0, 0, 312, 341, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ùÊÜÉË2", "ÀÙç÷¶ùÊÜÉË2", 0, 0, 275, 340, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ùÊÜÉË3", "ÀÙç÷¶ùÊÜÉË3", 0, 0, 367, 339, 0xffffff);
	//go->AddBmp("ÀÙç÷¶ùÊÜÉË4", "ÀÙç÷¶ùÊÜÉË4", 0, 0, 466, 338, 0xffffff);
	//a6[0].BmpId = "ÀÙç÷¶ùÊÜÉË0";     a6[0].ContinueFrame = 3;   a6[0].offx =                 24          ;         a6[0].offy =            -160                ;
	//a6[1].BmpId = "ÀÙç÷¶ùÊÜÉË1";     a6[1].ContinueFrame = 3;   a6[1].offx =                 22          ;         a6[1].offy =            -155                ;
	//a6[2].BmpId = "ÀÙç÷¶ùÊÜÉË2";     a6[2].ContinueFrame = 3;   a6[2].offx =                 11          ;         a6[2].offy =            -153                ;
	//a6[3].BmpId = "ÀÙç÷¶ùÊÜÉË3";     a6[3].ContinueFrame = 3;   a6[3].offx =                 47          ;         a6[3].offy =            -153                ;
	//a6[4].BmpId = "ÀÙç÷¶ùÊÜÉË4";     a6[4].ContinueFrame = 3;   a6[4].offx =                 87          ;         a6[4].offy =            -152                ;
//	for (int i = 0; i < 15; i++)//0~14
//	{
//		sprintf_s(buf2, 64, "bmp\\ÀÙç÷¶ùÉÏÌø\\%d.bmp", i);//0~14
//		sprintf_s(buf, 64, "ÀÙç÷¶ùÉÏÌø%d", i);//0~14
//		go->AddImage(buf, buf2);
//	}										 
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø0", "ÀÙç÷¶ùÉÏÌø0",     0, 0,    335     ,    538    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø1", "ÀÙç÷¶ùÉÏÌø1",     0, 0,    314     ,    441    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø2", "ÀÙç÷¶ùÉÏÌø2",     0, 0,    412     ,    664    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø3", "ÀÙç÷¶ùÉÏÌø3",     0, 0,    405     ,    664    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø4", "ÀÙç÷¶ùÉÏÌø4",     0, 0,    404     ,   606    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø5", "ÀÙç÷¶ùÉÏÌø5",     0, 0,     364    ,    389    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø6", "ÀÙç÷¶ùÉÏÌø6",     0, 0,    357     ,    438    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø7", "ÀÙç÷¶ùÉÏÌø7",     0, 0,    342     ,   535    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø8", "ÀÙç÷¶ùÉÏÌø8",     0, 0,    330     ,    533    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø9", "ÀÙç÷¶ùÉÏÌø9",     0, 0,    289     ,   438    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø10", "ÀÙç÷¶ùÉÏÌø10", 0, 0,    330     ,    486    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø11", "ÀÙç÷¶ùÉÏÌø11", 0, 0,    293     ,   523    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø12", "ÀÙç÷¶ùÉÏÌø12", 0, 0,     368    ,    504    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø13", "ÀÙç÷¶ùÉÏÌø13", 0, 0,    393     ,   491    , RGB(0,255,0));
//	go->AddBmp("ÀÙç÷¶ùÉÏÌø14", "ÀÙç÷¶ùÉÏÌø14", 0, 0,    434     ,   470    , RGB(0,255,0));
//	a7[0].BmpId =   "ÀÙç÷¶ùÉÏÌø9";       a7[0].ContinueFrame = 2;       a7[0].offx =            32        ;						  a7[0].offy =          -204        ;
//	a7[1].BmpId =   "ÀÙç÷¶ùÉÏÌø10";       a7[1].ContinueFrame = 2;       a7[1].offx =          32        ;                        a7[1].offy =         -228      ;
//	a7[2].BmpId =   "ÀÙç÷¶ùÉÏÌø2";       a7[2].ContinueFrame = 2;       a7[2].offx =            74        ;                        a7[2].offy =         -410      ;
//	a7[3].BmpId =   "ÀÙç÷¶ùÉÏÌø3";       a7[3].ContinueFrame = 2;       a7[3].offx =            76        ;                        a7[3].offy =         -468      ;
//	a7[4].BmpId =   "ÀÙç÷¶ùÉÏÌø4";       a7[4].ContinueFrame = 2;       a7[4].offx =            54        ;                        a7[4].offy =         -473      ;
//	a7[5].BmpId =   "ÀÙç÷¶ùÉÏÌø5";       a7[5].ContinueFrame = 2;       a7[5].offx =            21        ;                        a7[5].offy =         -406      ;
//	a7[6].BmpId =   "ÀÙç÷¶ùÉÏÌø6";       a7[6].ContinueFrame = 2;       a7[6].offx =            14        ;                        a7[6].offy =         -375      ;
//	a7[7].BmpId =   "ÀÙç÷¶ùÉÏÌø0";       a7[7].ContinueFrame = 2;       a7[7].offx =            21        ;                        a7[7].offy =         -354      ;
//	a7[8].BmpId =   "ÀÙç÷¶ùÉÏÌø7";       a7[8].ContinueFrame = 2;       a7[8].offx =            41        ;                        a7[8].offy =         -300      ;
//	a7[9].BmpId =   "ÀÙç÷¶ùÉÏÌø8";       a7[9].ContinueFrame = 2;     a7[9].offx =              25          ;                        a7[9].offy =       -272      ;
//	a7[10].BmpId = "ÀÙç÷¶ùÉÏÌø11";     a7[10].ContinueFrame = 2;   a7[10].offx =            20          ;                      a7[10].offy =       -262      ;
//	a7[11].BmpId = "ÀÙç÷¶ùÉÏÌø12";     a7[11].ContinueFrame = 2;   a7[11].offx =            24          ;                      a7[11].offy =       -245      ;
//	a7[12].BmpId = "ÀÙç÷¶ùÉÏÌø13";     a7[12].ContinueFrame = 2;   a7[12].offx =            16          ;                      a7[12].offy =       -232      ;
//	a7[13].BmpId = "ÀÙç÷¶ùÉÏÌø14";     a7[13].ContinueFrame = 2;   a7[13].offx =            21          ;                      a7[13].offy =       -221      ;
//	a7[14].BmpId = "ÀÙç÷¶ùÉÏÌø1";       a7[14].ContinueFrame = 2;   a7[14].offx =              1         ;					    a7[14].offy =          -207         ; 
//	for (int i = 0; i < 16; ++i)
//	{
//		if (i < 10)
//			sprintf_s(buf, 64, "bmp\\ÅÜ\\rc032_0%d.bmp", i);
//		else
//			sprintf_s(buf, 64, "bmp\\ÅÜ\\rc032_%d.bmp", i);
//		sprintf_s(buf2, 64, "ÅÜ%d", i);
//		go->AddImage(buf2, buf);
//	}
//	go->AddBmp("ÅÜ0", "ÅÜ0", 0, 0, 255, 385, 0xffffff);
//	go->AddBmp("ÅÜ1", "ÅÜ1", 0, 0, 292, 358, 0xffffff);
//	go->AddBmp("ÅÜ2", "ÅÜ2", 0, 0, 331, 392, 0xffffff);
//	go->AddBmp("ÅÜ3", "ÅÜ3", 0, 0, 409, 367, 0xffffff);
//	go->AddBmp("ÅÜ4", "ÅÜ4", 0, 0, 415, 367, 0xffffff);
//	go->AddBmp("ÅÜ5", "ÅÜ5", 0, 0, 417, 367, 0xffffff);
//	go->AddBmp("ÅÜ6", "ÅÜ6", 0, 0, 410, 367, 0xffffff);
//	go->AddBmp("ÅÜ7", "ÅÜ7", 0, 0, 416, 367, 0xffffff);
//	go->AddBmp("ÅÜ8", "ÅÜ8", 0, 0, 415, 367, 0xffffff);
//	go->AddBmp("ÅÜ9", "ÅÜ9", 0, 0, 409, 381, 0xffffff);
//	go->AddBmp("ÅÜ10", "ÅÜ10", 0, 0, 370, 375, 0xffffff);
//	go->AddBmp("ÅÜ11", "ÅÜ11", 0, 0, 378, 383, 0xffffff);
//	go->AddBmp("ÅÜ12", "ÅÜ12", 0, 0, 286, 384, 0xffffff);
//	go->AddBmp("ÅÜ13", "ÅÜ13", 0, 0, 336, 387, 0xffffff);
//	go->AddBmp("ÅÜ14", "ÅÜ14", 0, 0, 297, 401, 0xffffff);
//	go->AddBmp("ÅÜ15", "ÅÜ15", 0, 0, 258, 403, 0xffffff);
//	a8[0].BmpId = "ÅÜ0";           a8[0].ContinueFrame =   2;       a8[0].offx =     9;   					  a8[0].offy = -178;
//	a8[1].BmpId = "ÅÜ1";           a8[1].ContinueFrame = 2;       a8[1].offx = 27;                       a8[1].offy = -189;
//	a8[2].BmpId = "ÅÜ2";           a8[2].ContinueFrame = 2;       a8[2].offx = 24;                       a8[2].offy = -186;
//	a8[3].BmpId = "ÅÜ3";           a8[3].ContinueFrame = 2;       a8[3].offx = 63;                       a8[3].offy = -199;
//	a8[4].BmpId = "ÅÜ4";           a8[4].ContinueFrame = 2;       a8[4].offx = 66;                       a8[4].offy = -199;
//	a8[5].BmpId = "ÅÜ5";           a8[5].ContinueFrame = 2;       a8[5].offx = 68;                       a8[5].offy = -198;
//	a8[6].BmpId = "ÅÜ6";           a8[6].ContinueFrame = 2;       a8[6].offx = 65;                       a8[6].offy = -198;
//	a8[7].BmpId = "ÅÜ7";           a8[7].ContinueFrame = 2;       a8[7].offx = 67;                       a8[7].offy = -198;
//	a8[8].BmpId = "ÅÜ8";           a8[8].ContinueFrame = 2;       a8[8].offx = 66;                       a8[8].offy = -198;
//		a8[9].BmpId = "ÅÜ9";           a8[9].ContinueFrame = 2;       a8[9].offx = 83;                       a8[9].offy = -182;
//		a8[10].BmpId = "ÅÜ10";       a8[10].ContinueFrame = 2;       a8[10].offx = 54;                    a8[10].offy = -178;
//		a8[11].BmpId = "ÅÜ11";       a8[11].ContinueFrame = 2;       a8[11].offx = 27;                    a8[11].offy = -186;
//		a8[12].BmpId = "ÅÜ12";       a8[12].ContinueFrame = 2;       a8[12].offx = 2;                       a8[12].offy = -190;
//		a8[13].BmpId = "ÅÜ13";       a8[13].ContinueFrame = 2;       a8[13].offx = -17;                   a8[13].offy = -188;
//		a8[14].BmpId = "ÅÜ14";       a8[14].ContinueFrame = 2;       a8[14].offx = -4;   			      a8[14].offy = -182;
//		a8[15].BmpId = "ÅÜ15";       a8[15].ContinueFrame = 2;       a8[15].offx = 17;  			      a8[15].offy = -184;
//		for (int i = 0; i < 14; ++i)
//		{
//			if (i < 10)
//				sprintf_s(buf, 64, "bmp\\BOSS\\BOSS×ß\\ar000_0%d.bmp", i);
//			else
//				sprintf_s(buf, 64, "bmp\\BOSS\\BOSS×ß\\ar000_%d.bmp", i);
//			sprintf_s(buf2, 64, "BOSS×ß%d", i);
//			go->AddImage(buf2, buf);
//		}
//		go->AddBmp("BOSS×ß0", "BOSS×ß0", 0, 0,          394         ,      368   , 0xffffff);
//		go->AddBmp("BOSS×ß1", "BOSS×ß1", 0, 0,          393         ,      363   , 0xffffff);
//		go->AddBmp("BOSS×ß2", "BOSS×ß2", 0, 0,          398         ,      361   , 0xffffff);
//		go->AddBmp("BOSS×ß3", "BOSS×ß3", 0, 0,          407         ,      359   , 0xffffff);
//		go->AddBmp("BOSS×ß4", "BOSS×ß4", 0, 0,          437         ,      361   , 0xffffff);
//		go->AddBmp("BOSS×ß5", "BOSS×ß5", 0, 0,          425         ,      363   , 0xffffff);
//		go->AddBmp("BOSS×ß6", "BOSS×ß6", 0, 0,          410         ,      364   , 0xffffff);
//		go->AddBmp("BOSS×ß7", "BOSS×ß7", 0, 0,          398         ,      363   , 0xffffff);
//		go->AddBmp("BOSS×ß8", "BOSS×ß8", 0, 0,          398         ,      365   , 0xffffff);
//		go->AddBmp("BOSS×ß9", "BOSS×ß9", 0, 0,          424         ,      366   , 0xffffff);
//		go->AddBmp("BOSS×ß10", "BOSS×ß10", 0, 0,      445         ,      368   , 0xffffff);
//		go->AddBmp("BOSS×ß11", "BOSS×ß11", 0, 0,      441         ,      369   , 0xffffff);
//		go->AddBmp("BOSS×ß12", "BOSS×ß12", 0, 0,      423         ,      370   , 0xffffff);
//		go->AddBmp("BOSS×ß13", "BOSS×ß13", 0, 0,      403         ,      368   , 0xffffff);
//		a9[0].BmpId = "BOSS×ß0";           a9[0].ContinueFrame = 2;         a9[0].offx =      41 ;   					    a9[0].offy =  -173       ;
//		a9[1].BmpId = "BOSS×ß1";           a9[1].ContinueFrame = 2;         a9[1].offx =      38 ;                       a9[1].offy =      -170       ;
//		a9[2].BmpId = "BOSS×ß2";           a9[2].ContinueFrame = 2;         a9[2].offx =      37 ;                       a9[2].offy =      -168       ;
//		a9[3].BmpId = "BOSS×ß3";           a9[3].ContinueFrame = 2;         a9[3].offx =      41 ;                       a9[3].offy =      -168       ;
//		a9[4].BmpId = "BOSS×ß4";           a9[4].ContinueFrame = 2;         a9[4].offx =      56 ;                       a9[4].offy =      -168       ;
//		a9[5].BmpId = "BOSS×ß5";           a9[5].ContinueFrame = 2;         a9[5].offx =      49 ;                       a9[5].offy =      -170       ;
//		a9[6].BmpId = "BOSS×ß6";           a9[6].ContinueFrame = 2;         a9[6].offx =      43 ;                       a9[6].offy =      -170       ;
//		a9[7].BmpId = "BOSS×ß7";           a9[7].ContinueFrame = 2;         a9[7].offx =      38 ;                       a9[7].offy =      -169       ;
//		a9[8].BmpId = "BOSS×ß8";           a9[8].ContinueFrame = 2;         a9[8].offx =      39 ;                       a9[8].offy =      -170       ;
//		a9[9].BmpId = "BOSS×ß9";           a9[9].ContinueFrame = 2;         a9[9].offx =      54 ;                       a9[9].offy =      -169       ;
//		a9[10].BmpId = "BOSS×ß10";         a9[10].ContinueFrame = 2;       a9[10].offx =  67   ;                     a9[10].offy =    -169       ;
//		a9[11].BmpId = "BOSS×ß11";         a9[11].ContinueFrame = 2;       a9[11].offx =  62   ;                     a9[11].offy =    -167       ;
//		a9[12].BmpId = "BOSS×ß12";         a9[12].ContinueFrame = 2;       a9[12].offx =  51   ;                       a9[12].offy =  -168       ;
//		a9[13].BmpId = "BOSS×ß13";         a9[13].ContinueFrame = 2;       a9[13].offx =  40  ;                    a9[13].offy =      -171        ;
	/*for (int i = 0; i < 10; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÕ¾\\ar001_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÕ¾\\ar000_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSÕ¾%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSÕ¾0", "BOSSÕ¾0", 0, 0, 384, 380, 0xffffff);
	go->AddBmp("BOSSÕ¾1", "BOSSÕ¾1", 0, 0, 366, 388, 0xffffff);
	go->AddBmp("BOSSÕ¾2", "BOSSÕ¾2", 0, 0, 351, 389, 0xffffff);
	go->AddBmp("BOSSÕ¾3", "BOSSÕ¾3", 0, 0, 355, 375, 0xffffff);
	go->AddBmp("BOSSÕ¾4", "BOSSÕ¾4", 0, 0, 355, 338, 0xffffff);
	go->AddBmp("BOSSÕ¾5", "BOSSÕ¾5", 0, 0, 366, 333, 0xffffff);
	go->AddBmp("BOSSÕ¾6", "BOSSÕ¾6", 0, 0, 370, 326, 0xffffff);
	go->AddBmp("BOSSÕ¾7", "BOSSÕ¾7", 0, 0, 386, 346, 0xffffff);
	go->AddBmp("BOSSÕ¾8", "BOSSÕ¾8", 0, 0, 385, 349, 0xffffff);
	go->AddBmp("BOSSÕ¾9", "BOSSÕ¾9", 0, 0, 374, 351, 0xffffff);
	a10[0].BmpId = "BOSSÕ¾0";           a10[0].ContinueFrame = 2;         a10[0].offx = 60;   				    a10[0].offy = -189;
	a10[1].BmpId = "BOSSÕ¾1";           a10[1].ContinueFrame = 2;         a10[1].offx = 52;                       a10[1].offy = -192;
	a10[2].BmpId = "BOSSÕ¾2";           a10[2].ContinueFrame = 2;         a10[2].offx = 44;                       a10[2].offy = -191;
	a10[3].BmpId = "BOSSÕ¾3";           a10[3].ContinueFrame = 2;         a10[3].offx = 35;                       a10[3].offy = -184;
	a10[4].BmpId = "BOSSÕ¾4";           a10[4].ContinueFrame = 2;         a10[4].offx = 31;                       a10[4].offy = -164;
	a10[5].BmpId = "BOSSÕ¾5";           a10[5].ContinueFrame = 2;         a10[5].offx = 38;                       a10[5].offy = -162;
	a10[6].BmpId = "BOSSÕ¾6";           a10[6].ContinueFrame = 2;         a10[6].offx = 34;                       a10[6].offy = -159;
	a10[7].BmpId = "BOSSÕ¾7";           a10[7].ContinueFrame = 2;         a10[7].offx = 44;                       a10[7].offy = -170;
	a10[8].BmpId = "BOSSÕ¾8";           a10[8].ContinueFrame = 2;         a10[8].offx = 58;                       a10[8].offy = -172;
	a10[9].BmpId = "BOSSÕ¾9";           a10[9].ContinueFrame = 2;         a10[9].offx = 53;                       a10[9].offy = -173;*/
	//for (int i = 0; i < 3; ++i)
	//{
	//	if (i < 10)
	//		sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÊÜ\\ar900_0%d.bmp", i);//àÅ
	//	else
	//		sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÕ¾\\ar900_%d.bmp", i);
	//	sprintf_s(ArrBmpName, MAX_PATH, "BOSSÊÜ%d", i);
	//	go->AddImage(ArrBmpName, ArrFileName);
	//}
	//go->AddBmp("BOSSÊÜ0", "BOSSÊÜ0", 0, 0, 215, 259, 0xffffff);
	//go->AddBmp("BOSSÊÜ1", "BOSSÊÜ1", 0, 0, 215, 243, 0xffffff);
	//go->AddBmp("BOSSÊÜ2", "BOSSÊÜ2", 0, 0, 215, 250, 0xffffff);
	//a11[0].BmpId = "BOSSÊÜ0";           a11[0].ContinueFrame = 2;         a11[0].offx = 4;   				      a11[0].offy = -219;
	//a11[1].BmpId = "BOSSÊÜ1";           a11[1].ContinueFrame = 2;         a11[1].offx = 5;                       a11[1].offy = -211;
	//a11[2].BmpId = "BOSSÊÜ2";           a11[2].ContinueFrame = 2;         a11[2].offx = 4;                       a11[2].offy = -215;
	for (int i = 0; i < 11; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÅÜ\\ar030_0%d.bmp", i);//àÅ
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÅÜ\\ar030_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSÅÜ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSÅÜ0", "BOSSÅÜ0",     0, 0, 470, 295, 0xffffff);
	go->AddBmp("BOSSÅÜ1", "BOSSÅÜ1",     0, 0, 449, 270, 0xffffff);
	go->AddBmp("BOSSÅÜ2", "BOSSÅÜ2",     0, 0, 410, 300, 0xffffff);
	go->AddBmp("BOSSÅÜ3", "BOSSÅÜ3",     0, 0, 409, 301, 0xffffff);
	go->AddBmp("BOSSÅÜ4", "BOSSÅÜ4",     0, 0, 427, 293, 0xffffff);
	go->AddBmp("BOSSÅÜ5", "BOSSÅÜ5",     0, 0, 421, 302, 0xffffff);
	go->AddBmp("BOSSÅÜ6", "BOSSÅÜ6",     0, 0, 407, 300, 0xffffff);
	go->AddBmp("BOSSÅÜ7", "BOSSÅÜ7",     0, 0, 357, 300, 0xffffff);
	go->AddBmp("BOSSÅÜ8", "BOSSÅÜ8",     0, 0, 394, 274, 0xffffff);
	go->AddBmp("BOSSÅÜ9", "BOSSÅÜ9",     0, 0, 405, 283, 0xffffff);
	go->AddBmp("BOSSÅÜ10", "BOSSÅÜ10", 0, 0, 376, 359, 0xffffff);
	a12[0].BmpId = "BOSSÅÜ0";           a12[0].ContinueFrame = 2;         a12[0].offx = 0       ;   				      a12[0].offy = -151  ;
	a12[1].BmpId = "BOSSÅÜ1";           a12[1].ContinueFrame = 2;         a12[1].offx = -25   ;                       a12[1].offy =  -137    ;
	a12[2].BmpId = "BOSSÅÜ2";           a12[2].ContinueFrame = 2;         a12[2].offx = -38   ;                       a12[2].offy =  -142   ;
	a12[3].BmpId = "BOSSÅÜ3";           a12[3].ContinueFrame = 2;         a12[3].offx = -25   ;   				      a12[3].offy = -140  ;
	a12[4].BmpId = "BOSSÅÜ4";           a12[4].ContinueFrame = 2;         a12[4].offx = -17   ;                       a12[4].offy =  -130   ;
	a12[5].BmpId = "BOSSÅÜ5";           a12[5].ContinueFrame = 2;         a12[5].offx = -19   ;                       a12[5].offy =  -133   ;
	a12[6].BmpId = "BOSSÅÜ6";           a12[6].ContinueFrame = 2;         a12[6].offx = -5     ;   				      a12[6].offy = -133  ;
	a12[7].BmpId = "BOSSÅÜ7";           a12[7].ContinueFrame = 2;         a12[7].offx = 13    ;                       a12[7].offy =   -142    ;
	a12[8].BmpId = "BOSSÅÜ8";           a12[8].ContinueFrame = 2;         a12[8].offx = -15   ;                       a12[8].offy =   -131    ;
	a12[9].BmpId = "BOSSÅÜ9";           a12[9].ContinueFrame = 2;         a12[9].offx = -17   ;                       a12[9].offy =   -135    ;
	a12[10].BmpId = "BOSSÅÜ10";      a12[10].ContinueFrame = 2;      a12[10].offx = -16   ;                     a12[10].offy =   -165    ;
	for (int i = 0; i < 16; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÒ§\\ar202_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÒ§\\ar202_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSÒ§%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSÒ§0", "BOSSÒ§0", 0, 0,         373 ,  390, 0xffffff);
	go->AddBmp("BOSSÒ§1", "BOSSÒ§1", 0, 0,         407 ,  387, 0xffffff);
	go->AddBmp("BOSSÒ§2", "BOSSÒ§2", 0, 0,         406 ,  399, 0xffffff);
	go->AddBmp("BOSSÒ§3", "BOSSÒ§3", 0, 0,         427 ,  347, 0xffffff);
	go->AddBmp("BOSSÒ§4", "BOSSÒ§4", 0, 0,         428 ,  324, 0xffffff);
	go->AddBmp("BOSSÒ§5", "BOSSÒ§5", 0, 0,         447 ,  396, 0xffffff);
	go->AddBmp("BOSSÒ§6", "BOSSÒ§6", 0, 0,         562 ,  409, 0xffffff);
	go->AddBmp("BOSSÒ§7", "BOSSÒ§7", 0, 0,         602 ,  415, 0xffffff);
	go->AddBmp("BOSSÒ§8", "BOSSÒ§8", 0, 0,         602 ,  420, 0xffffff);
	go->AddBmp("BOSSÒ§9", "BOSSÒ§9", 0, 0,         487 ,  475, 0xffffff);
	go->AddBmp("BOSSÒ§10", "BOSSÒ§10", 0, 0,     488 ,  485, 0xffffff);
	go->AddBmp("BOSSÒ§11", "BOSSÒ§11", 0, 0,     414 ,  485, 0xffffff);
	go->AddBmp("BOSSÒ§12", "BOSSÒ§12", 0, 0,     377 ,  459, 0xffffff);
	go->AddBmp("BOSSÒ§13", "BOSSÒ§13", 0, 0,     378 , 416, 0xffffff);
	go->AddBmp("BOSSÒ§14", "BOSSÒ§14", 0, 0,     404 ,  379, 0xffffff);
	go->AddBmp("BOSSÒ§15", "BOSSÒ§15",     0, 0, 399 ,  375, 0xffffff);
	a13[0].BmpId =   "BOSSÒ§0";              a13[0].ContinueFrame = 2;         a13[0].offx =  33   ;   				           a13[0].offy =   -184 ;
	a13[1].BmpId =   "BOSSÒ§1";              a13[1].ContinueFrame = 2;         a13[1].offx =  14   ;                       a13[1].offy =         -179 ;
	a13[2].BmpId =   "BOSSÒ§2";              a13[2].ContinueFrame = 2;         a13[2].offx =  11   ;                       a13[2].offy =         -184 ;
	a13[3].BmpId =   "BOSSÒ§3";              a13[3].ContinueFrame = 2;         a13[3].offx =  -45  ;   				       a13[3].offy =       -155   ;
	a13[4].BmpId =   "BOSSÒ§4";              a13[4].ContinueFrame = 2;         a13[4].offx =  -46  ;                       a13[4].offy =        -143  ;
	a13[5].BmpId =   "BOSSÒ§5";              a13[5].ContinueFrame = 2;         a13[5].offx =  -66  ;                       a13[5].offy =        -179  ;
	a13[6].BmpId =   "BOSSÒ§6";              a13[6].ContinueFrame = 2;         a13[6].offx =  -38  ;   				       a13[6].offy =       -187 ;
	a13[7].BmpId =   "BOSSÒ§7";              a13[7].ContinueFrame = 2;         a13[7].offx =  -37    ;                         a13[7].offy =    -187 ;
	a13[8].BmpId =   "BOSSÒ§8";              a13[8].ContinueFrame = 2;         a13[8].offx =  -50    ;                        a13[8].offy =     -188  ;
	a13[9].BmpId =   "BOSSÒ§9";              a13[9].ContinueFrame = 2;         a13[9].offx =   -1   ;                        a13[9].offy =      -214   ;
	a13[10].BmpId = "BOSSÒ§10";            a13[10].ContinueFrame = 2;       a13[10].offx =   1   ;                      a13[10].offy =      -223   ;
	a13[11].BmpId = "BOSSÒ§11";            a13[11].ContinueFrame = 2;       a13[11].offx =   -1    ;   				        a13[11].offy =-227   ;
	a13[12].BmpId = "BOSSÒ§12";            a13[12].ContinueFrame = 2;       a13[12].offx =   -3    ;                        a13[12].offy = -214    ;
	a13[13].BmpId = "BOSSÒ§13";            a13[13].ContinueFrame = 2;       a13[13].offx =   11   ;                       a13[13].offy =   -191    ;
	a13[14].BmpId = "BOSSÒ§14";            a13[14].ContinueFrame = 2;       a13[14].offx =   22   ;                       a13[14].offy =   -176    ;
	a13[15].BmpId = "BOSSÒ§15";            a13[15].ContinueFrame = 2;       a13[15].offx =   29   ;                       a13[15].offy =   -175    ;
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùË¯\\rc011_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùË¯\\rc011_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùË¯%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùË¯0",   "ÀÙç÷¶ùË¯0", 0, 0,   320, 255, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯1",   "ÀÙç÷¶ùË¯1", 0, 0,   331, 250, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯2",   "ÀÙç÷¶ùË¯2", 0, 0,   333, 248, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯3",   "ÀÙç÷¶ùË¯3", 0, 0,   330, 254, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯4",   "ÀÙç÷¶ùË¯4", 0, 0,   330, 258, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯5",   "ÀÙç÷¶ùË¯5", 0, 0,   333, 248, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯6",   "ÀÙç÷¶ùË¯6", 0, 0,   326, 256, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯7",   "ÀÙç÷¶ùË¯7", 0, 0,   322, 262, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯8",   "ÀÙç÷¶ùË¯8", 0, 0,   333, 249, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯9",   "ÀÙç÷¶ùË¯9", 0, 0,   335, 255, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯10", "ÀÙç÷¶ùË¯10", 0, 0, 329, 257, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯11", "ÀÙç÷¶ùË¯11", 0, 0, 331, 257, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯12", "ÀÙç÷¶ùË¯12", 0, 0, 336, 257, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯13", "ÀÙç÷¶ùË¯13", 0, 0, 338, 256, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯14", "ÀÙç÷¶ùË¯14", 0, 0, 342, 255, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯15", "ÀÙç÷¶ùË¯15", 0, 0, 343, 254, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯16", "ÀÙç÷¶ùË¯16", 0, 0, 316, 268, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯17", "ÀÙç÷¶ùË¯17", 0, 0, 302, 258, 0xffffff);
	a14[0].BmpId =   "ÀÙç÷¶ùË¯0";  a14[0].  ContinueFrame = 2;     a14[0].offx   =      14   ;        a14[0].offy =          -119    ;
	a14[1].BmpId =   "ÀÙç÷¶ùË¯1";  a14[1].  ContinueFrame = 2;     a14[1].offx   =      7     ;        a14[1].offy =          -116    ;
	a14[2].BmpId =   "ÀÙç÷¶ùË¯2";  a14[2].  ContinueFrame = 2;     a14[2].offx   =      5     ;        a14[2].offy =          -115    ;
	a14[3].BmpId =   "ÀÙç÷¶ùË¯3";  a14[3].  ContinueFrame = 2;     a14[3].offx   =      7     ;        a14[3].offy =          -118     ;
	a14[4].BmpId =   "ÀÙç÷¶ùË¯4";  a14[4].  ContinueFrame = 2;     a14[4].offx   =      6     ;        a14[4].offy =          -120     ;
	a14[5].BmpId =   "ÀÙç÷¶ùË¯5";  a14[5].  ContinueFrame = 2;     a14[5].offx   =      5     ;        a14[5].offy =          -116     ;
	a14[6].BmpId =   "ÀÙç÷¶ùË¯6";  a14[6].  ContinueFrame = 2;     a14[6].offx   =      9     ;        a14[6].offy =          -121     ;
	a14[7].BmpId =   "ÀÙç÷¶ùË¯7";  a14[7].  ContinueFrame = 2;     a14[7].offx   =      14   ;        a14[7].offy =          -124     ;
	a14[8].BmpId =   "ÀÙç÷¶ùË¯8";  a14[8].  ContinueFrame = 2;     a14[8].offx   =      9     ;        a14[8].offy =          -118     ;
	a14[9].BmpId =   "ÀÙç÷¶ùË¯9";  a14[9].  ContinueFrame = 2;     a14[9].offx   =      8      ;        a14[9].offy =         -120      ;
	a14[10].BmpId = "ÀÙç÷¶ùË¯10";a14[10].ContinueFrame = 2;     a14[10].offx =      -2    ;         a14[10].offy =       -120     ;
	a14[11].BmpId = "ÀÙç÷¶ùË¯11";a14[11].ContinueFrame = 2;     a14[11].offx =      1     ;        a14[11].offy =        -120    ;
	a14[12].BmpId = "ÀÙç÷¶ùË¯12";a14[12].ContinueFrame = 2;     a14[12].offx =      3     ;        a14[12].offy =        -120    ;
	a14[13].BmpId = "ÀÙç÷¶ùË¯13";a14[13].ContinueFrame = 2;     a14[13].offx =      3      ;        a14[13].offy =       -119     ;
	a14[14].BmpId = "ÀÙç÷¶ùË¯14";a14[14].ContinueFrame = 2;     a14[14].offx =      5      ;        a14[14].offy =       -119     ;
	a14[15].BmpId = "ÀÙç÷¶ùË¯15";a14[15].ContinueFrame = 2;     a14[15].offx =      5      ;        a14[15].offy =       -118     ;
	a14[16].BmpId = "ÀÙç÷¶ùË¯16"; a14[16].ContinueFrame = 2;     a14[16].offx =     4      ;        a14[16].offy =       -125       ;
	a14[17].BmpId = "ÀÙç÷¶ùË¯17"; a14[17].ContinueFrame = 2;     a14[17].offx =     13    ;        a14[17].offy =       -120      ;
	for (int i = 0; i < 6; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùË¯¹¥\\rc230_0%d.bmp", i);//àÅ
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÅÜ\\ar030_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùË¯¹¥%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùË¯¹¥0", "ÀÙç÷¶ùË¯¹¥0", 0, 0, 347, 275, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥1", "ÀÙç÷¶ùË¯¹¥1", 0, 0, 364, 273, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥2", "ÀÙç÷¶ùË¯¹¥2", 0, 0, 359, 258, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥3", "ÀÙç÷¶ùË¯¹¥3", 0, 0, 506, 258, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥4", "ÀÙç÷¶ùË¯¹¥4", 0, 0, 497, 260, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥5", "ÀÙç÷¶ùË¯¹¥5", 0, 0, 430, 258, 0xffffff);
	a15[0].BmpId = "ÀÙç÷¶ùË¯¹¥0";           a15[0].ContinueFrame = 2;         a15[0].offx = 18      ;   			            a15[0].offy = -122;
	a15[1].BmpId = "ÀÙç÷¶ùË¯¹¥1";           a15[1].ContinueFrame = 2;         a15[1].offx = 25     ;                         a15[1].offy = -121;
	a15[2].BmpId = "ÀÙç÷¶ùË¯¹¥2";           a15[2].ContinueFrame = 2;         a15[2].offx = 41     ;                         a15[2].offy = -113;
	a15[3].BmpId = "ÀÙç÷¶ùË¯¹¥3";           a15[3].ContinueFrame = 2;         a15[3].offx = -15     ;   				        a15[3].offy = -113;
	a15[4].BmpId = "ÀÙç÷¶ùË¯¹¥4";           a15[4].ContinueFrame = 2;         a15[4].offx = -6     ;                         a15[4].offy = -114;
	a15[5].BmpId = "ÀÙç÷¶ùË¯¹¥5";           a15[5].ContinueFrame = 2;         a15[5].offx =  9     ;                         a15[5].offy = -112;
	for (int i = 0; i < 5; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÊÜ\\rc052_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùÊÜ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùÊÜ0", "ÀÙç÷¶ùÊÜ0", 0, 0, 302, 352, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÊÜ1", "ÀÙç÷¶ùÊÜ1", 0, 0, 312, 341, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÊÜ2", "ÀÙç÷¶ùÊÜ2", 0, 0, 275, 340, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÊÜ3", "ÀÙç÷¶ùÊÜ3", 0, 0, 367, 339, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÊÜ4", "ÀÙç÷¶ùÊÜ4", 0, 0, 466, 338, 0xffffff);

	a16[0].BmpId = "ÀÙç÷¶ùÊÜ0";           a16[0].ContinueFrame = 2;         a16[0].offx = 25;   			            a16[0].offy = -161;
	a16[1].BmpId = "ÀÙç÷¶ùÊÜ1";           a16[1].ContinueFrame = 2;         a16[1].offx = 23;                         a16[1].offy = -157;
	a16[2].BmpId = "ÀÙç÷¶ùÊÜ2";           a16[2].ContinueFrame = 2;         a16[2].offx = 12;                         a16[2].offy = -154;
	a16[3].BmpId = "ÀÙç÷¶ùÊÜ3";           a16[3].ContinueFrame = 2;         a16[3].offx = 59;   				        a16[3].offy = -154;
	a16[4].BmpId = "ÀÙç÷¶ùÊÜ4";           a16[4].ContinueFrame = 2;         a16[4].offx = 98;                         a16[4].offy = -153;
	for (int i = 2; i < 12; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÅÜ\\rc111_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÅÜ\\rc111_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùÅÜ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùÅÜ2", "ÀÙç÷¶ùÅÜ2", 0, 0, 289, 287, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅÜ3", "ÀÙç÷¶ùÅÜ3", 0, 0, 332, 285, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅÜ4", "ÀÙç÷¶ùÅÜ4", 0, 0, 389, 278, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅÜ5", "ÀÙç÷¶ùÅÜ5", 0, 0, 320, 284, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅÜ6", "ÀÙç÷¶ùÅÜ6", 0, 0, 336, 259, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅÜ7", "ÀÙç÷¶ùÅÜ7", 0, 0, 313, 292, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅÜ8", "ÀÙç÷¶ùÅÜ8", 0, 0, 305, 284, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅÜ9", "ÀÙç÷¶ùÅÜ9", 0, 0, 397, 297, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅÜ10", "ÀÙç÷¶ùÅÜ10", 0, 0, 245, 277, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅÜ11", "ÀÙç÷¶ùÅÜ11", 0, 0, 330, 277, 0xffffff);
	a17[0].BmpId = "ÀÙç÷¶ùÅÜ2";             a17[0].ContinueFrame = 2;         a17[0].offx =  4;   			            a17[0].offy =  -142   ;
	a17[1].BmpId = "ÀÙç÷¶ùÅÜ3";             a17[1].ContinueFrame = 2;         a17[1].offx =  -11;                         a17[1].offy = -144	;
	a17[2].BmpId = "ÀÙç÷¶ùÅÜ4";             a17[2].ContinueFrame = 2;         a17[2].offx =  13;                         a17[2].offy = -138	;
	a17[3].BmpId = "ÀÙç÷¶ùÅÜ5";             a17[3].ContinueFrame = 2;         a17[3].offx =  25;   				        a17[3].offy =  -142	  ;
	a17[4].BmpId = "ÀÙç÷¶ùÅÜ6";             a17[4].ContinueFrame = 2;         a17[4].offx =  42;                         a17[4].offy = -128	;
	a17[5].BmpId = "ÀÙç÷¶ùÅÜ7";             a17[5].ContinueFrame = 2;         a17[5].offx =  66;   			            a17[5].offy =  -144	  ;
	a17[6].BmpId = "ÀÙç÷¶ùÅÜ8";             a17[6].ContinueFrame = 2;         a17[6].offx =  27;                         a17[6].offy = -139	;
	a17[7].BmpId = "ÀÙç÷¶ùÅÜ9";             a17[7].ContinueFrame = 2;         a17[7].offx =  -48;                         a17[7].offy =-147	;
	a17[8].BmpId = "ÀÙç÷¶ùÅÜ10";           a17[8].ContinueFrame = 2;         a17[8].offx =  24;   				        a17[8].offy =  -136	  ;
	a17[9].BmpId = "ÀÙç÷¶ùÅÜ11";           a17[9].ContinueFrame = 2;         a17[9].offx =  -2;                         a17[9].offy = -138;
	for (int i = 0; i < 20; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÍÂ\\ar203_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÍÂ\\ar203_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSÍÂ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSÍÂ0",   "BOSSÍÂ0",   0, 0, 386	, 310, 0xffffff);
	go->AddBmp("BOSSÍÂ1",   "BOSSÍÂ1",   0, 0, 401	, 328, 0xffffff);
	go->AddBmp("BOSSÍÂ2",   "BOSSÍÂ2",   0, 0, 351	, 369, 0xffffff);
	go->AddBmp("BOSSÍÂ3",   "BOSSÍÂ3",   0, 0, 330	, 368, 0xffffff);
	go->AddBmp("BOSSÍÂ4",   "BOSSÍÂ4",   0, 0, 336	, 343, 0xffffff);
	go->AddBmp("BOSSÍÂ5",   "BOSSÍÂ5",   0, 0, 320	, 320, 0xffffff);
	go->AddBmp("BOSSÍÂ6",   "BOSSÍÂ6",   0, 0, 348	, 315, 0xffffff);
	go->AddBmp("BOSSÍÂ7",   "BOSSÍÂ7",   0, 0, 353	, 315, 0xffffff);
	go->AddBmp("BOSSÍÂ8",   "BOSSÍÂ8",   0, 0, 363	, 315, 0xffffff);
	go->AddBmp("BOSSÍÂ9",   "BOSSÍÂ9",   0, 0, 392	, 317, 0xffffff);
	go->AddBmp("BOSSÍÂ10", "BOSSÍÂ10", 0, 0, 406	, 378, 0xffffff);
	go->AddBmp("BOSSÍÂ11", "BOSSÍÂ11", 0, 0, 402	, 391, 0xffffff);
	go->AddBmp("BOSSÍÂ12", "BOSSÍÂ12", 0, 0, 392	, 400, 0xffffff);
	go->AddBmp("BOSSÍÂ13", "BOSSÍÂ13", 0, 0, 378	, 368, 0xffffff);
	go->AddBmp("BOSSÍÂ14", "BOSSÍÂ14", 0, 0, 361	, 273, 0xffffff);
	go->AddBmp("BOSSÍÂ15", "BOSSÍÂ15", 0, 0, 352	, 284, 0xffffff);
	go->AddBmp("BOSSÍÂ16", "BOSSÍÂ16", 0, 0, 354	, 334, 0xffffff);
	go->AddBmp("BOSSÍÂ17", "BOSSÍÂ17", 0, 0, 367	, 407, 0xffffff);
	go->AddBmp("BOSSÍÂ18", "BOSSÍÂ18", 0, 0, 374 ,424,  0xffffff);
	go->AddBmp("BOSSÍÂ19", "BOSSÍÂ19", 0, 0, 390, 377 , 0xffffff);
	a18[0].BmpId = "BOSSÍÂ0";                 a18[0].ContinueFrame = 2;             a18[0].offx = 45		;	               a18[0].offy = -139;
	a18[1].BmpId = "BOSSÍÂ1";                 a18[1].ContinueFrame = 2;             a18[1].offx = 32     ;                   a18[1].offy = -145;
	a18[2].BmpId = "BOSSÍÂ2";                 a18[2].ContinueFrame = 2;             a18[2].offx = 29     ;                  a18[2].offy = -166;
	a18[3].BmpId = "BOSSÍÂ3";                 a18[3].ContinueFrame = 2;             a18[3].offx = 4 		;		           a18[3].offy = -165;
	a18[4].BmpId = "BOSSÍÂ4";                 a18[4].ContinueFrame = 2;             a18[4].offx = 11     ;                  a18[4].offy = -153;
	a18[5].BmpId = "BOSSÍÂ5";                 a18[5].ContinueFrame = 2;             a18[5].offx = 11 		;	              a18[5].offy = -142;
	a18[6].BmpId = "BOSSÍÂ6";                 a18[6].ContinueFrame = 2;             a18[6].offx = -9     ;                  a18[6].offy = -142;
	a18[7].BmpId = "BOSSÍÂ7";                 a18[7].ContinueFrame = 2;             a18[7].offx = -8     ;                 a18[7].offy = -143;
	a18[8].BmpId = "BOSSÍÂ8";                 a18[8].ContinueFrame = 2;             a18[8].offx = -17 	;			          a18[8].offy = -143;
	a18[9].BmpId = "BOSSÍÂ9";                 a18[9].ContinueFrame = 2;             a18[9].offx = -23   ;                   a18[9].offy = -148;
	a18[10].BmpId = "BOSSÍÂ10";             a18[10].ContinueFrame = 2;         a18[10].offx = -9		;	               a18[10].offy = -178;
	a18[11].BmpId = "BOSSÍÂ11";             a18[11].ContinueFrame = 2;         a18[11].offx = -1      ;                 a18[11].offy = -185;
	a18[12].BmpId = "BOSSÍÂ12";             a18[12].ContinueFrame = 2;         a18[12].offx = -5      ;                  a18[12].offy = -186;
	a18[13].BmpId = "BOSSÍÂ13";             a18[13].ContinueFrame = 2;         a18[13].offx = 0 		;		          a18[13].offy = -172;
	a18[14].BmpId = "BOSSÍÂ14";             a18[14].ContinueFrame = 2;         a18[14].offx = 29     ;                  a18[14].offy = -126;
	a18[15].BmpId = "BOSSÍÂ15";             a18[15].ContinueFrame = 2;         a18[15].offx = 27 		;	             a18[15].offy = -133;
	a18[16].BmpId = "BOSSÍÂ16";             a18[16].ContinueFrame = 2;         a18[16].offx = 28     ;                  a18[16].offy = -154;
	a18[17].BmpId = "BOSSÍÂ17";             a18[17].ContinueFrame = 2;         a18[17].offx = 19     ;                 a18[17].offy = -187;
	a18[18].BmpId = "BOSSÍÂ18";             a18[18].ContinueFrame = 2;         a18[18].offx = 6 		;		         a18[18].offy = -194;
	a18[19].BmpId = "BOSSÍÂ19";             a18[19].ContinueFrame = 2;         a18[19].offx = 17;                 a18[19].offy = -172;
	for (int i = 1; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÀ¶É«³æ\\vraref233_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÀ¶É«³æ\\vraref233_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSÀ¶É«³æ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSÀ¶É«³æ1",   "BOSSÀ¶É«³æ1", 0, 0,   136,   157, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ2",   "BOSSÀ¶É«³æ2", 0, 0,    95 ,   206, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ3",   "BOSSÀ¶É«³æ3", 0, 0,    83 ,   240, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ4",   "BOSSÀ¶É«³æ4", 0, 0,    129,    228, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ5",   "BOSSÀ¶É«³æ5", 0, 0,    154,    278, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ6",   "BOSSÀ¶É«³æ6", 0, 0,    263,    305, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ7",   "BOSSÀ¶É«³æ7", 0, 0,    266,    328, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ8",   "BOSSÀ¶É«³æ8", 0, 0,    231,    373, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ9",   "BOSSÀ¶É«³æ9", 0, 0,    244,    310, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ10", "BOSSÀ¶É«³æ10", 0, 0,  158,  273, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ11", "BOSSÀ¶É«³æ11", 0, 0,  88 ,  281, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ12", "BOSSÀ¶É«³æ12", 0, 0,  77 ,  275, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ13", "BOSSÀ¶É«³æ13", 0, 0, 76  ,  261, 0xffffff);
	a19[0  ].BmpId =   "BOSSÀ¶É«³æ1";             a19[0  ].ContinueFrame = 2;         a19[0  ].offx = 32;                   a19[1].offy = -145;
	a19[1  ].BmpId =   "BOSSÀ¶É«³æ2";             a19[1  ].ContinueFrame = 2;         a19[1  ].offx = 29;                  a19[2].offy = -166;
	a19[2  ].BmpId =   "BOSSÀ¶É«³æ3";             a19[2  ].ContinueFrame = 2;         a19[2  ].offx = 4;		           a19[3].offy = -165;
	a19[3  ].BmpId =   "BOSSÀ¶É«³æ4";             a19[3  ].ContinueFrame = 2;         a19[3  ].offx = 11;                  a19[4].offy = -153;
	a19[4  ].BmpId =   "BOSSÀ¶É«³æ5";             a19[4  ].ContinueFrame = 2;         a19[4  ].offx = 11;	              a19[5].offy = -142;
	a19[5  ].BmpId =   "BOSSÀ¶É«³æ6";             a19[5  ].ContinueFrame = 2;         a19[5  ].offx = -9;                  a19[6].offy = -142;
	a19[6  ].BmpId =   "BOSSÀ¶É«³æ7";             a19[6  ].ContinueFrame = 2;         a19[6  ].offx = -8;                 a19[7].offy = -143;
	a19[7  ].BmpId =   "BOSSÀ¶É«³æ8";             a19[7  ].ContinueFrame = 2;         a19[7  ].offx = -17;			          a19[8].offy = -143;
	a19[8  ].BmpId =   "BOSSÀ¶É«³æ9";             a19[8  ].ContinueFrame = 2;         a19[8  ].offx = -23;                   a19[9].offy = -148;
	a19[9  ].BmpId = "BOSSÀ¶É«³æ10";             a19[9  ].ContinueFrame = 2;         a19[9  ].offx = -9;	               a19[10].offy = -178;
	a19[10].BmpId = "BOSSÀ¶É«³æ11";             a19[10].ContinueFrame = 2;         a19[10].offx = -1;                 a19[11].offy = -185;
	a19[11].BmpId = "BOSSÀ¶É«³æ12";             a19[11].ContinueFrame = 2;         a19[11].offx = -5;                  a19[12].offy = -186;
	a19[12].BmpId = "BOSSÀ¶É«³æ13";             a19[12].ContinueFrame = 2;         a19[12].offx = 0;		          a19[13].offy = -172;
	for (int i = 2; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\Ä§·¨ÉÙÅ®°×½ðÕ¾\\pt010_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\Ä§·¨ÉÙÅ®°×½ðÕ¾\\pt010_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "Ä§·¨ÉÙÅ®°×½ðÕ¾%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾2", "Ä§·¨ÉÙÅ®°×½ðÕ¾2", 0, 0,     287       , 343		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾3", "Ä§·¨ÉÙÅ®°×½ðÕ¾3", 0, 0,     287       , 344		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾4", "Ä§·¨ÉÙÅ®°×½ðÕ¾4", 0, 0,     287       , 344		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾5", "Ä§·¨ÉÙÅ®°×½ðÕ¾5", 0, 0,     287       , 345		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾6", "Ä§·¨ÉÙÅ®°×½ðÕ¾6", 0, 0,     287       , 344		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾7", "Ä§·¨ÉÙÅ®°×½ðÕ¾7", 0, 0,     287       , 344		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾8", "Ä§·¨ÉÙÅ®°×½ðÕ¾8", 0, 0,     287       , 343		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾9", "Ä§·¨ÉÙÅ®°×½ðÕ¾9", 0, 0,     287       , 343		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾10", "Ä§·¨ÉÙÅ®°×½ðÕ¾10", 0, 0, 287       , 342		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾11", "Ä§·¨ÉÙÅ®°×½ðÕ¾11", 0, 0, 287       , 342		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾12", "Ä§·¨ÉÙÅ®°×½ðÕ¾12", 0, 0, 287       , 343		, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÕ¾13", "Ä§·¨ÉÙÅ®°×½ðÕ¾13", 0, 0, 287       , 343		, 0xffffff);
	a20[0].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾2";               a20[0].ContinueFrame = 2;           a20[0].offx = 32;                     a20   [0 ].offy = -145;
	a20[1].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾3";               a20[1].ContinueFrame = 2;           a20[1].offx = 29;                     a20   [1 ].offy = -166;
	a20[2].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾4";               a20[2].ContinueFrame = 2;           a20[2].offx = 4;		                  a20   [2 ].offy = -165;
	a20[3].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾5";               a20[3].ContinueFrame = 2;           a20[3].offx = 11;                     a20   [3 ].offy = -153;
	a20[4].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾6";               a20[4].ContinueFrame = 2;           a20[4].offx = 11;	                  a20   [4 ].offy = -142;
	a20[5].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾7";               a20[5].ContinueFrame = 2;           a20[5].offx = -9;                      a20   [5 ].offy = -142;
	a20[6].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾8";               a20[6].ContinueFrame = 2;           a20[6].offx = -8;                      a20   [6 ].offy = -143;
	a20[7].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾9";               a20[7].ContinueFrame = 2;           a20[7].offx = -17;			          a20   [7 ].offy = -143;
	a20[8].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾10";             a20[8].ContinueFrame = 2;           a20[8].offx = -23;                    a20   [8 ].offy = -148;
	a20[9].BmpId =   "Ä§·¨ÉÙÅ®°×½ðÕ¾11";             a20[9].ContinueFrame = 2;           a20[9].offx = -9;	                  a20   [9 ].offy = -178;
	a20[10].BmpId = "Ä§·¨ÉÙÅ®°×½ðÕ¾12";             a20[10].ContinueFrame = 2;         a20[10].offx = -1;                    a20   [10 ].offy = -185;
	a20[11].BmpId = "Ä§·¨ÉÙÅ®°×½ðÕ¾13";             a20[11].ContinueFrame = 2;         a20[11].offx = -5;                    a20   [11 ].offy = -186;
	for (int i = 0; i < 5; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\Ä§·¨ÉÙÅ®°×½ðÊÜ\\pt054_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\Ä§·¨ÉÙÅ®°×½ðÕ¾\\pt010_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "Ä§·¨ÉÙÅ®°×½ðÊÜ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÊÜ0", "Ä§·¨ÉÙÅ®°×½ðÊÜ0", 0, 0, 277, 350, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÊÜ1", "Ä§·¨ÉÙÅ®°×½ðÊÜ1", 0, 0, 281, 362, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÊÜ2", "Ä§·¨ÉÙÅ®°×½ðÊÜ2", 0, 0, 267, 360, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÊÜ3", "Ä§·¨ÉÙÅ®°×½ðÊÜ3", 0, 0, 268, 356, 0xffffff);
	go->AddBmp("Ä§·¨ÉÙÅ®°×½ðÊÜ4", "Ä§·¨ÉÙÅ®°×½ðÊÜ4", 0, 0, 278, 353, 0xffffff);

	a21[0].BmpId = "Ä§·¨ÉÙÅ®°×½ðÊÜ0";               a21[0].ContinueFrame = 2;           a21[0].offx = 39;                       a21[0].offy = -116;
	a21[1].BmpId = "Ä§·¨ÉÙÅ®°×½ðÊÜ1";               a21[1].ContinueFrame = 2;           a21[1].offx = 40;                       a21[1].offy = -115;
	a21[2].BmpId = "Ä§·¨ÉÙÅ®°×½ðÊÜ2";               a21[2].ContinueFrame = 2;           a21[2].offx = 45;		                  a21[2].offy = -117;
	a21[3].BmpId = "Ä§·¨ÉÙÅ®°×½ðÊÜ3";               a21[3].ContinueFrame = 2;           a21[3].offx = 51;                       a21[3].offy = -117;
	a21[4].BmpId = "Ä§·¨ÉÙÅ®°×½ðÊÜ4";               a21[4].ContinueFrame = 2;           a21[4].offx = 53;	                      a21[4].offy = -116;
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS´óÕÐÒ»¶Î\\ar611_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS´óÕÐÒ»¶Î\\ar611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS´óÕÐÒ»¶Î%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS´óÕÐÒ»¶Î0", "BOSS´óÕÐÒ»¶Î0", 0,     0, 453,  396, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î1", "BOSS´óÕÐÒ»¶Î1", 0,     0, 548,  433, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î2", "BOSS´óÕÐÒ»¶Î2", 0,     0, 657,  461, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î3", "BOSS´óÕÐÒ»¶Î3", 0,     0, 775,  595, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î4", "BOSS´óÕÐÒ»¶Î4", 0,     0, 868,  578, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î5", "BOSS´óÕÐÒ»¶Î5", 0,     0, 602,  535, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î6", "BOSS´óÕÐÒ»¶Î6", 0,     0, 552,  505, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î7", "BOSS´óÕÐÒ»¶Î7", 0,     0, 512,  465, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î8", "BOSS´óÕÐÒ»¶Î8", 0,     0, 557,  468, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î9", "BOSS´óÕÐÒ»¶Î9", 0,     0, 622,  423, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î10", "BOSS´óÕÐÒ»¶Î10", 0, 0, 759,  444, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î11", "BOSS´óÕÐÒ»¶Î11", 0, 0, 843,  544, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î12", "BOSS´óÕÐÒ»¶Î12", 0, 0, 700,  592, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î13", "BOSS´óÕÐÒ»¶Î13", 0, 0, 659,  540, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î14", "BOSS´óÕÐÒ»¶Î14", 0, 0, 659,  446, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î15", "BOSS´óÕÐÒ»¶Î15", 0, 0, 704,  312, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î16", "BOSS´óÕÐÒ»¶Î16", 0, 0, 667,  261, 0xffffff);
	go->AddBmp("BOSS´óÕÐÒ»¶Î17", "BOSS´óÕÐÒ»¶Î17", 0, 0, 754, 88, 0xffffff);
	a22[0].BmpId = "BOSS´óÕÐÒ»¶Î0";                 a22[0].ContinueFrame = 2;                a22[0].offx = 39;                           a22[0].offy = -116;
	a22[1].BmpId = "BOSS´óÕÐÒ»¶Î1";                 a22[1].ContinueFrame = 2;                a22[1].offx = 40;                           a22[1].offy = -115;
	a22[2].BmpId = "BOSS´óÕÐÒ»¶Î2";                 a22[2].ContinueFrame = 2;                a22[2].offx = 45;		                      a22[2].offy = -117;
	a22[3].BmpId = "BOSS´óÕÐÒ»¶Î3";                 a22[3].ContinueFrame = 2;                a22[3].offx = 51;                           a22[3].offy = -117;
	a22[4].BmpId = "BOSS´óÕÐÒ»¶Î4";                 a22[4].ContinueFrame = 2;                a22[4].offx = 53;	                          a22[4].offy = -116;
	a22[5].BmpId = "BOSS´óÕÐÒ»¶Î5";                 a22[5].ContinueFrame = 2;                a22[5].offx = 39;                           a22[5].offy = -116;
	a22[6].BmpId = "BOSS´óÕÐÒ»¶Î6";                 a22[6].ContinueFrame = 2;                a22[6].offx = 40;                           a22[6].offy = -115;
	a22[7].BmpId = "BOSS´óÕÐÒ»¶Î7";                 a22[7].ContinueFrame = 2;                a22[7].offx = 45;		                      a22[7].offy = -117;
	a22[8].BmpId = "BOSS´óÕÐÒ»¶Î8";                 a22[8].ContinueFrame = 2;                a22[8].offx = 51;                           a22[8].offy = -117;
	a22[9].BmpId = "BOSS´óÕÐÒ»¶Î9";                 a22[9].ContinueFrame = 2;               a22[9].offx = 53;	                          a22[9].offy = -116;
	a22[10].BmpId = "BOSS´óÕÐÒ»¶Î10";               a22[10].ContinueFrame = 2;           a22[10].offx = 39;                           a22[10].offy = -116;
	a22[11].BmpId = "BOSS´óÕÐÒ»¶Î11";               a22[11].ContinueFrame = 2;           a22[11].offx = 40;                           a22[11].offy = -115;
	a22[12].BmpId = "BOSS´óÕÐÒ»¶Î12";               a22[12].ContinueFrame = 2;           a22[12].offx = 45;		                    a22[12].offy = -117;
	a22[13].BmpId = "BOSS´óÕÐÒ»¶Î13";               a22[13].ContinueFrame = 2;           a22[13].offx = 51;                           a22[13].offy = -117;
	a22[14].BmpId = "BOSS´óÕÐÒ»¶Î14";               a22[14].ContinueFrame = 2;           a22[14].offx = 53;	                        a22[14].offy = -116;
	a22[15].BmpId = "BOSS´óÕÐÒ»¶Î15";               a22[15].ContinueFrame = 2;           a22[15].offx = 53;	                        a22[15].offy = -116;
	a22[16].BmpId = "BOSS´óÕÐÒ»¶Î16";               a22[16].ContinueFrame = 2;           a22[16].offx = 53;	                        a22[16].offy = -116;
	a22[17].BmpId = "BOSS´óÕÐÒ»¶Î17";               a22[17].ContinueFrame = 2;           a22[17].offx = 53;	                        a22[17].offy = -116;
	for (int i = 0; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS´óÕÐ¶þ¶Î\\vraref253_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS´óÕÐ¶þ¶Î\\vraref253_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS´óÕÐ¶þ¶Î%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS´óÕÐ¶þ¶Î0",     "BOSS´óÕÐ¶þ¶Î0", 0, 0,		 210		, 55, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î1",     "BOSS´óÕÐ¶þ¶Î1", 0, 0,		 198		, 58, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î2",     "BOSS´óÕÐ¶þ¶Î2", 0, 0,		 200		, 46, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î3",     "BOSS´óÕÐ¶þ¶Î3", 0, 0,		 189		, 176, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î4",     "BOSS´óÕÐ¶þ¶Î4", 0, 0,		 188		, 215, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î5",     "BOSS´óÕÐ¶þ¶Î5", 0, 0,		 240		, 239, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î6",     "BOSS´óÕÐ¶þ¶Î6", 0, 0,		 262		, 254, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î7",     "BOSS´óÕÐ¶þ¶Î7", 0, 0,		 245		, 260, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î8",     "BOSS´óÕÐ¶þ¶Î8", 0, 0,		 224		, 201, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î9",     "BOSS´óÕÐ¶þ¶Î9", 0, 0,		 253		, 158, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î10", "BOSS´óÕÐ¶þ¶Î10", 0, 0,		 246		, 156, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î11", "BOSS´óÕÐ¶þ¶Î11", 0, 0,		 229		, 180, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î12", "BOSS´óÕÐ¶þ¶Î12", 0, 0,		 217		, 124, 0xffffff);
	go->AddBmp("BOSS´óÕÐ¶þ¶Î13", "BOSS´óÕÐ¶þ¶Î13", 0, 0,		 197		, 122, 0xffffff);
	a23[0].BmpId =   "BOSS´óÕÐ¶þ¶Î0";                 a23[0].ContinueFrame = 2;             a23[0].offx = 39;                           a23[0].offy = -116;
	a23[1].BmpId =   "BOSS´óÕÐ¶þ¶Î1";                 a23[1].ContinueFrame = 2;             a23[1].offx = 40;                           a23[1].offy = -115;
	a23[2].BmpId =   "BOSS´óÕÐ¶þ¶Î2";                 a23[2].ContinueFrame = 2;             a23[2].offx = 45;		                      a23[2].offy = -117;
	a23[3].BmpId =   "BOSS´óÕÐ¶þ¶Î3";                 a23[3].ContinueFrame = 2;             a23[3].offx = 51;                           a23[3].offy = -117;
	a23[4].BmpId =   "BOSS´óÕÐ¶þ¶Î4";                 a23[4].ContinueFrame = 2;             a23[4].offx = 53;	                          a23[4].offy = -116;
	a23[5].BmpId =   "BOSS´óÕÐ¶þ¶Î5";                 a23[5].ContinueFrame = 2;             a23[5].offx = 39;                           a23[5].offy = -116;
	a23[6].BmpId =   "BOSS´óÕÐ¶þ¶Î6";                 a23[6].ContinueFrame = 2;             a23[6].offx = 40;                           a23[6].offy = -115;
	a23[7].BmpId =   "BOSS´óÕÐ¶þ¶Î7";                 a23[7].ContinueFrame = 2;             a23[7].offx = 45;		                      a23[7].offy = -117;
	a23[8].BmpId =   "BOSS´óÕÐ¶þ¶Î8";                 a23[8].ContinueFrame = 2;             a23[8].offx = 51;                           a23[8].offy = -117;
	a23[9].BmpId =   "BOSS´óÕÐ¶þ¶Î9";                 a23[9].ContinueFrame = 2;             a23[9].offx = 53;	                          a23[9].offy = -116;
	a23[10].BmpId = "BOSS´óÕÐ¶þ¶Î10";               a23[10].ContinueFrame = 2;           a23[10].offx = 39;                         a23[10].offy = -116;
	a23[11].BmpId = "BOSS´óÕÐ¶þ¶Î11";               a23[11].ContinueFrame = 2;           a23[11].offx = 40;                         a23[11].offy = -115;
	a23[12].BmpId = "BOSS´óÕÐ¶þ¶Î12";               a23[12].ContinueFrame = 2;           a23[12].offx = 45;		                  a23[12].offy = -117;
	a23[13].BmpId = "BOSS´óÕÐ¶þ¶Î13";               a23[13].ContinueFrame = 2;           a23[13].offx = 51;                         a23[13].offy = -117;
	for (int i = 0; i < 19; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÈ¦È¦\\rc234_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÈ¦È¦\\rc234_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùÈ¦È¦%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦0",   "ÀÙç÷¶ùÈ¦È¦0",   0, 0, 320, 247, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦1",   "ÀÙç÷¶ùÈ¦È¦1",   0, 0, 391, 259, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦2",   "ÀÙç÷¶ùÈ¦È¦2",   0, 0, 386, 250, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦3",   "ÀÙç÷¶ùÈ¦È¦3",   0, 0, 327, 254, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦4",   "ÀÙç÷¶ùÈ¦È¦4",   0, 0, 378, 256, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦5",   "ÀÙç÷¶ùÈ¦È¦5",   0, 0, 438, 255, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦6",   "ÀÙç÷¶ùÈ¦È¦6",   0, 0, 499, 258, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦7",   "ÀÙç÷¶ùÈ¦È¦7",   0, 0, 456, 262, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦8",   "ÀÙç÷¶ùÈ¦È¦8",   0, 0, 447, 267, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦9",   "ÀÙç÷¶ùÈ¦È¦9",   0, 0, 472, 258, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦10", "ÀÙç÷¶ùÈ¦È¦10", 0, 0, 540, 258, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦11", "ÀÙç÷¶ùÈ¦È¦11", 0, 0, 461, 263, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦12", "ÀÙç÷¶ùÈ¦È¦12", 0, 0, 474, 269, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦13", "ÀÙç÷¶ùÈ¦È¦13", 0, 0, 457, 259, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦14", "ÀÙç÷¶ùÈ¦È¦14", 0, 0, 553, 258, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦15", "ÀÙç÷¶ùÈ¦È¦15", 0, 0, 501, 260, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦16", "ÀÙç÷¶ùÈ¦È¦16", 0, 0, 400, 261 , 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦17", "ÀÙç÷¶ùÈ¦È¦17", 0, 0, 372, 265, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÈ¦È¦18", "ÀÙç÷¶ùÈ¦È¦18", 0, 0, 369, 265, 0xffffff);
	a24[0].BmpId =   "ÀÙç÷¶ùÈ¦È¦0";                 a24[0].ContinueFrame =  5;             a24[0].offx = 39;									     a24[0].offy = -116;
	a24[1].BmpId =   "ÀÙç÷¶ùÈ¦È¦1";                 a24[1].ContinueFrame =  5;             a24[1].offx = 40;									     a24[1].offy = -115;
	a24[2].BmpId =   "ÀÙç÷¶ùÈ¦È¦2";                 a24[2].ContinueFrame =  5;             a24[2].offx = 45;									     a24[2].offy = -117;
	a24[3].BmpId =   "ÀÙç÷¶ùÈ¦È¦3";                 a24[3].ContinueFrame =  5;             a24[3].offx = 51;									     a24[3].offy = -117;
	a24[4].BmpId =   "ÀÙç÷¶ùÈ¦È¦4";                 a24[4].ContinueFrame =  5;             a24[4].offx = 53;									     a24[4].offy = -116;
	a24[5].BmpId =   "ÀÙç÷¶ùÈ¦È¦5";                 a24[5].ContinueFrame =  5;             a24[5].offx = 39;									     a24[5].offy = -116;
	a24[6].BmpId =   "ÀÙç÷¶ùÈ¦È¦6";                 a24[6].ContinueFrame =  5;             a24[6].offx = 40;									     a24[6].offy = -115;
	a24[7].BmpId =   "ÀÙç÷¶ùÈ¦È¦7";                 a24[7].ContinueFrame =  5;             a24[7].offx = 45;									     a24[7].offy = -117;
	a24[8].BmpId =   "ÀÙç÷¶ùÈ¦È¦8";                 a24[8].ContinueFrame =  5;             a24[8].offx = 51;									     a24[8].offy = -117;
	a24[9].BmpId =   "ÀÙç÷¶ùÈ¦È¦9";                 a24[9].ContinueFrame =  5;             a24[9].offx = 53;									     a24[9].offy = -116;
	a24[10].BmpId = "ÀÙç÷¶ùÈ¦È¦10";               a24[10].ContinueFrame =5;           a24[10].offx = 39;								         a24[10].offy = -116;
	a24[11].BmpId = "ÀÙç÷¶ùÈ¦È¦11";               a24[11].ContinueFrame =5;           a24[11].offx = 40;								         a24[11].offy = -115;
	a24[12].BmpId = "ÀÙç÷¶ùÈ¦È¦12";               a24[12].ContinueFrame =5;           a24[12].offx = 45;								         a24[12].offy = -117;
	a24[13].BmpId = "ÀÙç÷¶ùÈ¦È¦13";               a24[13].ContinueFrame =5;           a24[13].offx = 51;								         a24[13].offy = -117;
	a24[14].BmpId = "ÀÙç÷¶ùÈ¦È¦14";               a24[14].ContinueFrame =5;           a24[14].offx = 51;								         a24[14].offy = -117;
	a24[15].BmpId = "ÀÙç÷¶ùÈ¦È¦15";               a24[15].ContinueFrame =5;           a24[15].offx = 51;								         a24[15].offy = -117;
	a24[16].BmpId = "ÀÙç÷¶ùÈ¦È¦16";               a24[16].ContinueFrame =5;           a24[16].offx = 51;								         a24[16].offy = -117;
	a24[17].BmpId = "ÀÙç÷¶ùÈ¦È¦17";               a24[17].ContinueFrame =5;           a24[17].offx = 51;								         a24[17].offy = -117;
	a24[18].BmpId = "ÀÙç÷¶ùÈ¦È¦18";               a24[18].ContinueFrame =5;           a24[18].offx = 51;								         a24[18].offy = -117;
	for (int i = 0; i < 21; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÓ¡¼Ç\\rc430_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÓ¡¼Ç\\rc430_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùÓ¡¼Ç%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç0",   "ÀÙç÷¶ùÓ¡¼Ç0",   0, 0, 422, 419, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç1",   "ÀÙç÷¶ùÓ¡¼Ç1",   0, 0, 377, 386, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç2",   "ÀÙç÷¶ùÓ¡¼Ç2",   0, 0, 275, 334, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç3",   "ÀÙç÷¶ùÓ¡¼Ç3",   0, 0, 260, 330, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç4",   "ÀÙç÷¶ùÓ¡¼Ç4",   0, 0, 257, 332, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç5",   "ÀÙç÷¶ùÓ¡¼Ç5",   0, 0, 195, 333, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç6",   "ÀÙç÷¶ùÓ¡¼Ç6",   0, 0, 279, 335, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç7",   "ÀÙç÷¶ùÓ¡¼Ç7",   0, 0, 462, 337, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç8",   "ÀÙç÷¶ùÓ¡¼Ç8",   0, 0, 608, 347, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç9",   "ÀÙç÷¶ùÓ¡¼Ç9",   0, 0, 722, 442, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç10", "ÀÙç÷¶ùÓ¡¼Ç10", 0, 0, 640, 397, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç11", "ÀÙç÷¶ùÓ¡¼Ç11", 0, 0, 640, 411, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç12", "ÀÙç÷¶ùÓ¡¼Ç12", 0, 0, 659, 392, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç13", "ÀÙç÷¶ùÓ¡¼Ç13", 0, 0, 651, 572, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç14", "ÀÙç÷¶ùÓ¡¼Ç14", 0, 0, 642, 581, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç15", "ÀÙç÷¶ùÓ¡¼Ç15", 0, 0, 639, 588, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç16", "ÀÙç÷¶ùÓ¡¼Ç16", 0, 0, 660, 583, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç17", "ÀÙç÷¶ùÓ¡¼Ç17", 0, 0, 578, 528, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç18", "ÀÙç÷¶ùÓ¡¼Ç18", 0, 0, 518, 411, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç19", "ÀÙç÷¶ùÓ¡¼Ç19", 0, 0, 471, 403, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÓ¡¼Ç20", "ÀÙç÷¶ùÓ¡¼Ç20", 0, 0, 368, 414, 0xffffff);
	a25[0].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç0";                 a25[0].ContinueFrame = 5;             a25[0].offx = 39;									     a25[0].offy = -116;
	a25[1].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç1";                 a25[1].ContinueFrame = 5;             a25[1].offx = 40;									     a25[1].offy = -115;
	a25[2].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç2";                 a25[2].ContinueFrame = 5;             a25[2].offx = 45;									     a25[2].offy = -117;
	a25[3].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç3";                 a25[3].ContinueFrame = 5;             a25[3].offx = 51;									     a25[3].offy = -117;
	a25[4].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç4";                 a25[4].ContinueFrame = 5;             a25[4].offx = 53;									     a25[4].offy = -116;
	a25[5].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç5";                 a25[5].ContinueFrame = 5;             a25[5].offx = 39;									     a25[5].offy = -116;
	a25[6].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç6";                 a25[6].ContinueFrame = 5;             a25[6].offx = 40;									     a25[6].offy = -115;
	a25[7].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç7";                 a25[7].ContinueFrame = 5;             a25[7].offx = 45;									     a25[7].offy = -117;
	a25[8].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç8";                 a25[8].ContinueFrame = 5;             a25[8].offx = 51;									     a25[8].offy = -117;
	a25[9].BmpId =   "ÀÙç÷¶ùÓ¡¼Ç9";                 a25[9].ContinueFrame = 5;             a25[9].offx = 53;									     a25[9].offy = -116;
	a25[10].BmpId = "ÀÙç÷¶ùÓ¡¼Ç10";               a25[10].ContinueFrame = 5;           a25[10].offx = 39;								         a25[10].offy = -116;
	a25[11].BmpId = "ÀÙç÷¶ùÓ¡¼Ç11";               a25[11].ContinueFrame = 5;           a25[11].offx = 40;								         a25[11].offy = -115;
	a25[12].BmpId = "ÀÙç÷¶ùÓ¡¼Ç12";               a25[12].ContinueFrame = 5;           a25[12].offx = 45;								         a25[12].offy = -117;
	a25[13].BmpId = "ÀÙç÷¶ùÓ¡¼Ç13";               a25[13].ContinueFrame = 5;           a25[13].offx = 51;								         a25[13].offy = -117;
	a25[14].BmpId = "ÀÙç÷¶ùÓ¡¼Ç14";               a25[14].ContinueFrame = 5;           a25[14].offx = 51;								         a25[14].offy = -117;
	a25[15].BmpId = "ÀÙç÷¶ùÓ¡¼Ç15";               a25[15].ContinueFrame = 5;           a25[15].offx = 51;								         a25[15].offy = -117;
	a25[16].BmpId = "ÀÙç÷¶ùÓ¡¼Ç16";               a25[16].ContinueFrame = 5;           a25[16].offx = 51;								         a25[16].offy = -117;
	a25[17].BmpId = "ÀÙç÷¶ùÓ¡¼Ç17";               a25[17].ContinueFrame = 5;           a25[17].offx = 51;								         a25[17].offy = -117;
	a25[18].BmpId = "ÀÙç÷¶ùÓ¡¼Ç18";               a25[18].ContinueFrame = 5;           a25[18].offx = 51;								         a25[18].offy = -117;
	a25[19].BmpId = "ÀÙç÷¶ùÓ¡¼Ç19";               a25[19].ContinueFrame = 5;           a25[19].offx = 51;								         a25[19].offy = -117;
	a25[20].BmpId = "ÀÙç÷¶ùÓ¡¼Ç20";               a25[20].ContinueFrame = 5;           a25[20].offx = 51;								         a25[20].offy = -117;
	for (int i = 0; i < 16; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÅ£°¡\\rc432_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÅ£°¡\\rc432_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùÅ£°¡%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}

	go->AddBmp("ÀÙç÷¶ùÅ£°¡0", "ÀÙç÷¶ùÅ£°¡0", 0, 0, 319, 400, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡1", "ÀÙç÷¶ùÅ£°¡1", 0, 0, 333, 365, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡2", "ÀÙç÷¶ùÅ£°¡2", 0, 0, 328, 333, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡3", "ÀÙç÷¶ùÅ£°¡3", 0, 0, 311, 341, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡4", "ÀÙç÷¶ùÅ£°¡4", 0, 0, 262, 354, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡5", "ÀÙç÷¶ùÅ£°¡5", 0, 0, 243, 337, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡6", "ÀÙç÷¶ùÅ£°¡6", 0, 0, 221, 330, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡7", "ÀÙç÷¶ùÅ£°¡7", 0, 0, 189, 322, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡8", "ÀÙç÷¶ùÅ£°¡8", 0, 0, 286, 335, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡9", "ÀÙç÷¶ùÅ£°¡9", 0, 0, 319, 346, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡10", "ÀÙç÷¶ùÅ£°¡10", 0, 0, 332, 327, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡11", "ÀÙç÷¶ùÅ£°¡11", 0, 0, 301, 347, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡12", "ÀÙç÷¶ùÅ£°¡12", 0, 0, 361, 337, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡13", "ÀÙç÷¶ùÅ£°¡13", 0, 0, 297, 405, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡14", "ÀÙç÷¶ùÅ£°¡14", 0, 0, 331, 409, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡15", "ÀÙç÷¶ùÅ£°¡15", 0, 0, 296, 410, 0xffffff);
	a26[0].BmpId =   "ÀÙç÷¶ùÅ£°¡0";                 a26[0].ContinueFrame = 5;             a26[0].offx = 39;									     a26[0].offy = -116;
	a26[1].BmpId =   "ÀÙç÷¶ùÅ£°¡1";                 a26[1].ContinueFrame = 5;             a26[1].offx = 40;									     a26[1].offy = -115;
	a26[2].BmpId =   "ÀÙç÷¶ùÅ£°¡2";                 a26[2].ContinueFrame = 5;             a26[2].offx = 45;									     a26[2].offy = -117;
	a26[3].BmpId =   "ÀÙç÷¶ùÅ£°¡3";                 a26[3].ContinueFrame = 5;             a26[3].offx = 51;									     a26[3].offy = -117;
	a26[4].BmpId =   "ÀÙç÷¶ùÅ£°¡4";                 a26[4].ContinueFrame = 5;             a26[4].offx = 53;									     a26[4].offy = -116;
	a26[5].BmpId =   "ÀÙç÷¶ùÅ£°¡5";                 a26[5].ContinueFrame = 5;             a26[5].offx = 39;									     a26[5].offy = -116;
	a26[6].BmpId =   "ÀÙç÷¶ùÅ£°¡6";                 a26[6].ContinueFrame = 5;             a26[6].offx = 40;									     a26[6].offy = -115;
	a26[7].BmpId =   "ÀÙç÷¶ùÅ£°¡7";                 a26[7].ContinueFrame = 5;             a26[7].offx = 45;									     a26[7].offy = -117;
	a26[8].BmpId =   "ÀÙç÷¶ùÅ£°¡8";                 a26[8].ContinueFrame = 5;             a26[8].offx = 51;									     a26[8].offy = -117;
	a26[9].BmpId =   "ÀÙç÷¶ùÅ£°¡9";                 a26[9].ContinueFrame = 5;             a26[9].offx = 53;									     a26[9].offy = -116;
	a26[10].BmpId = "ÀÙç÷¶ùÅ£°¡10";               a26[10].ContinueFrame = 5;           a26[10].offx = 39;								         a26[10].offy = -116;
	a26[11].BmpId = "ÀÙç÷¶ùÅ£°¡11";               a26[11].ContinueFrame = 5;           a26[11].offx = 40;								         a26[11].offy = -115;
	a26[12].BmpId = "ÀÙç÷¶ùÅ£°¡12";               a26[12].ContinueFrame = 5;           a26[12].offx = 45;								         a26[12].offy = -117;
	a26[13].BmpId = "ÀÙç÷¶ùÅ£°¡13";               a26[13].ContinueFrame = 5;           a26[13].offx = 51;								         a26[13].offy = -117;
	a26[14].BmpId = "ÀÙç÷¶ùÅ£°¡14";               a26[14].ContinueFrame = 5;           a26[14].offx = 51;								         a26[14].offy = -117;
	a26[15].BmpId = "ÀÙç÷¶ùÅ£°¡15";               a26[15].ContinueFrame = 5;           a26[15].offx = 51;								         a26[15].offy = -117;
	for (int i = 0; i < 4; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÅ£°¡\\vrrcef_stmB0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÅ£°¡\\vrrcef_stmB%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùÅ£%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùÅ£0", "ÀÙç÷¶ùÅ£0", 0, 0, 386, 257, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£1", "ÀÙç÷¶ùÅ£1", 0, 0, 415, 262, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£2", "ÀÙç÷¶ùÅ£2", 0, 0, 440, 250, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£3", "ÀÙç÷¶ùÅ£3", 0, 0, 421, 259, 0xffffff);

	a27[0].BmpId = "ÀÙç÷¶ùÅ£0";                 a27[0].ContinueFrame = 5;             a27[0].offx = 39;									     a27[0].offy = -116;
	a27[1].BmpId = "ÀÙç÷¶ùÅ£1";                 a27[1].ContinueFrame = 5;             a27[1].offx = 40;									     a27[1].offy = -115;
	a27[2].BmpId = "ÀÙç÷¶ùÅ£2";                 a27[2].ContinueFrame = 5;             a27[2].offx = 45;									     a27[2].offy = -117;
	a27[3].BmpId = "ÀÙç÷¶ùÅ£3";                 a27[3].ContinueFrame = 5;             a27[3].offx = 51;									     a27[3].offy = -117;
	for (int i = 0; i < 19; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùµç\\rc406_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùµç\\rc406_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùµç%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùµç0", "ÀÙç÷¶ùµç0",     0, 0, 269, 364, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç1", "ÀÙç÷¶ùµç1",     0, 0, 238, 360, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç2", "ÀÙç÷¶ùµç2",     0, 0, 250, 382, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç3", "ÀÙç÷¶ùµç3",     0, 0, 328, 381, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç4", "ÀÙç÷¶ùµç4",     0, 0, 308, 375, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç5", "ÀÙç÷¶ùµç5",     0, 0, 249, 346, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç6", "ÀÙç÷¶ùµç6",     0, 0, 216, 341, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç7", "ÀÙç÷¶ùµç7",     0, 0, 260, 358, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç8", "ÀÙç÷¶ùµç8",     0, 0, 298, 376, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç9", "ÀÙç÷¶ùµç9",     0, 0, 327, 392, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç10", "ÀÙç÷¶ùµç10", 0, 0, 380, 382, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç11", "ÀÙç÷¶ùµç11", 0, 0, 428, 383, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç12", "ÀÙç÷¶ùµç12", 0, 0, 423, 387, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç13", "ÀÙç÷¶ùµç13", 0, 0, 343, 393, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç14", "ÀÙç÷¶ùµç14", 0, 0, 285, 383, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç15", "ÀÙç÷¶ùµç15", 0, 0, 280, 373, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç16", "ÀÙç÷¶ùµç16", 0, 0, 263, 378, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç17", "ÀÙç÷¶ùµç17", 0, 0, 288, 372, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç18", "ÀÙç÷¶ùµç18", 0, 0, 316, 373, 0xffffff);
	a28[0].BmpId = "ÀÙç÷¶ùµç0";                   a28[0].ContinueFrame = 5;             a28[0].offx = 39;									     a28[0].offy = -116;
	a28[1].BmpId = "ÀÙç÷¶ùµç1";                   a28[1].ContinueFrame = 5;             a28[1].offx = 40;									     a28[1].offy = -115;
	a28[2].BmpId = "ÀÙç÷¶ùµç2";                   a28[2].ContinueFrame = 5;             a28[2].offx = 45;									     a28[2].offy = -117;
	a28[3].BmpId = "ÀÙç÷¶ùµç3";                   a28[3].ContinueFrame = 5;             a28[3].offx = 51;									     a28[3].offy = -117;
	a28[4].BmpId = "ÀÙç÷¶ùµç4";                   a28[0].ContinueFrame = 5;             a28[4].offx = 39;									     a28[4].offy = -116;
	a28[5].BmpId = "ÀÙç÷¶ùµç5";                   a28[1].ContinueFrame = 5;             a28[5].offx = 40;									     a28[5].offy = -115;
	a28[6].BmpId = "ÀÙç÷¶ùµç6";                   a28[2].ContinueFrame = 5;             a28[6].offx = 45;									     a28[6].offy = -117;
	a28[7].BmpId = "ÀÙç÷¶ùµç7";                   a28[3].ContinueFrame = 5;             a28[7].offx = 51;									     a28[7].offy = -117;
	a28[8].BmpId = "ÀÙç÷¶ùµç8";                   a28[0].ContinueFrame = 5;             a28[8].offx = 39;									     a28[8].offy = -116;
	a28[9].BmpId = "ÀÙç÷¶ùµç9";                   a28[1].ContinueFrame = 5;             a28[9].offx = 40;									     a28[9].offy = -115;
	a28[10].BmpId = "ÀÙç÷¶ùµç10";                 a28[2].ContinueFrame = 5;             a28[10].offx = 45;									     a28[10].offy = -117;
	a28[11].BmpId = "ÀÙç÷¶ùµç11";                 a28[3].ContinueFrame = 5;             a28[11].offx = 51;									     a28[11].offy = -117;
	a28[12].BmpId = "ÀÙç÷¶ùµç12";                 a28[0].ContinueFrame = 5;             a28[12].offx = 39;									     a28[12].offy = -116;
	a28[13].BmpId = "ÀÙç÷¶ùµç13";                 a28[1].ContinueFrame = 5;             a28[13].offx = 40;									     a28[13].offy = -115;
	a28[14].BmpId = "ÀÙç÷¶ùµç14";                 a28[2].ContinueFrame = 5;             a28[14].offx = 45;									     a28[14].offy = -117;
	a28[15].BmpId = "ÀÙç÷¶ùµç15";                 a28[3].ContinueFrame = 5;             a28[15].offx = 51;									     a28[15].offy = -117;
	a28[16].BmpId = "ÀÙç÷¶ùµç16";                 a28[3].ContinueFrame = 5;             a28[16].offx = 51;									     a28[16].offy = -117;
	a28[17].BmpId = "ÀÙç÷¶ùµç17";                 a28[3].ContinueFrame = 5;             a28[17].offx = 51;									     a28[17].offy = -117;
	a28[18].BmpId = "ÀÙç÷¶ùµç18";                 a28[3].ContinueFrame = 5;             a28[18].offx = 51;									     a28[18].offy = -117;
	for (int i = 0; i < 13; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹þ\\rc001_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹þ\\rc001_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ù¹þ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ù¹þ0",   "ÀÙç÷¶ù¹þ0", 0, 0,   233, 413, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ1",   "ÀÙç÷¶ù¹þ1", 0, 0,   242, 442, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ2",   "ÀÙç÷¶ù¹þ2", 0, 0,   257, 472, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ3",   "ÀÙç÷¶ù¹þ3", 0, 0,   310, 481, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ4",   "ÀÙç÷¶ù¹þ4", 0, 0,   381, 490, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ5",   "ÀÙç÷¶ù¹þ5", 0, 0,   409, 435, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ6",   "ÀÙç÷¶ù¹þ6", 0, 0,   495, 430, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ7",   "ÀÙç÷¶ù¹þ7", 0, 0,   353, 414, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ8",   "ÀÙç÷¶ù¹þ8", 0, 0,   342, 406, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ9",   "ÀÙç÷¶ù¹þ9", 0, 0,   280, 404, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ10", "ÀÙç÷¶ù¹þ10", 0, 0, 266, 402, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ11", "ÀÙç÷¶ù¹þ11", 0, 0, 251, 402, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ12", "ÀÙç÷¶ù¹þ12", 0, 0, 245, 403, 0xffffff);
	a29[0].BmpId =   "ÀÙç÷¶ù¹þ0";                   a29[0].ContinueFrame = 5;               a29[0].offx = 39;									          a29[0].offy = -116;
	a29[1].BmpId =   "ÀÙç÷¶ù¹þ1";                   a29[1].ContinueFrame = 5;               a29[1].offx = 40;									          a29[1].offy = -115;
	a29[2].BmpId =   "ÀÙç÷¶ù¹þ2";                   a29[2].ContinueFrame = 5;               a29[2].offx = 45;									          a29[2].offy = -117;
	a29[3].BmpId =   "ÀÙç÷¶ù¹þ3";                   a29[3].ContinueFrame = 5;               a29[3].offx = 51;									          a29[3].offy = -117;
	a29[4].BmpId =   "ÀÙç÷¶ù¹þ4";                   a29[4].ContinueFrame = 5;               a29[4].offx = 39;									          a29[4].offy = -116;
	a29[5].BmpId =   "ÀÙç÷¶ù¹þ5";                   a29[5].ContinueFrame = 5;               a29[5].offx = 40;									          a29[5].offy = -115;
	a29[6].BmpId =   "ÀÙç÷¶ù¹þ6";                   a29[6].ContinueFrame = 5;               a29[6].offx = 45;									          a29[6].offy = -117;
	a29[7].BmpId =   "ÀÙç÷¶ù¹þ7";                   a29[7].ContinueFrame = 5;               a29[7].offx = 51;									          a29[7].offy = -117;
	a29[8].BmpId =   "ÀÙç÷¶ù¹þ8";                   a29[8].ContinueFrame = 5;               a29[8].offx = 39;									          a29[8].offy = -116;
	a29[9].BmpId =   "ÀÙç÷¶ù¹þ9";                   a29[9].ContinueFrame = 5;               a29[9].offx = 40;									          a29[9].offy = -115;
	a29[10].BmpId = "ÀÙç÷¶ù¹þ10";                 a29[10].ContinueFrame = 5;             a29[10].offx = 45;									     a29[10].offy = -117;
	a29[11].BmpId = "ÀÙç÷¶ù¹þ11";                 a29[11].ContinueFrame = 5;             a29[11].offx = 51;									     a29[11].offy = -117;
	a29[12].BmpId = "ÀÙç÷¶ù¹þ12";                 a29[12].ContinueFrame = 5;             a29[12].offx = 39;									     a29[12].offy = -116;
	for (int i = 0; i < 15; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹¥ÍÁ\\rc212_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹¥ÍÁ\\rc212_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ù¹¥ÍÁ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ0",   "ÀÙç÷¶ù¹¥ÍÁ0", 0, 0,   321,  400, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ1",   "ÀÙç÷¶ù¹¥ÍÁ1", 0, 0,   352,  377, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ2",   "ÀÙç÷¶ù¹¥ÍÁ2", 0, 0,   407,  437, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ3",   "ÀÙç÷¶ù¹¥ÍÁ3", 0, 0,   465,  391, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ4",   "ÀÙç÷¶ù¹¥ÍÁ4", 0, 0,   389,  417, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ5",   "ÀÙç÷¶ù¹¥ÍÁ5", 0, 0,   370,  413, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ6",   "ÀÙç÷¶ù¹¥ÍÁ6", 0, 0,   355,  393, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ7",   "ÀÙç÷¶ù¹¥ÍÁ7", 0, 0,   370,  395, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ8",   "ÀÙç÷¶ù¹¥ÍÁ8", 0, 0,   418,  432, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ9",   "ÀÙç÷¶ù¹¥ÍÁ9", 0, 0,   439,  380, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ10", "ÀÙç÷¶ù¹¥ÍÁ10", 0, 0, 457,378, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ11", "ÀÙç÷¶ù¹¥ÍÁ11", 0, 0, 466,374, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ12", "ÀÙç÷¶ù¹¥ÍÁ12", 0, 0, 395,375, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ13", "ÀÙç÷¶ù¹¥ÍÁ13", 0, 0, 349,382, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ14", "ÀÙç÷¶ù¹¥ÍÁ14", 0, 0, 335,403, 0xffffff);
	a30[0].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ0";                   a30[0].ContinueFrame = 5;               a30[0].offx = 39;									     a30[0].offy = -116;
	a30[1].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ1";                   a30[1].ContinueFrame = 5;               a30[1].offx = 40;									     a30[1].offy = -115;
	a30[2].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ2";                   a30[2].ContinueFrame = 5;               a30[2].offx = 45;									     a30[2].offy = -117;
	a30[3].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ3";                   a30[3].ContinueFrame = 5;               a30[3].offx = 51;									     a30[3].offy = -117;
	a30[4].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ4";                   a30[4].ContinueFrame = 5;               a30[4].offx = 39;									     a30[4].offy = -116;
	a30[5].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ5";                   a30[5].ContinueFrame = 5;               a30[5].offx = 40;									     a30[5].offy = -115;
	a30[6].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ6";                   a30[6].ContinueFrame = 5;               a30[6].offx = 45;									     a30[6].offy = -117;
	a30[7].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ7";                   a30[7].ContinueFrame = 5;               a30[7].offx = 51;									     a30[7].offy = -117;
	a30[8].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ8";                   a30[8].ContinueFrame = 5;               a30[8].offx = 39;									     a30[8].offy = -116;
	a30[9].BmpId =   "ÀÙç÷¶ù¹¥ÍÁ9";                   a30[9].ContinueFrame = 5;               a30[9].offx = 40;									     a30[9].offy = -115;
	a30[10].BmpId = "ÀÙç÷¶ù¹¥ÍÁ10";                 a30[10].ContinueFrame = 5;             a30[10].offx = 45;									     a30[10].offy = -117;
	a30[11].BmpId = "ÀÙç÷¶ù¹¥ÍÁ11";                 a30[11].ContinueFrame = 5;             a30[11].offx = 51;									     a30[11].offy = -117;
	a30[12].BmpId = "ÀÙç÷¶ù¹¥ÍÁ12";                 a30[12].ContinueFrame = 5;             a30[12].offx = 39;									     a30[12].offy = -116;
	a30[13].BmpId = "ÀÙç÷¶ù¹¥ÍÁ13";                 a30[13].ContinueFrame = 5;             a30[13].offx = 39;									     a30[13].offy = -116;
	a30[14].BmpId = "ÀÙç÷¶ù¹¥ÍÁ14";                 a30[14].ContinueFrame = 5;             a30[14].offx = 39;									     a30[14].offy = -116;
	for (int i = 0; i < 17; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹¥Ë®\\rc213_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹¥Ë®\\rc213_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ù¹¥Ë®%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®0",   "ÀÙç÷¶ù¹¥Ë®0", 0, 0,  305,   405, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®1",   "ÀÙç÷¶ù¹¥Ë®1", 0, 0,  365,   396, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®2",   "ÀÙç÷¶ù¹¥Ë®2", 0, 0,  413,   383, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®3",   "ÀÙç÷¶ù¹¥Ë®3", 0, 0,  393,   364, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®4",   "ÀÙç÷¶ù¹¥Ë®4", 0, 0,  355,   365, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®5",   "ÀÙç÷¶ù¹¥Ë®5", 0, 0,  318,   348, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®6",   "ÀÙç÷¶ù¹¥Ë®6", 0, 0,  255,   348, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®7",   "ÀÙç÷¶ù¹¥Ë®7", 0, 0,  256,   354, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®8",   "ÀÙç÷¶ù¹¥Ë®8", 0, 0,  250,   365, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®9",   "ÀÙç÷¶ù¹¥Ë®9", 0, 0,  330,   365, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®10", "ÀÙç÷¶ù¹¥Ë®10", 0, 0,428, 404, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®11", "ÀÙç÷¶ù¹¥Ë®11", 0, 0,471, 379, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®12", "ÀÙç÷¶ù¹¥Ë®12", 0, 0,453, 382, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®13", "ÀÙç÷¶ù¹¥Ë®13", 0, 0, 444, 374, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®14", "ÀÙç÷¶ù¹¥Ë®14", 0, 0, 361, 396, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®15", "ÀÙç÷¶ù¹¥Ë®15", 0, 0, 328, 406, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥Ë®16", "ÀÙç÷¶ù¹¥Ë®16", 0, 0,289, 407, 0xffffff);
	a31[0].BmpId =   "ÀÙç÷¶ù¹¥Ë®0";                   a31[0].ContinueFrame = 5;               a31[0].offx = 39;									     a31[0].offy = -116;
	a31[1].BmpId =   "ÀÙç÷¶ù¹¥Ë®1";                   a31[1].ContinueFrame = 5;               a31[1].offx = 40;									     a31[1].offy = -115;
	a31[2].BmpId =   "ÀÙç÷¶ù¹¥Ë®2";                   a31[2].ContinueFrame = 5;               a31[2].offx = 45;									     a31[2].offy = -117;
	a31[3].BmpId =   "ÀÙç÷¶ù¹¥Ë®3";                   a31[3].ContinueFrame = 5;               a31[3].offx = 51;									     a31[3].offy = -117;
	a31[4].BmpId =   "ÀÙç÷¶ù¹¥Ë®4";                   a31[4].ContinueFrame = 5;               a31[4].offx = 39;									     a31[4].offy = -116;
	a31[5].BmpId =   "ÀÙç÷¶ù¹¥Ë®5";                   a31[5].ContinueFrame = 5;               a31[5].offx = 40;									     a31[5].offy = -115;
	a31[6].BmpId =   "ÀÙç÷¶ù¹¥Ë®6";                   a31[6].ContinueFrame = 5;               a31[6].offx = 45;									     a31[6].offy = -117;
	a31[7].BmpId =   "ÀÙç÷¶ù¹¥Ë®7";                   a31[7].ContinueFrame = 5;               a31[7].offx = 51;									     a31[7].offy = -117;
	a31[8].BmpId =   "ÀÙç÷¶ù¹¥Ë®8";                   a31[8].ContinueFrame = 5;               a31[8].offx = 39;									     a31[8].offy = -116;
	a31[9].BmpId =   "ÀÙç÷¶ù¹¥Ë®9";                   a31[9].ContinueFrame = 5;               a31[9].offx = 40;									     a31[9].offy = -115;
	a31[10].BmpId = "ÀÙç÷¶ù¹¥Ë®10";                 a31[10].ContinueFrame = 5;             a31[10].offx = 45;									     a31[10].offy = -117;
	a31[11].BmpId = "ÀÙç÷¶ù¹¥Ë®11";                 a31[11].ContinueFrame = 5;             a31[11].offx = 51;									     a31[11].offy = -117;
	a31[12].BmpId = "ÀÙç÷¶ù¹¥Ë®12";                 a31[12].ContinueFrame = 5;             a31[12].offx = 39;									     a31[12].offy = -116;
	a31[13].BmpId = "ÀÙç÷¶ù¹¥Ë®13";                 a31[13].ContinueFrame = 5;             a31[13].offx = 39;									     a31[13].offy = -116;
	a31[14].BmpId = "ÀÙç÷¶ù¹¥Ë®14";                 a31[14].ContinueFrame = 5;             a31[14].offx = 39;									     a31[14].offy = -116;
	a31[15].BmpId = "ÀÙç÷¶ù¹¥Ë®15";                 a31[15].ContinueFrame = 5;             a31[15].offx = 39;									     a31[15].offy = -116;
	a31[16].BmpId = "ÀÙç÷¶ù¹¥Ë®16";                 a31[16].ContinueFrame = 5;             a31[16].offx = 39;									     a31[16].offy = -116;
	for (int i = 0; i < 10; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSËÀ\\ar620_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹¥Ë®\\ar620_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSËÀ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSËÀ0", "BOSSËÀ0", 0, 0, 284, 397, 0xffffff);
	go->AddBmp("BOSSËÀ1", "BOSSËÀ1", 0, 0, 204, 416, 0xffffff);
	go->AddBmp("BOSSËÀ2", "BOSSËÀ2", 0, 0, 189, 456, 0xffffff);
	go->AddBmp("BOSSËÀ3", "BOSSËÀ3", 0, 0, 182, 459, 0xffffff);
	go->AddBmp("BOSSËÀ4", "BOSSËÀ4", 0, 0, 182, 460, 0xffffff);
	go->AddBmp("BOSSËÀ5", "BOSSËÀ5", 0, 0, 223, 455, 0xffffff);
	go->AddBmp("BOSSËÀ6", "BOSSËÀ6", 0, 0, 249, 454, 0xffffff);
	go->AddBmp("BOSSËÀ7", "BOSSËÀ7", 0, 0, 444, 395, 0xffffff);
	go->AddBmp("BOSSËÀ8", "BOSSËÀ8", 0, 0, 497, 154, 0xffffff);
	go->AddBmp("BOSSËÀ9", "BOSSËÀ9", 0, 0, 496, 174, 0xffffff);
	a32[0].BmpId = "BOSSËÀ0";                   a32[0].ContinueFrame = 5;               a32[0].offx = 39;									     a32[0].offy = -116;
	a32[1].BmpId = "BOSSËÀ1";                   a32[1].ContinueFrame = 5;               a32[1].offx = 40;									     a32[1].offy = -115;
	a32[2].BmpId = "BOSSËÀ2";                   a32[2].ContinueFrame = 5;               a32[2].offx = 45;									     a32[2].offy = -117;
	a32[3].BmpId = "BOSSËÀ3";                   a32[3].ContinueFrame = 5;               a32[3].offx = 51;									     a32[3].offy = -117;
	a32[4].BmpId = "BOSSËÀ4";                   a32[4].ContinueFrame = 5;               a32[4].offx = 39;									     a32[4].offy = -116;
	a32[5].BmpId = "BOSSËÀ5";                   a32[5].ContinueFrame = 5;               a32[5].offx = 40;									     a32[5].offy = -115;
	a32[6].BmpId = "BOSSËÀ6";                   a32[6].ContinueFrame = 5;               a32[6].offx = 45;									     a32[6].offy = -117;
	a32[7].BmpId = "BOSSËÀ7";                   a32[7].ContinueFrame = 5;               a32[7].offx = 51;									     a32[7].offy = -117;
	a32[8].BmpId = "BOSSËÀ8";                   a32[8].ContinueFrame = 5;               a32[8].offx = 39;									     a32[8].offy = -116;
	a32[9].BmpId = "BOSSËÀ9";                   a32[9].ContinueFrame = 5;               a32[9].offx = 40;									     a32[9].offy = -115;
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùPOS\\rc611_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùPOS\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùPOS%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùPOS0",   "ÀÙç÷¶ùPOS0",   0, 0, 436, 423, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS1",   "ÀÙç÷¶ùPOS1",   0, 0, 395, 384, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS2",   "ÀÙç÷¶ùPOS2",   0, 0, 367, 354, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS3",   "ÀÙç÷¶ùPOS3",   0, 0, 269, 341, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS4",   "ÀÙç÷¶ùPOS4",   0, 0, 232, 342, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS5",   "ÀÙç÷¶ùPOS5",   0, 0, 211, 342, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS6",   "ÀÙç÷¶ùPOS6",   0, 0, 242, 341, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS7",   "ÀÙç÷¶ùPOS7",   0, 0, 415, 338, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS8",   "ÀÙç÷¶ùPOS8",   0, 0, 441, 335, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS9",   "ÀÙç÷¶ùPOS9",   0, 0, 378, 340, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS10", "ÀÙç÷¶ùPOS10", 0, 0, 277, 325, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS11", "ÀÙç÷¶ùPOS11", 0, 0, 408, 333, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS12", "ÀÙç÷¶ùPOS12", 0, 0, 404, 340, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS13", "ÀÙç÷¶ùPOS13", 0, 0, 401, 344, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS14", "ÀÙç÷¶ùPOS14", 0, 0, 391, 338, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS15", "ÀÙç÷¶ùPOS15", 0, 0, 386, 335, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS16", "ÀÙç÷¶ùPOS16", 0, 0, 381, 330, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS17", "ÀÙç÷¶ùPOS17", 0, 0, 378, 329, 0xffffff);
	a33[0].BmpId =   "ÀÙç÷¶ùPOS0";                   a33[0].ContinueFrame = 5;					 a33[0].offx = 39;									     a33[0].offy = -116;
	a33[1].BmpId =   "ÀÙç÷¶ùPOS1";                   a33[1].ContinueFrame = 5;					 a33[1].offx = 40;									     a33[1].offy = -115;
	a33[2].BmpId =   "ÀÙç÷¶ùPOS2";                   a33[2].ContinueFrame = 5;					 a33[2].offx = 45;									     a33[2].offy = -117;
	a33[3].BmpId =   "ÀÙç÷¶ùPOS3";                   a33[3].ContinueFrame = 5;					 a33[3].offx = 51;									     a33[3].offy = -117;
	a33[4].BmpId =   "ÀÙç÷¶ùPOS4";                   a33[4].ContinueFrame = 5;					 a33[4].offx = 39;									     a33[4].offy = -116;
	a33[5].BmpId =   "ÀÙç÷¶ùPOS5";                   a33[5].ContinueFrame = 5;					 a33[5].offx = 40;									     a33[5].offy = -115;
	a33[6].BmpId =   "ÀÙç÷¶ùPOS6";                   a33[6].ContinueFrame = 5;					 a33[6].offx = 45;									     a33[6].offy = -117;
	a33[7].BmpId =   "ÀÙç÷¶ùPOS7";                   a33[7].ContinueFrame = 5;					 a33[7].offx = 51;									     a33[7].offy = -117;
	a33[8].BmpId =   "ÀÙç÷¶ùPOS8";                   a33[8].ContinueFrame = 5;					 a33[8].offx = 39;									     a33[8].offy = -116;
	a33[9].BmpId =   "ÀÙç÷¶ùPOS9";                   a33[9].ContinueFrame = 5;					 a33[9].offx = 40;									     a33[9].offy = -115;
	a33[10].BmpId = "ÀÙç÷¶ùPOS10";                   a33[10].ContinueFrame = 5;               a33[10].offx = 40;									     a33[10].offy = -115;
	a33[11].BmpId = "ÀÙç÷¶ùPOS11";                   a33[11].ContinueFrame = 5;               a33[11].offx = 40;									     a33[11].offy = -115;
	a33[12].BmpId = "ÀÙç÷¶ùPOS12";                   a33[12].ContinueFrame = 5;               a33[12].offx = 40;									     a33[12].offy = -115;
	a33[13].BmpId = "ÀÙç÷¶ùPOS13";                   a33[13].ContinueFrame = 5;               a33[13].offx = 40;									     a33[13].offy = -115;
	a33[14].BmpId = "ÀÙç÷¶ùPOS14";                   a33[14].ContinueFrame = 5;               a33[14].offx = 40;									     a33[14].offy = -115;
	a33[15].BmpId = "ÀÙç÷¶ùPOS15";                   a33[15].ContinueFrame = 5;               a33[15].offx = 40;									     a33[15].offy = -115;
	a33[16].BmpId = "ÀÙç÷¶ùPOS16";                   a33[16].ContinueFrame = 5;               a33[16].offx = 40;									     a33[16].offy = -115;
	a33[17].BmpId = "ÀÙç÷¶ùPOS17";                   a33[17].ContinueFrame = 5;               a33[17].offx = 40;									     a33[17].offy = -115;
	for (int i = 0; i < 7; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\¿­¶ûÏ£\\%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\¿­¶ûÏ£\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "¿­¶ûÏ£%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("¿­¶ûÏ£0", "¿­¶ûÏ£0", 0, 0, 804, 828, 0xffffff);
	go->AddBmp("¿­¶ûÏ£1", "¿­¶ûÏ£1", 0, 0, 802, 800, 0xffffff);
	go->AddBmp("¿­¶ûÏ£2", "¿­¶ûÏ£2", 0, 0, 800, 802, 0xffffff);
	go->AddBmp("¿­¶ûÏ£3", "¿­¶ûÏ£3", 0, 0, 800, 802, 0xffffff);
	go->AddBmp("¿­¶ûÏ£4", "¿­¶ûÏ£4", 0, 0, 800, 800, 0xffffff);
	go->AddBmp("¿­¶ûÏ£5", "¿­¶ûÏ£5", 0, 0, 804, 804, 0xffffff);
	go->AddBmp("¿­¶ûÏ£6", "¿­¶ûÏ£6", 0, 0, 800, 800, 0xffffff);

	a34[0].BmpId = "¿­¶ûÏ£0";                   a34[0].ContinueFrame = 5;					 a34[0].offx = 39;									     a34[0].offy = -116;
	a34[1].BmpId = "¿­¶ûÏ£1";                   a34[1].ContinueFrame = 5;					 a34[1].offx = 40;									     a34[1].offy = -115;
	a34[2].BmpId = "¿­¶ûÏ£2";                   a34[2].ContinueFrame = 5;					 a34[2].offx = 45;									     a34[2].offy = -117;
	a34[3].BmpId = "¿­¶ûÏ£3";                   a34[3].ContinueFrame = 5;					 a34[3].offx = 51;									     a34[3].offy = -117;
	a34[4].BmpId = "¿­¶ûÏ£4";                   a34[4].ContinueFrame = 5;					 a34[4].offx = 39;									     a34[4].offy = -116;
	a34[5].BmpId = "¿­¶ûÏ£5";                   a34[5].ContinueFrame = 5;					 a34[5].offx = 40;									     a34[5].offy = -115;
	a34[6].BmpId = "¿­¶ûÏ£6";                   a34[6].ContinueFrame = 5;					 a34[6].offx = 45;									     a34[6].offy = -117;

	for (int i = 0; i < 9; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×Ãæ×ß\\ha030_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×Ãæ×ß\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "°×Ãæ×ß%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("°×Ãæ×ß0", "°×Ãæ×ß0", 0, 0, 592, 435, 0xffffff);
	go->AddBmp("°×Ãæ×ß1", "°×Ãæ×ß1", 0, 0, 563, 439, 0xffffff);
	go->AddBmp("°×Ãæ×ß2", "°×Ãæ×ß2", 0, 0, 542, 439, 0xffffff);
	go->AddBmp("°×Ãæ×ß3", "°×Ãæ×ß3", 0, 0, 535, 437, 0xffffff);
	go->AddBmp("°×Ãæ×ß4", "°×Ãæ×ß4", 0, 0, 529, 442, 0xffffff);
	go->AddBmp("°×Ãæ×ß5", "°×Ãæ×ß5", 0, 0, 533, 440, 0xffffff);
	go->AddBmp("°×Ãæ×ß6", "°×Ãæ×ß6", 0, 0, 530, 438, 0xffffff);
	go->AddBmp("°×Ãæ×ß7", "°×Ãæ×ß7", 0, 0, 537, 442, 0xffffff);
	go->AddBmp("°×Ãæ×ß8", "°×Ãæ×ß8", 0, 0, 580, 444, 0xffffff);


	a35[0].BmpId = "°×Ãæ×ß0";                   a35[0].ContinueFrame = 5;					 a35[0].offx = 39;									     a35[0].offy = -116;
	a35[1].BmpId = "°×Ãæ×ß1";                   a35[1].ContinueFrame = 5;					 a35[1].offx = 40;									     a35[1].offy = -115;
	a35[2].BmpId = "°×Ãæ×ß2";                   a35[2].ContinueFrame = 5;					 a35[2].offx = 45;									     a35[2].offy = -117;
	a35[3].BmpId = "°×Ãæ×ß3";                   a35[3].ContinueFrame = 5;					 a35[3].offx = 51;									     a35[3].offy = -117;
	a35[4].BmpId = "°×Ãæ×ß4";                   a35[4].ContinueFrame = 5;					 a35[4].offx = 39;									     a35[4].offy = -116;
	a35[5].BmpId = "°×Ãæ×ß5";                   a35[5].ContinueFrame = 5;					 a35[5].offx = 40;									     a35[5].offy = -115;
	a35[6].BmpId = "°×Ãæ×ß6";                   a35[6].ContinueFrame = 5;					 a35[6].offx = 45;									     a35[6].offy = -117;
	a35[7].BmpId = "°×Ãæ×ß7";                   a35[7].ContinueFrame = 5;					 a35[7].offx = 45;									     a35[7].offy = -117;
	a35[8].BmpId = "°×Ãæ×ß8";                   a35[8].ContinueFrame = 5;					 a35[8].offx = 45;									     a35[8].offy = -117;


	for (int i = 0; i < 26; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×Ãæ¿³\\ha431_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×Ãæ¿³\\ha431_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "°×Ãæ¿³%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("°×Ãæ¿³0", "°×Ãæ¿³0", 0, 0, 459, 408, 0xffffff);
	go->AddBmp("°×Ãæ¿³1", "°×Ãæ¿³1", 0, 0, 343, 441, 0xffffff);
	go->AddBmp("°×Ãæ¿³2", "°×Ãæ¿³2", 0, 0, 330, 454, 0xffffff);
	go->AddBmp("°×Ãæ¿³3", "°×Ãæ¿³3", 0, 0, 361, 435, 0xffffff);
	go->AddBmp("°×Ãæ¿³4", "°×Ãæ¿³4", 0, 0, 402, 419, 0xffffff);
	go->AddBmp("°×Ãæ¿³5", "°×Ãæ¿³5", 0, 0, 413, 414, 0xffffff);
	go->AddBmp("°×Ãæ¿³6", "°×Ãæ¿³6", 0, 0, 410, 413, 0xffffff);
	go->AddBmp("°×Ãæ¿³7", "°×Ãæ¿³7", 0, 0, 406, 408, 0xffffff);
	go->AddBmp("°×Ãæ¿³8", "°×Ãæ¿³8", 0, 0, 392, 409, 0xffffff);
	go->AddBmp("°×Ãæ¿³9", "°×Ãæ¿³9", 0, 0, 378, 411, 0xffffff);
	go->AddBmp("°×Ãæ¿³10", "°×Ãæ¿³10", 0, 0, 370, 415, 0xffffff);
	go->AddBmp("°×Ãæ¿³11", "°×Ãæ¿³11", 0, 0, 350, 416, 0xffffff);
	go->AddBmp("°×Ãæ¿³12", "°×Ãæ¿³12", 0, 0, 299, 412, 0xffffff);
	go->AddBmp("°×Ãæ¿³13", "°×Ãæ¿³13", 0, 0, 293, 411, 0xffffff);
	go->AddBmp("°×Ãæ¿³14", "°×Ãæ¿³14", 0, 0, 289, 409, 0xffffff);
	go->AddBmp("°×Ãæ¿³15", "°×Ãæ¿³15", 0, 0, 286, 416, 0xffffff);
	go->AddBmp("°×Ãæ¿³16", "°×Ãæ¿³16", 0, 0, 465, 422, 0xffffff);
	go->AddBmp("°×Ãæ¿³17", "°×Ãæ¿³17", 0, 0, 465, 442, 0xffffff);
	go->AddBmp("°×Ãæ¿³18", "°×Ãæ¿³18", 0, 0, 465, 450, 0xffffff);
	go->AddBmp("°×Ãæ¿³19", "°×Ãæ¿³19", 0, 0, 465, 484, 0xffffff);
	go->AddBmp("°×Ãæ¿³20", "°×Ãæ¿³20", 0, 0, 465, 476, 0xffffff);
	go->AddBmp("°×Ãæ¿³21", "°×Ãæ¿³21", 0, 0, 483, 357, 0xffffff);
	go->AddBmp("°×Ãæ¿³22", "°×Ãæ¿³22", 0, 0, 492, 349, 0xffffff);
	go->AddBmp("°×Ãæ¿³23", "°×Ãæ¿³23", 0, 0, 505, 396, 0xffffff);
	go->AddBmp("°×Ãæ¿³24", "°×Ãæ¿³24", 0, 0, 412, 456, 0xffffff);
	go->AddBmp("°×Ãæ¿³25", "°×Ãæ¿³25", 0, 0, 296, 488, 0xffffff);


	a36[0].BmpId =   "°×Ãæ¿³0";                     a36[0].ContinueFrame =   5;					     a36[0].offx = 39;							        	     a36[0].offy = -116;
	a36[1].BmpId =   "°×Ãæ¿³1";                     a36[1].ContinueFrame =   5;					     a36[1].offx = 40;							        	     a36[1].offy = -115;
	a36[2].BmpId =   "°×Ãæ¿³2";                     a36[2].ContinueFrame =   5;					     a36[2].offx = 45;							        	     a36[2].offy = -117;
	a36[3].BmpId =   "°×Ãæ¿³3";                     a36[3].ContinueFrame =   5;					     a36[3].offx = 51;							        	     a36[3].offy = -117;
	a36[4].BmpId =   "°×Ãæ¿³4";                     a36[4].ContinueFrame =   5;					     a36[4].offx = 39;							        	     a36[4].offy = -116;
	a36[5].BmpId =   "°×Ãæ¿³5";                     a36[5].ContinueFrame =   5;					     a36[5].offx = 40;							        	     a36[5].offy = -115;
	a36[6].BmpId =   "°×Ãæ¿³6";                     a36[6].ContinueFrame =   5;					     a36[6].offx = 45;							        	     a36[6].offy = -117;
	a36[7].BmpId =   "°×Ãæ¿³7";                     a36[7].ContinueFrame =   5;					     a36[7].offx = 45;							        	     a36[7].offy = -117;
	a36[8].BmpId =   "°×Ãæ¿³8";                     a36[8].ContinueFrame =   5;					     a36[8].offx = 45;							        	     a36[8].offy = -117;
	a36[9].BmpId =   "°×Ãæ¿³9";                     a36[9].ContinueFrame =   5;					     a36[9].offx = 39;							        	     a36[9].offy = -116;
	a36[10].BmpId = "°×Ãæ¿³10";                   a36[10].ContinueFrame = 5;					 a36[10].offx = 40;									     a36[10].offy = -115;
	a36[11].BmpId = "°×Ãæ¿³11";                   a36[11].ContinueFrame = 5;					 a36[11].offx = 45;									     a36[11].offy = -117;
	a36[12].BmpId = "°×Ãæ¿³12";                   a36[12].ContinueFrame = 5;					 a36[12].offx = 51;									     a36[12].offy = -117;
	a36[13].BmpId = "°×Ãæ¿³13";                   a36[13].ContinueFrame = 5;					 a36[13].offx = 39;									     a36[13].offy = -116;
	a36[14].BmpId = "°×Ãæ¿³14";                   a36[14].ContinueFrame = 5;					 a36[14].offx = 40;									     a36[14].offy = -115;
	a36[15].BmpId = "°×Ãæ¿³15";                   a36[15].ContinueFrame = 5;					 a36[15].offx = 45;									     a36[15].offy = -117;
	a36[16].BmpId = "°×Ãæ¿³16";                   a36[16].ContinueFrame = 5;					 a36[16].offx = 45;									     a36[16].offy = -117;
	a36[17].BmpId = "°×Ãæ¿³17";                   a36[17].ContinueFrame = 5;					 a36[17].offx = 45;									     a36[17].offy = -117;
	a36[18].BmpId = "°×Ãæ¿³18";                   a36[18].ContinueFrame = 5;					 a36[18].offx = 39;									     a36[18].offy = -116;
	a36[19].BmpId = "°×Ãæ¿³19";                   a36[19].ContinueFrame = 5;					 a36[19].offx = 40;									     a36[19].offy = -115;
	a36[20].BmpId = "°×Ãæ¿³20";                   a36[20].ContinueFrame = 5;					 a36[20].offx = 45;									     a36[20].offy = -117;
	a36[21].BmpId = "°×Ãæ¿³21";                   a36[21].ContinueFrame = 5;					 a36[21].offx = 51;									     a36[21].offy = -117;
	a36[22].BmpId = "°×Ãæ¿³22";                   a36[22].ContinueFrame = 5;					 a36[22].offx = 39;									     a36[22].offy = -116;
	a36[23].BmpId = "°×Ãæ¿³23";                   a36[23].ContinueFrame = 5;					 a36[23].offx = 40;									     a36[23].offy = -115;
	a36[24].BmpId = "°×Ãæ¿³24";                   a36[24].ContinueFrame = 5;					 a36[24].offx = 45;									     a36[24].offy = -117;
	a36[25].BmpId = "°×Ãæ¿³25";                   a36[25].ContinueFrame = 5;					 a36[25].offx = 45;									     a36[25].offy = -117;


	for (int i = 0; i < 43; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×Ãæ´ó\\ha451_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×Ãæ´ó\\ha451_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "°×Ãæ´ó%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("°×Ãæ´ó0", "°×Ãæ´ó0", 0, 0, 528, 530, 0xffffff);
	go->AddBmp("°×Ãæ´ó1", "°×Ãæ´ó1", 0, 0, 422, 556, 0xffffff);
	go->AddBmp("°×Ãæ´ó2", "°×Ãæ´ó2", 0, 0, 457, 474, 0xffffff);
	go->AddBmp("°×Ãæ´ó3", "°×Ãæ´ó3", 0, 0, 483, 484, 0xffffff);
	go->AddBmp("°×Ãæ´ó4", "°×Ãæ´ó4", 0, 0, 510, 464, 0xffffff);
	go->AddBmp("°×Ãæ´ó5", "°×Ãæ´ó5", 0, 0, 496, 469, 0xffffff);
	go->AddBmp("°×Ãæ´ó6", "°×Ãæ´ó6", 0, 0, 490, 479, 0xffffff);
	go->AddBmp("°×Ãæ´ó7", "°×Ãæ´ó7", 0, 0, 485, 495, 0xffffff);
	go->AddBmp("°×Ãæ´ó8", "°×Ãæ´ó8", 0, 0, 452, 507, 0xffffff);
	go->AddBmp("°×Ãæ´ó9", "°×Ãæ´ó9", 0, 0, 415, 531, 0xffffff);
	go->AddBmp("°×Ãæ´ó10", "°×Ãæ´ó10", 0, 0, 712, 563, 0xffffff);
	go->AddBmp("°×Ãæ´ó11", "°×Ãæ´ó11", 0, 0, 719, 562, 0xffffff);
	go->AddBmp("°×Ãæ´ó12", "°×Ãæ´ó12", 0, 0, 738, 546, 0xffffff);
	go->AddBmp("°×Ãæ´ó13", "°×Ãæ´ó13", 0, 0, 759, 529, 0xffffff);
	go->AddBmp("°×Ãæ´ó14", "°×Ãæ´ó14", 0, 0, 709, 505, 0xffffff);
	go->AddBmp("°×Ãæ´ó15", "°×Ãæ´ó15", 0, 0, 477, 553, 0xffffff);
	go->AddBmp("°×Ãæ´ó16", "°×Ãæ´ó16", 0, 0, 501, 527, 0xffffff);
	go->AddBmp("°×Ãæ´ó17", "°×Ãæ´ó17", 0, 0, 431, 436, 0xffffff);
	go->AddBmp("°×Ãæ´ó18", "°×Ãæ´ó18", 0, 0, 409, 406, 0xffffff);
	go->AddBmp("°×Ãæ´ó19", "°×Ãæ´ó19", 0, 0, 460, 376, 0xffffff);
	go->AddBmp("°×Ãæ´ó20", "°×Ãæ´ó20", 0, 0, 491, 392, 0xffffff);
	go->AddBmp("°×Ãæ´ó21", "°×Ãæ´ó21", 0, 0, 573, 476, 0xffffff);
	go->AddBmp("°×Ãæ´ó22", "°×Ãæ´ó22", 0, 0, 268, 486, 0xffffff);
	go->AddBmp("°×Ãæ´ó23", "°×Ãæ´ó23", 0, 0, 253, 477, 0xffffff);
	go->AddBmp("°×Ãæ´ó24", "°×Ãæ´ó24", 0, 0, 278, 475, 0xffffff);
	go->AddBmp("°×Ãæ´ó25", "°×Ãæ´ó25", 0, 0, 299, 473, 0xffffff);
	go->AddBmp("°×Ãæ´ó26", "°×Ãæ´ó26", 0, 0, 386, 478, 0xffffff);
	go->AddBmp("°×Ãæ´ó27", "°×Ãæ´ó27", 0, 0, 598, 630, 0xffffff);
	go->AddBmp("°×Ãæ´ó28", "°×Ãæ´ó28", 0, 0, 315, 615, 0xffffff);
	go->AddBmp("°×Ãæ´ó29", "°×Ãæ´ó29", 0, 0, 429, 599, 0xffffff);
	go->AddBmp("°×Ãæ´ó30", "°×Ãæ´ó30", 0, 0, 447, 579, 0xffffff);
	go->AddBmp("°×Ãæ´ó31", "°×Ãæ´ó31", 0, 0, 234, 620, 0xffffff);
	go->AddBmp("°×Ãæ´ó32", "°×Ãæ´ó32", 0, 0, 235, 623, 0xffffff);
	go->AddBmp("°×Ãæ´ó33", "°×Ãæ´ó33", 0, 0, 239, 607, 0xffffff);
	go->AddBmp("°×Ãæ´ó34", "°×Ãæ´ó34", 0, 0, 231, 541, 0xffffff);
	go->AddBmp("°×Ãæ´ó35", "°×Ãæ´ó35", 0, 0, 231, 540, 0xffffff);
	go->AddBmp("°×Ãæ´ó36", "°×Ãæ´ó36", 0, 0, 212, 539, 0xffffff);
	go->AddBmp("°×Ãæ´ó37", "°×Ãæ´ó37", 0, 0, 231, 539, 0xffffff);
	go->AddBmp("°×Ãæ´ó38", "°×Ãæ´ó38", 0, 0, 225, 539, 0xffffff);
	go->AddBmp("°×Ãæ´ó39", "°×Ãæ´ó39", 0, 0, 349, 538, 0xffffff);
	go->AddBmp("°×Ãæ´ó40", "°×Ãæ´ó40", 0, 0, 337, 538, 0xffffff);
	go->AddBmp("°×Ãæ´ó41", "°×Ãæ´ó41", 0, 0, 411, 538, 0xffffff);
	go->AddBmp("°×Ãæ´ó42", "°×Ãæ´ó42", 0, 0, 398, 538, 0xffffff);
	


	a37[0].BmpId = "°×Ãæ´ó0";                           a37[0].ContinueFrame = 15;					     a37[0].offx = 39;							        	     a37[0].offy = -116;
	a37[1].BmpId = "°×Ãæ´ó1";                           a37[1].ContinueFrame = 15;					     a37[1].offx = 40;							        	     a37[1].offy = -115;
	a37[2].BmpId = "°×Ãæ´ó2";                           a37[2].ContinueFrame = 15;					     a37[2].offx = 45;							        	     a37[2].offy = -117;
	a37[3].BmpId = "°×Ãæ´ó3";                           a37[3].ContinueFrame = 15;					     a37[3].offx = 51;							        	     a37[3].offy = -117;
	a37[4].BmpId = "°×Ãæ´ó4";                           a37[4].ContinueFrame = 15;					     a37[4].offx = 39;							        	     a37[4].offy = -116;
	a37[5].BmpId = "°×Ãæ´ó5";                           a37[5].ContinueFrame = 15;					     a37[5].offx = 40;							        	     a37[5].offy = -115;
	a37[6].BmpId = "°×Ãæ´ó6";                           a37[6].ContinueFrame = 15;					     a37[6].offx = 45;							        	     a37[6].offy = -117;
	a37[7].BmpId = "°×Ãæ´ó7";                           a37[7].ContinueFrame = 15;					     a37[7].offx = 45;							        	     a37[7].offy = -117;
	a37[8].BmpId = "°×Ãæ´ó8";                           a37[8].ContinueFrame = 15;					     a37[8].offx = 45;							        	     a37[8].offy = -117;
	a37[9].BmpId = "°×Ãæ´ó9";                           a37[9].ContinueFrame = 15;					     a37[9].offx = 39;							        	     a37[9].offy = -116;
	a37[10].BmpId = "°×Ãæ´ó10";                     a37[10].ContinueFrame = 15;					     a37[10].offx = 40;									         a37[10].offy = -115;
	a37[11].BmpId = "°×Ãæ´ó11";                     a37[11].ContinueFrame = 15;					     a37[11].offx = 45;									         a37[11].offy = -117;
	a37[12].BmpId = "°×Ãæ´ó12";                     a37[12].ContinueFrame = 15;					     a37[12].offx = 51;									         a37[12].offy = -117;
	a37[13].BmpId = "°×Ãæ´ó13";                     a37[13].ContinueFrame = 15;					     a37[13].offx = 39;									         a37[13].offy = -116;
	a37[14].BmpId = "°×Ãæ´ó14";                     a37[14].ContinueFrame = 15;					     a37[14].offx = 40;									         a37[14].offy = -115;
	a37[15].BmpId = "°×Ãæ´ó15";                     a37[15].ContinueFrame = 15;					     a37[15].offx = 45;									         a37[15].offy = -117;
	a37[16].BmpId = "°×Ãæ´ó16";                     a37[16].ContinueFrame = 15;					     a37[16].offx = 45;									         a37[16].offy = -117;
	a37[17].BmpId = "°×Ãæ´ó17";                     a37[17].ContinueFrame = 15;					     a37[17].offx = 45;									         a37[17].offy = -117;
	a37[18].BmpId = "°×Ãæ´ó18";                     a37[18].ContinueFrame = 15;					     a37[18].offx = 39;									         a37[18].offy = -116;
	a37[19].BmpId = "°×Ãæ´ó19";                     a37[19].ContinueFrame = 15;					     a37[19].offx = 40;									         a37[19].offy = -115;
	a37[20].BmpId = "°×Ãæ´ó20";                     a37[20].ContinueFrame = 15;					     a37[20].offx = 39;							        	     a37[20].offy = -116;
	a37[21].BmpId = "°×Ãæ´ó21";                     a37[21].ContinueFrame = 15;					     a37[21].offx = 40;							        	     a37[21].offy = -115;
	a37[22].BmpId = "°×Ãæ´ó22";                     a37[22].ContinueFrame = 15;					     a37[22].offx = 45;							        	     a37[22].offy = -117;
	a37[23].BmpId = "°×Ãæ´ó23";                     a37[23].ContinueFrame = 15;					     a37[23].offx = 51;							        	     a37[23].offy = -117;
	a37[24].BmpId = "°×Ãæ´ó24";                     a37[24].ContinueFrame = 15;					     a37[24].offx = 39;							        	     a37[24].offy = -116;
	a37[25].BmpId = "°×Ãæ´ó25";                     a37[25].ContinueFrame = 15;					     a37[25].offx = 40;							        	     a37[25].offy = -115;
	a37[26].BmpId = "°×Ãæ´ó26";                     a37[26].ContinueFrame = 15;					     a37[26].offx = 45;							        	     a37[26].offy = -117;
	a37[27].BmpId = "°×Ãæ´ó27";                     a37[27].ContinueFrame = 15;					     a37[27].offx = 45;							        	     a37[27].offy = -117;
	a37[28].BmpId = "°×Ãæ´ó28";                     a37[28].ContinueFrame = 15;					     a37[28].offx = 45;							        	     a37[28].offy = -117;
	a37[29].BmpId = "°×Ãæ´ó29";                     a37[29].ContinueFrame = 15;					     a37[29].offx = 39;							        	     a37[29].offy = -116;
	a37[30].BmpId = "°×Ãæ´ó30";                     a37[30].ContinueFrame = 15;					     a37[30].offx = 40;									         a37[30].offy = -115;
	a37[31].BmpId = "°×Ãæ´ó31";                     a37[31].ContinueFrame = 15;					     a37[31].offx = 45;									         a37[31].offy = -117;
	a37[32].BmpId = "°×Ãæ´ó32";                     a37[31].ContinueFrame = 15;					     a37[31].offx = 51;									         a37[31].offy = -117;
	a37[33].BmpId = "°×Ãæ´ó33";                     a37[33].ContinueFrame = 15;					     a37[33].offx = 39;									         a37[33].offy = -116;
	a37[34].BmpId = "°×Ãæ´ó34";                     a37[34].ContinueFrame = 15;					     a37[34].offx = 40;									         a37[34].offy = -115;
	a37[35].BmpId = "°×Ãæ´ó35";                     a37[35].ContinueFrame = 15;					     a37[35].offx = 45;									         a37[35].offy = -117;
	a37[36].BmpId = "°×Ãæ´ó36";                     a37[36].ContinueFrame = 15;					     a37[36].offx = 45;									         a37[36].offy = -117;
	a37[37].BmpId = "°×Ãæ´ó37";                     a37[37].ContinueFrame = 15;					     a37[37].offx = 45;									         a37[37].offy = -117;
	a37[38].BmpId = "°×Ãæ´ó38";                     a37[38].ContinueFrame = 15;					     a37[38].offx = 39;									         a37[38].offy = -116;
	a37[39].BmpId = "°×Ãæ´ó39";                     a37[39].ContinueFrame = 15;					     a37[39].offx = 40;									         a37[39].offy = -115;
	a37[40].BmpId = "°×Ãæ´ó40";                     a37[40].ContinueFrame = 15;					     a37[40].offx = 40;									         a37[40].offy = -115;
	a37[41].BmpId = "°×Ãæ´ó41";                     a37[41].ContinueFrame = 15;					     a37[41].offx = 40;									         a37[41].offy = -115;
	a37[42].BmpId = "°×Ãæ´ó42";                     a37[42].ContinueFrame = 15;					     a37[42].offx = 40;									         a37[42].offy = -115;


	for (int i = 0; i < 43; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×ÃæËÀ\\ha060_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×ÃæËÀ\\ha060_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "°×ÃæËÀ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("°×ÃæËÀ0",   "°×ÃæËÀ0",   0, 0, 567, 457, 0xffffff);
	go->AddBmp("°×ÃæËÀ1",   "°×ÃæËÀ1",   0, 0, 376, 398, 0xffffff);
	go->AddBmp("°×ÃæËÀ2",   "°×ÃæËÀ2",   0, 0, 374, 352, 0xffffff);	
	go->AddBmp("°×ÃæËÀ3",   "°×ÃæËÀ3",   0, 0, 421, 345, 0xffffff);
	go->AddBmp("°×ÃæËÀ4",   "°×ÃæËÀ4",   0, 0, 423, 207, 0xffffff);
	go->AddBmp("°×ÃæËÀ5",   "°×ÃæËÀ5",   0, 0, 398, 467, 0xffffff);
	go->AddBmp("°×ÃæËÀ6",   "°×ÃæËÀ6",   0, 0, 398, 467, 0xffffff);
	go->AddBmp("°×ÃæËÀ7",   "°×ÃæËÀ7",   0, 0, 484, 376, 0xffffff);
	go->AddBmp("°×ÃæËÀ8",   "°×ÃæËÀ8",   0, 0, 507, 262, 0xffffff);
	go->AddBmp("°×ÃæËÀ9",   "°×ÃæËÀ9",   0, 0, 470, 208, 0xffffff);
	go->AddBmp("°×ÃæËÀ10", "°×ÃæËÀ10", 0, 0, 504, 167, 0xffffff);
	go->AddBmp("°×ÃæËÀ11", "°×ÃæËÀ11", 0, 0, 494, 133, 0xffffff);
	go->AddBmp("°×ÃæËÀ12", "°×ÃæËÀ12", 0, 0, 496, 141, 0xffffff);
	go->AddBmp("°×ÃæËÀ13", "°×ÃæËÀ13", 0, 0, 501, 117, 0xffffff);
	go->AddBmp("°×ÃæËÀ14", "°×ÃæËÀ14", 0, 0, 505, 106, 0xffffff);


	a38[0].BmpId =   "°×ÃæËÀ0";                       a38[0].ContinueFrame = 15;						     a38[0].offx = 39;							        			 a38[0].offy = -116;
	a38[1].BmpId =   "°×ÃæËÀ1";                       a38[1].ContinueFrame = 15;						     a38[1].offx = 40;							        			 a38[1].offy = -115;
	a38[2].BmpId =   "°×ÃæËÀ2";                       a38[2].ContinueFrame = 15;						     a38[2].offx = 45;							        			 a38[2].offy = -117;
	a38[3].BmpId =   "°×ÃæËÀ3";                       a38[3].ContinueFrame = 15;						     a38[3].offx = 51;							        			 a38[3].offy = -117;
	a38[4].BmpId =   "°×ÃæËÀ4";                       a38[4].ContinueFrame = 15;						     a38[4].offx = 39;							        			 a38[4].offy = -116;
	a38[5].BmpId =   "°×ÃæËÀ5";                       a38[5].ContinueFrame = 15;						     a38[5].offx = 40;							        			 a38[5].offy = -115;
	a38[6].BmpId =   "°×ÃæËÀ6";                       a38[6].ContinueFrame = 15;						     a38[6].offx = 45;							        			 a38[6].offy = -117;
	a38[7].BmpId =   "°×ÃæËÀ7";                       a38[7].ContinueFrame = 15;						     a38[7].offx = 45;							        			 a38[7].offy = -117;
	a38[8].BmpId =   "°×ÃæËÀ8";                       a38[8].ContinueFrame = 15;						     a38[8].offx = 45;							        			 a38[8].offy = -117;
	a38[9].BmpId =   "°×ÃæËÀ9";                       a38[9].ContinueFrame = 15;						     a38[9].offx = 39;							        			 a38[9].offy = -116;
	a38[10].BmpId = "°×ÃæËÀ10";                     a38[10].ContinueFrame = 15;					     a38[10].offx = 40;									         a38[10].offy = -115;
	a38[11].BmpId = "°×ÃæËÀ11";                     a38[11].ContinueFrame = 15;					     a38[11].offx = 45;									         a38[11].offy = -117;
	a38[12].BmpId = "°×ÃæËÀ12";                     a38[12].ContinueFrame = 15;					     a38[12].offx = 51;									         a38[12].offy = -117;
	a38[13].BmpId = "°×ÃæËÀ13";                     a38[13].ContinueFrame = 15;					     a38[13].offx = 39;									         a38[13].offy = -116;
	a38[14].BmpId = "°×ÃæËÀ14";                     a38[14].ContinueFrame = 15;					     a38[14].offx = 40;									         a38[14].offy = -115;

	for (int i = 0; i < 5; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×ÃæÊÜ\\ha050_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×ÃæÊÜ\\ha050_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "°×ÃæÊÜ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("°×ÃæÊÜ0", "°×ÃæÊÜ0", 0, 0, 538, 432, 0xffffff);
	go->AddBmp("°×ÃæÊÜ1", "°×ÃæÊÜ1", 0, 0, 561, 439, 0xffffff);
	go->AddBmp("°×ÃæÊÜ2", "°×ÃæÊÜ2", 0, 0, 576, 406, 0xffffff);
	go->AddBmp("°×ÃæÊÜ3", "°×ÃæÊÜ3", 0, 0, 602, 339, 0xffffff);
	go->AddBmp("°×ÃæÊÜ4", "°×ÃæÊÜ4", 0, 0, 635, 312, 0xffffff);
	


	a39[0].BmpId = "°×ÃæÊÜ0";                       a39[0].ContinueFrame = 15;						     a39[0].offx = 39;							        			 a39[0].offy = -116;
	a39[1].BmpId = "°×ÃæÊÜ1";                       a39[1].ContinueFrame = 15;						     a39[1].offx = 40;							        			 a39[1].offy = -115;
	a39[2].BmpId = "°×ÃæÊÜ2";                       a39[2].ContinueFrame = 15;						     a39[2].offx = 45;							        			 a39[2].offy = -117;
	a39[3].BmpId = "°×ÃæÊÜ3";                       a39[3].ContinueFrame = 15;						     a39[3].offx = 51;							        			 a39[3].offy = -117;
	a39[4].BmpId = "°×ÃæÊÜ4";                       a39[4].ContinueFrame = 15;						     a39[4].offx = 39;							        			 a39[4].offy = -116;




























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
		fopen_s(&pf, "ÃªµãÊý¾Ý.txt", "wb");
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

