// Copyright (c) 2010 Kingsoft Corporation. All rights reserved.
// Copyright (c) 2010 The KSafe Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

//////////////////////////////////////////////////////////////////////////

#define IDC_TRV_FOLDER_BROWSE               144

//////////////////////////////////////////////////////////////////////////
// CONTROL ID

#define IDC_BTN_SYS_CLOSE                   60001
#define IDC_BTN_SYS_MAX                     60002
#define IDC_BTN_SYS_MIN                     60003
#define IDC_LBL_MSGBOX_TITLE                60004
#define IDC_ICON_MSGBOX_ICON                60005
#define IDC_LBL_MSGBOX_TEXT                 60006
#define IDC_CHK_MSGBOX_NONOTIFYLATER        60007
#define IDC_DIV_MSGBOX_BUTTONS              60008
#define IDC_DIV_MSGBOX_CONTENT              60009
#define IDC_IMG_MSGBOX_PNG					60100

// һ������
#define ID_ONEKEY_BASE                      100
#define ID_DIV_ONEKEY_HEADER                (ID_ONEKEY_BASE+0)
#define ID_TXT_ONEKEY_AD                    (ID_ONEKEY_BASE+1)
#define ID_LNK_ONEKEY_CLEAN_SETTING         (ID_ONEKEY_BASE+2)
#define ID_DIV_ONEKEY_MIDDLE                (ID_ONEKEY_BASE+3)
#define ID_IMG_ONEKEY_MIDDLE_1              (ID_ONEKEY_BASE+4)
#define ID_IMG_ONEKEY_MIDDLE_2              (ID_ONEKEY_BASE+5)
#define ID_IMG_ONEKEY_MIDDLE_3              (ID_ONEKEY_BASE+6)
#define ID_TXT_ONEKEY_MIDDLE_1              (ID_ONEKEY_BASE+7)
#define ID_TXT_ONEKEY_MIDDLE_2              (ID_ONEKEY_BASE+8)
#define ID_LNK_ONEKEY_MIDDLE                (ID_ONEKEY_BASE+9)                
#define ID_BTN_ONEKEY_MIDDLE                (ID_ONEKEY_BASE+10)                   
#define ID_PRO_ONEKEY_CLEAN                 (ID_ONEKEY_BASE+11)
#define ID_CTL_ONEKEY_CLEAN                 (ID_ONEKEY_BASE+12)
#define ID_TXT_ONEKEY_TASK                  (ID_ONEKEY_BASE+13)
#define ID_DIV_ONEKEY_START                 (ID_ONEKEY_BASE+14)
#define ID_DIV_ONEKEY_SCAN                  (ID_ONEKEY_BASE+15)
#define ID_DIV_ONEKEY_STARTHEAD             (ID_ONEKEY_BASE+16)
#define ID_DIV_ONEKEY_SCANHEAD              (ID_ONEKEY_BASE+17)
#define ID_IMG_ONEKEY_STARTHEAD             (ID_ONEKEY_BASE+18)
#define ID_TXT_ONEKEY_STARTHEAD_1           (ID_ONEKEY_BASE+19)
#define ID_TXT_ONEKEY_STARTHEAD_2           (ID_ONEKEY_BASE+20)
#define ID_IMG_ONKEY_SHADOW                 (ID_ONEKEY_BASE+21)
#define ID_LNK_ONEKEY_HELP                  (ID_ONEKEY_BASE+22)
#define ID_TXT_ONEKEY_COLOR                 (ID_ONEKEY_BASE+23)

// ���ļ�����
#define ID_BIGFILE_BASE                     150
#define ID_DIV_BIGFILE_STATE                (ID_BIGFILE_BASE+0)
#define ID_IMG_BIGFILE_STATE                (ID_BIGFILE_BASE+1)
#define ID_IMG_BIGFILE_LOADING              (ID_BIGFILE_BASE+2)
#define ID_TXT_BIGFILE_STATE                (ID_BIGFILE_BASE+3)
#define ID_LNK_BIGFILE_STATE                (ID_BIGFILE_BASE+4)
#define ID_DIV_BIGFILE_MAIN                 (ID_BIGFILE_BASE+5)
#define ID_CTL_BIGFILE_LISTLEFT             (ID_BIGFILE_BASE+6)
#define ID_CTL_BIGFILE_LISTRIGHT            (ID_BIGFILE_BASE+7)
#define ID_TXT_BIGFILE_ITEM_NAME            (ID_BIGFILE_BASE+8)
#define ID_TXT_BIGFILE_ITEM_SIZE            (ID_BIGFILE_BASE+9)
#define ID_TXT_BIGFILE_ITEM_INFO            (ID_BIGFILE_BASE+10)
#define ID_DIV_BIGFILE_NO_FILES             (ID_BIGFILE_BASE+11)
#define ID_IMG_BIGFILE_NO_FILES             (ID_BIGFILE_BASE+12)
#define ID_TXT_BIGFILE_NO_FILES             (ID_BIGFILE_BASE+13)
#define ID_DIV_BIGFILE_NO_ITEM              (ID_BIGFILE_BASE+14)
#define ID_IMG_BIGFILE_NO_ITEM              (ID_BIGFILE_BASE+15)
#define ID_TXT_BIGFILE_NO_ITEM              (ID_BIGFILE_BASE+16)
#define ID_DIV_BIGFILE_FOOTER               (ID_BIGFILE_BASE+17)
#define ID_LNK_BIGFILE_DEL_FILES            (ID_BIGFILE_BASE+18)
#define ID_DIV_BIGFILE_CHANGE_DEST_DIR      (ID_BIGFILE_BASE+19)
#define ID_CTL_BIGFILE_CHANGE_DEST_DIR      (ID_BIGFILE_BASE+20)
#define ID_LNK_BIGFILE_CHANGE_DEST_DIR      (ID_BIGFILE_BASE+21)
#define ID_BTN_BIGFILE_RESCAN               (ID_BIGFILE_BASE+22)
#define ID_BTN_BIGFILE_MOVE_FILES           (ID_BIGFILE_BASE+23)
#define ID_TMR_BIGFILE_ANIM                 (ID_BIGFILE_BASE+24)
#define ID_DIV_BIGFILE_CHECKBOX             (ID_BIGFILE_BASE+25)
#define ID_CHK_BIGFILE_CHECKBOX             (ID_BIGFILE_BASE+26)
#define ID_LIN_BIGFILE_CHECKBOX             (ID_BIGFILE_BASE+27)
#define ID_DIV_BIGFILE_SCANING              (ID_BIGFILE_BASE+28)
#define ID_DIV_BIGFILE_ENUM_DLG             (ID_BIGFILE_BASE+29)
#define ID_DIV_BIGFILE_ENUM_START           (ID_BIGFILE_BASE+30)
#define ID_BTN_BIGFILE_ENUM_START           (ID_BIGFILE_BASE+31)
#define ID_DIV_BIGFILE_ENUM_STOP            (ID_BIGFILE_BASE+32)
#define ID_IMG_BIGFILE_ENUM_ANIM            (ID_BIGFILE_BASE+33)
#define ID_TXT_BIGFILE_ENUM_PATH            (ID_BIGFILE_BASE+34)
#define ID_BTN_BIGFILE_ENUM_STOP            (ID_BIGFILE_BASE+35)
#define ID_LNK_BIGFILE_RE_SCAN              (ID_BIGFILE_BASE+36)
#define ID_LNK_BIGFILE_HELP					(ID_BIGFILE_BASE+37)
#define ID_LNK_BIGFILE_STAT1				(ID_BIGFILE_BASE+38)
#define ID_LNK_BIGFILE_STAT2				(ID_BIGFILE_BASE+39)
#define ID_BTN_BIGFILE_FILTER_MENU1         (ID_BIGFILE_BASE+40)
#define ID_BTN_BIGFILE_FILTER_MENU2         (ID_BIGFILE_BASE+41)
#define ID_TXT_BIGFILE_FILTER               (ID_BIGFILE_BASE+42)
#define ID_CHK_BIGFILE_SIZE_LIMIT           (ID_BIGFILE_BASE+43)
#define ID_CTL_BIGFILE_SIZE_COMBOBOX        (ID_BIGFILE_BASE+44)
#define ID_TXT_BIGFILE_SIZE_LIMIT           (ID_BIGFILE_BASE+45)
#define ID_POS_BIGFILE_ENUM                 (ID_BIGFILE_BASE+46)
#define ID_CHK_SYSFILE_DISPLAY                (ID_BIGFILE_BASE+47)

//////////////////////////////////////////////////////////////////////////
// 4000-4999 ϵͳ�Ż��������������Ż�

#define IDC_TAB_SYSOPT_LEFT						4001
#define IDC_DIV_SYSOPT_RUN						4002
#define IDC_LST_RUNOPT							4003
#define IDC_TAB_RUNOPT_TYPE						4004
#define IDC_LBL_RUNOPT_SHOW_ENABEL				4005
#define IDC_LBL_RUNOPT_SHOW_DISABLE				4006
#define IDC_LBL_RUNOPT_SHOW_ALL					4007
#define IDC_LBL_RUNOPT_HIDE_SYSTEM				4008
#define IDC_LBL_RUNOPT_SHOW_SYSTEM				4009
#define IDC_DIV_RUNOPT_CONTROL_SYS				4010
#define IDC_LBL_RUNOPT_REFRESH					4011
#define IDC_BTN_RUNOPT_CANCEL_ALL				4012
#define IDC_DIV_RUNOPT_BOTTOM					4013
#define IDC_TABPAGE_RUNOPT_START				4014
#define IDC_TABPAGE_RUNOPT_SERVICE				4015
#define IDC_TABPAGE_RUNOPT_TASK					4016
#define IDC_DIV_SYSOPT_MORE						4017
#define IDC_BTN_SYSOPT_WAIT_MORE				4018
#define IDC_DIV_RUNOPT_TOP_RUN					4019
#define IDC_DIV_RUNOPT_TOP_SERVICE				4020
#define IDC_DIV_RUNOPT_TOP_TASK					4021
#define IDC_LBL_RUNOPT_TOP_MORE					4022
#define IDC_DIV_RUNOPT_BTM_RUN_JOB_OP			4023
#define IDC_LBL_RUNOPT_BTM_SERVICE_OP			4024
#define IDC_LBL_RUNOPT_SHOW_ENABEL2				4025
#define IDC_LBL_RUNOPT_SHOW_DISABLE2			4026
#define IDC_LBL_RUNOPT_SHOW_ALL2				4027
#define IDC_DIV_SYSOPT_CLR_HISTORY				4028

#define IDC_DIV_CLR_NO_DOWN						4029
#define IDC_DIV_CLR_DOWNING						4030
#define IDC_DIV_CLR_INSTALLED					4031
#define IDC_TXT_CLR_NO_DOWN						4032
#define IDC_BTN_CLR_DOWN_PACK					4033
#define IDC_TXT_CLR_NO_DOWN_TOP_TIP				4034
#define IDC_ICON_CLR_NO_DOWN_TOP_TIP			4035

#define IDC_TAB_CLR_TOP							4400
#define IDC_DIV_CLR_TOP_PANL					4401
#define IDC_IMG_SETTING							4402
#define IDC_BTN_CRL_SETTING						4403

#define IDC_TXT_CLR_STATE						4404
#define IDC_TXT_CLR_STATE_DATE					4405
#define IDC_TXT_CLR_STATE_SIZE					4406
#define IDC_TXT_CLR_STATE_ALLSIZE				4407
#define IDC_TXT_CLR_SCAN_OPR					4408
#define IDC_CHK_CLR_SCAN_HENJI					4409
#define IDC_CHK_CLR_SCAN_LAJI					4410
#define IDC_CHK_CLR_SCAN_ZHUCEBIAO				4411
#define IDC_DIV_CLR_PANL						4412
#define IDC_DIV_CLR_SCAN						4413
#define IDC_DIV_CLR_SCANING						4414
#define IDC_IMG_CLR_SCANING						4415
#define IDC_TXT_CLR_SCANING						4416
#define IDC_PRO_CLR_SCANING						4417
#define IDC_BTN_CLR_STOP_SCANING				4418

#define IDC_DIV_CLR_GAOJI						4419
#define IDC_TREE_CLR_GAOJI						4420
#define IDC_DIV_CLR_TREETOP						4421
#define IDC_DIV_CLR_TREEDOWN					4422
#define IDC_IMG_CLR_TREETOP						4423
#define IDC_TXT_CLR_TREETOP						4424
#define IDC_DIV_CLR_TREEDOWNBTN					4425
#define IDC_TXT_CLR_TREEDOWN_DAFU				4426
#define IDC_TXT_CLR_TREEDOWN_ONE				4427
#define IDC_BTN_CLR_TREEDOWNBTN_SCAN			4428
#define IDC_BTN_CLR_TREEDOWNBTN_CLEAN			4429
#define IDC_DIV_CLR_TREEDOWNBTNRESCAN			4430
#define IDC_BTN_CLR_TREEDOWNBTNRESCAN			4431
#define IDC_BTN_CLR_TREEDOWNBTN_CLEAN1			4432
#define IDC_TREE_CLR_LAJI						4433
#define IDC_TREE_CLR_REG						4434
#define IDC_DIV_CLR_LAJI						4435
#define IDC_DIV_CLR_REG							4436

#define IDC_DIV_CLR_LAJI_TREETOP				4437
#define IDC_IMG_CLR_LAJI_TREETOP				4438
#define IDC_TXT_CLR_LAJI_TREETOP				4439
#define IDC_DIV_CLR_LAJI_TREEDOWN				4440
#define IDC_TXT_CLR_LAJI_TREEDOWN_DAFU			4441
#define IDC_TXT_CLR_LAJI_TREEDOWN_ONE			4442
#define IDC_DIV_CLR_LAJI_TREEDOWNBTN			4443
#define IDC_BTN_CLR_LAJI_TREEDOWNBTN_SCAN		4444
#define IDC_BTN_CLR_LAJI_TREEDOWNBTN_CLEAN		4445
#define IDC_DIV_CLR_LAJI_TREEDOWNBTNRESCAN		4446
#define IDC_BTN_CLR_LAJI_TREEDOWNBTNRESCAN		4447
#define IDC_BTN_CLR_LAJI_TREEDOWNBTN_CLEAN1		4448

#define IDC_DIV_CLR_REG_TREETOP					4449
#define IDC_IMG_CLR_REG_TREETOP					4450
#define IDC_TXT_CLR_REG_TREETOP					4451
#define IDC_DIV_CLR_REG_TREEDOWN				4452
#define IDC_TXT_CLR_REG_TREEDOWN_DAFU			4453
#define IDC_TXT_CLR_REG_TREEDOWN_ONE			4454
#define IDC_DIV_CLR_REG_TREEDOWNBTN				4455
#define IDC_BTN_CLR_REG_TREEDOWNBTN_SCAN		4456
#define IDC_BTN_CLR_REG_TREEDOWNBTN_CLEAN		4457
#define IDC_DIV_CLR_REG_TREEDOWNBTNRESCAN		4458
#define IDC_BTN_CLR_REG_TREEDOWNBTNRESCAN		4459
#define IDC_BTN_CLR_REG_TREEDOWNBTN_CLEAN1		4460
#define IDC_TXT_CLR_REG_TREEDOWN_REREG			4461
#define IDC_CHECK_CLR_REG						4462
#define IDC_CHECK_CLR_LAJI						4463

#define IDC_DIV_CLR_SCAN_TOP					4464
#define IDC_IMG_CLR_SCAN_TOP					4465
#define IDC_TXT_CLR_SCAN_INFO1					4466
#define IDC_TXT_CLR_SCAN_INFO2					4467
#define IDC_DIV_CLR_SCAN_LISTDOWN				4468
#define IDC_BTN_CLR_SCAN_RESCAN					4469
#define	IDC_BTN_CLR_SCAN_RECOME					4470
#define IDC_LST_CLR_SCAN						4471
#define IDC_DIV_CLR_SCAN_LST					4472
#define IDC_CHECK_CLR_HENJI						4473
#define IDC_IMG_CLR_HENJI_SCAN_TREETOP			4474
#define IDC_IMG_CLR_LAJI_SCAN_TREETOP			4475
#define IDC_IMG_CLR_REG_SCAN_TREETOP			4476
#define IDC_DIV_CLR_LOADERROR					4478
#define IDC_TXT_CLR_REG_TREEDOWN_SHOWDAFU			4479
#define IDC_TXT_CLR_LAJI_TREEDOWN_SHOWDAFU			4480
#define IDC_TXT_CLR_HENJI_TREEDOWN_SHOWDAFU			4481

#define IDC_IMG_CLR_TREETOP2                    4482
#define IDC_BTN_CLR_TREEDOWNBTN_SCAN_START      4483
#define IDC_TXT_CLR_HENJI_SHOW_EX1              4484
#define IDC_TXT_CLR_HENJI_SHOW_EX2              4485
#define IDC_TXT_CLR_HENJI_SHOW_EX3              4486
#define IDC_TXT_CLR_TREETOP2                    4487

#define IDC_BTN_ONEKEY_LOG_CLOSE                4488
#define IDC_BTN_ONEKEY_LOG_TITEL                4489
#define IDC_TXT_ONEKEY_LOG_DETAIL               4490
#define IDC_TXT_ONEKEY_LOG_COPY                 4491

#define IDC_BTN_RUNOPT_AUTO_OPT					4111

#define IDC_ONEKEY_DETAIL_DLG_EDIT              1601

//////////////////////////////////////////////////////////////////////////
// ʵʱ����

#define IDC_IMG_PROTECTION_STAT_BROWSERTPROTECT         5028
#define IDC_TXT_PROTECTION_BROWSERTPROTECT1				5029
#define IDC_TXT_PROTECTION_BROWSERTPROTECT2				5030
#define IDC_TXT_PROTECTION_TURN_ON_BROWSERTPROTECT      5031
#define IDC_TXT_PROTECTION_TURN_OFF_BROWSERTPROTECT     5032
#define IDC_LBL_PROTECTION_TURN_OFF_BROWSERTPROTECT     5033
#define IDC_LBL_PROTECTION_TURN_ON_BROWSERTPROTECT      5034
#define IDC_LBL_PROTECTION_STATUS_BROWSERTPROTECT       5035
#define IDC_IMG_PROTECTION_STAT_BWSP_PHISHING           5036
#define IDC_TXT_PROTECTION_BWSP_PHISHING1				5037
#define IDC_TXT_PROTECTION_BWSP_PHISHING2				5038
#define IDC_TXT_PROTECTION_TURN_ON_BWSP_PHISHING        5039
#define IDC_TXT_PROTECTION_TURN_OFF_BWSP_PHISHING       5040
#define IDC_LBL_PROTECTION_TURN_OFF_BWSP_PHISHING       5041
#define IDC_LBL_PROTECTION_TURN_ON_BWSP_PHISHING        5042
#define IDC_LBL_PROTECTION_STATUS_BWSP_PHISHING         5043
#define IDC_LBL_PROTECTION_BWSP_MORE_SETTING1           5044
#define IDC_LBL_PROTECTION_BWSP_MORE_SETTING2           5045

//////////////////////////////////////////////////////////////////////////
// һ���Ż��ĶԻ���
#define IDC_BTN_RUN_AUTO_CLOSE					1
#define IDC_LST_RUN_AUTO_OPT					2
#define IDC_LBL_RUN_AUTO_CHECK_ALL				3
#define IDC_LBL_RUN_AUTO_UNCHECK_ALL			4
#define IDC_BTN_RUN_AUTO_DO						5
#define IDC_DIV_RUN_AUTO_HAVE					6
#define IDC_DIV_RUN_AUTO_NO						7
#define IDC_BTN_RUN_AUTO_CANCEL					8
#define IDC_DIV_RUN_AUTO_BTM_INIT				9
#define IDC_DIV_RUN_AUTO_BTM_DONE				10
#define IDC_DIV_RUN_AUTO_TOP_INIT				11
#define IDC_DIV_RUN_AUTO_TOP_SUCCESS			12
#define IDC_DIV_RUN_AUTO_TOP_FAILED				13
#define IDC_BTN_RUN_AUTO_BTM_CLOSE				14



//////////////////////////////////////////////////////////////////////////
//Setup �Ի���
#define IDC_BTN_SETUP_CLOSE						1
#define IDC_PROGRESS_SETUP						3
#define IDC_BTN_SETUP_CANCEL					4

//////////////////////////////////////////////////////////////////////////
// ���ֲ���ͬʱ����δ֪�ļ��ĶԻ���
#define IDC_BTN_REPORT                          100
#define IDC_RICHTEXT_CONTENT                    101
#define IDC_LBL_VIEW_DETAIL                     102

//////////////////////////////////////////////////////////////////////////
// ��װ��������Ի���

#define IDC_PROGRESS_INSTALL                    100
#define IDC_BTN_INSAVE_MINIMIZE                 101
#define IDC_BTN_INSAVE_CANCEL                   102
#define IDC_LBL_PROGRESS                        103
#define IDC_LST_INSTALL_PROGRESS_DETAIL         104
#define IDC_BTN_INSAVE_FINISH                   105
#define IDC_DIV_INSAVE_WORKING                  106
#define IDC_DIV_INSAVE_FINISH                   107

//////////////////////////////////////////////////////////////////////////
// ����������öԻ���
#define IDC_SETTING_LIST						100
#define IDC_DLG_DOWNLOAD_SET					101
#define IDC_DLG_INSTALL_SET						102
#define IDC_DLG_DELFILE_SET						103
#define IDC_LINKTEXT_OPEN_DIR					201
#define IDC_EDIT_STORE_DIR						202
#define IDC_IMGBTN_SELECT_DIR					203
#define IDC_LINKTEXT_DEFAULT_DIR				204
#define IDC_LBL_DISK_SPACE						205
#define IDC_CHECK_SHOWHINT						206
#define IDC_CHECK_NO_HINT						207
#define IDC_CHECK_AUTO_INSTALL					208
#define IDC_CHECK_NO_AUTO_INSTALL				209
#define IDC_CHECK_DEL_WEEK						210
#define IDC_CHECK_DEL_RIGHTNOW					211
#define IDC_CHECK_DEL_NEVER						212
#define IDC_CHECK_DEL_TO_RECY					220
#define IDC_CHECK_DEL_REAL						221

//////////////////////////////////////////////////////////////////////////
// ���ع���Ի���
#define IDC_DOWNMGR_LEFT_LIST					100
#define IDC_DOWNMGR_ING_DLG						101
#define IDC_DOWNMGR_ING_DESC					102
#define IDC_DOWNMGR_ING_BTN_DIR					103
#define IDC_DOWNMGR_ING_LNK_DIR					104
#define IDC_DOWNMGR_ING_RIGHT_LIST				105
#define IDC_DLG_ING_NO_ITEM						106
#define IDC_DOWNMGR_ED_DLG						200
#define IDC_DOWNMGR_ED_DESC						201
#define IDC_DOWNMGR_ED_BTN_DIR					202
#define IDC_DOWNMGR_ED_LNK_DIR					203
#define IDC_DOWNMGR_ED_RIGHT_LIST				204
#define IDC_DOWNMGR_ED_CHECK					205
#define IDC_DOWNMGR_ED_TXT_CHECK				206
#define IDC_DOWNMGR_ED_BTN_DEL					207
#define IDC_DLG_ED_NO_ITEM						208
//������
#define IDC_DOWNMGR_RUBBISH_RIGHT_LIST			209
#define IDC_DOWNMGR_RUBBISH_CHECK				210
#define IDC_DOWNMGR_RUBBISH_BTN_DEL				211
#define IDC_DOWNMGR_RUBBISH_NO_ITEM				212
#define IDC_DOWNMGR_RUBBISH_TEXT_DESC			213
#define IDG_DOWNMGR_RUBBISH_DLG					214

#define IDC_DOWNMGR_ING_DESC_FMT				9910
#define IDC_DOWNMGR_ED_DESC_FMT					9911
#define IDC_DOWNMGR_ING_DESC_FMT0				9921
#define IDC_DOWNMGR_ED_DESC_FMT0				9922
#define IDS_DOWNMGR_RUBBISH_FMT					9923
#define IDS_DOWNMGR_RUBBISH_FMT0				9924

//////////////////////////////////////////////////////////////////////////
// ��Ӷ�����ַ�Ի���
#define IDC_DLG_ADD_URL_BTN_OK					100
#define IDC_DLG_ADD_URL_BTN_CANCEL				101
#define IDC_DLG_ADD_URL_REALWND					102



//////////////////////////////////////////////////////////////////////////
// STRING ID

#define IDS_APP_NAME                            1
#define IDS_EXAM_SCORE                          2
#define IDS_LIST_VIRUS_COLUMN_VIRUS_NAME_TITLE  3
#define IDS_LIST_VIRUS_COLUMN_FILE_NAME_TITLE   4
#define IDS_LIST_VIRUS_COLUMN_VIRUS_STAT_TITLE  5
#define IDS_EXAM_LEVEL_DANGER                   6
#define IDS_EXAM_TEXT_DANGER                    7
#define IDS_EXAM_LEVEL_RISK                     8
#define IDS_EXAM_TEXT_RISK                      9
#define IDS_EXAM_LEVEL_SAFE                     10
#define IDS_EXAM_TEXT_SAFE                      11
#define IDS_SCANNED_FILE_COUNT_FORMAT           12
#define IDS_VIRUS_COUNT_FORMAT                  13
#define IDS_SCANNED_TIME_COUNT_FORMAT           14
#define IDS_EXAM_LEVEL_CANCELED                 15
#define IDS_EXAM_TEXT_CANCELED                  16
#define IDS_MSGBOX_BUTTON_XML                   17
#define IDS_MSGBOX_OK                           18
#define IDS_MSGBOX_CANCEL                       19
#define IDS_MSGBOX_ABORT                        20
#define IDS_MSGBOX_RETRY                        21
#define IDS_MSGBOX_IGNORE                       22
#define IDS_MSGBOX_YES                          23
#define IDS_MSGBOX_NO                           24
#define IDS_MSGBOX_CONTINUE                     25
#define IDS_MSGBOX_BUTTON_DIV                   26
#define IDS_FOUND_VIRUS_TITLE                   27
#define IDS_FILE_STATE_NOCLEAN                  28
#define IDS_FILE_STATE_DELETESUCCESS            29
#define IDS_FILE_STATE_REPAIRSUCCESS            30
#define IDS_FILE_STATE_DELETEFAILED             31
#define IDS_FILE_STATE_REPAIRFAILED             32
#define IDS_FILE_STATE_DELETEREBOOT             33
#define IDS_FILE_STATE_REPAIRREBOOT             34
#define IDS_FILE_STATE_NEEDCLEAN                35
#define IDS_FILE_STATE_CANNOTCLEAN              36
#define IDS_FILE_STATE_SAFE                     37
#define IDS_FILE_STATE_SCANFAILURE              38
#define IDS_FOUND_VIRUS_ALL_CLEANED_TITLE       39
#define IDS_FOUND_VIRUS_NEED_REBOOT_TITLE       40
#define IDS_REMAIN_VIRUS_COUNT_FORMAT           41
#define IDS_SCANNING_STEP_FORMAT                42
#define IDS_PROTECTION_STATUS_ON                43
#define IDS_PROTECTION_STATUS_OFF               44
#define IDS_VIRSCAN_LAST_SCAN_LESS_THAN_1MIN    45
#define IDS_VIRSCAN_LAST_SCAN_MINUTES           46
#define IDS_VIRSCAN_LAST_SCAN_HOURS             47
#define IDS_VIRSCAN_LAST_SCAN_DAYS              48
#define IDS_VIRSCAN_LAST_SCAN_INFO_RICH_TEXT    49
#define IDS_VIRSCAN_QUARANTINE_COUNT            50
#define IDS_VIRSCAN_REPORTED_UNKNOWN_COUNT      51
#define IDS_VIRSCAN_FOUND_UNKNOWN_NOTICE_CONTENT    52
// #define IDS_VIRSCAN_DYNAMIC_NOTICE_NEED_UPDATE  53
#define IDS_VIRSCAN_DYNAMIC_NOTICE_FAST_SCAN    54
// #define IDS_VIRSCAN_DYNAMIC_NOTICE_FULL_SCAN    55
#define IDS_EXAM_TEXT_NOT_SET_AUTO_EXAM         56
#define IDS_EXAM_TEXT_EXAM_NOW                  57
#define IDS_VIRSCAN_SETTING_AUTOCLEAN           58
#define IDS_VIRSCAN_SETTING_MANUALCLEAN         59
#define IDS_EXAM_TEXT_EXAM_AGAIN                60
#define IDS_PROTECTION_LOG_COUNT                61
#define IDS_FOUND_VIRUS_REMAINED_TITLE          62
#define IDS_EXAM_TEXT_CANCELED_SAFE				63
#define IDS_NOT_FOUND_VIRUS_TITLE               64
#define IDS_EXAM_CANCEL_INFO_SAFE				65
#define IDS_EXAM_CANCEL_INFO_UNSAFE				66
#define IDS_EXAM_SCAN_INFO_SAFE					67
#define IDS_EXAM_SCAN_INFO_RASIK				68
#define IDS_EXAM_SCAN_INFO_DANGER				69
#define IDS_EXAM_SCAN_HISTORY_ERROR				70


//�������
#define IDC_LIST_SOFTMGR					8100
#define IDC_EDIT_SOFTMGR					8101
#define IDC_SETTING_SOFTMGR					8102
#define IDC_REFRESH_SOFTMGR					8103
#define IDC_QUERY_SOFTMGR					8104
#define IDC_SETTING_PNG_SOFTMGR				8105
#define IDC_REFRESH_PNG_SOFTMGR				8106
#define IDC_DOWNLOADMGR_SOFTMGR				8107
#define IDC_BATCHDOWN_SOFTMGR				8108
#define IDC_TEXT_SELECTALL					8109
#define IDC_TEXT_SELECTFREENOPLUG			8110
#define IDC_TEXT_DETAIL_DOWNLAOD			8111
#define IDC_SHOW_NOPLUG_SOFTMGR				8112
#define IDC_CHECKBOX_SELECT_FREESOFT		8113
#define IDC_DETAILBK_SOFTMGR				8114
#define IDC_DLG_INSTALL_SOFTMGR				8115
#define IDC_DLG_DETAIL_SOFTMGR				8116
#define IDS_TEXT_FORMAT_DETAIL_SOFTMGR		8117
#define IDS_TEXT_NAME_DETAIL_SOFTMGR		8118
#define IDS_BACK_DETAIL_SOFTMGR				8119
#define IDS_INFO_FORMAT_SOFTMGR				8120
#define IDS_INFO_SOFTMGR					8121
#define IDG_ICON_DETAIL_SOFTMGR				8122
#define IDS_FREE_DETAIL_SOFTMGR				8123
#define IDS_PLUG_DETAIL_SOFTMGR				8124
#define IDS_FITAYATEM_DETAIL_SOFTMGR		8125
#define IDC_DOWN_BTN_DETAIL_SOFTMGR			8126
#define IDC_IE_DETAIL_SOFTMGR				8127
#define IDC_TYPES_LEFT_SOFTMGR				8128
#define IDC_ICON_FREE_DETAIL_SOFTMGR		8129
#define IDC_ICON_PLUG_DETAIL_SOFTMGR		8130
#define IDC_ICON_FITAYATEM_DETAIL_SOFTMGR	8131
#define IDC_TAB_SOFTMGR						8132
#define IDC_FREEBACK_SOFTMGR				8133
#define IDR_FIND_QUERY_SOFTMGR				8134
#define IDC_BACK_QUERY_SOFTMGR				8135
#define IDS_TIP_QUERY_SOFTMGR				8136
#define IDS_NOFIND_QUERY_SOFTMGR			8137
#define IDS_NOFIND_TIP_SOFTMGR				8138
#define IDS_RESULT_QUERY_SOFTMGR			8139
#define IDS_NO_QUERY_SOFTMGR				8140
#define IDS_NOFIND_TIP2_SOFTMGR				8141
#define IDS_LINK_TIP2_SOFTMGR				8142
#define IDS_LINK_SUBMIT_SOFTMGR				8143
#define IDG_LOAD_TIP_SOFTMGR				8144
#define IDC_LOAD_PIC_SOFTMGR				8145
#define IDC_LOADINFO_PIC_SOFTMGR			8146
#define IDC_LOADINFO_PIC1_SOFTMGR			8147
#define IDC_LOAD_PIC1_SOFTMGR				8148
#define IDC_LOAD_TIPPIC_SOFTMGR				8149
#define IDG_QUERY_BAR_SOFTMGR				8150   //�������

#define IDC_DLG_PROG1						8201
#define	IDC_PROG_INIT1						8202
#define IDC_DLG_PROG2						8205
#define	IDC_PROG_INIT2						8206
#define IDC_LOAD_TIP1						8207
#define IDC_LOAD_TIP2						8208

// ���ж����ҳ
#define IDC_DLG_UNI_STARTPAGE				8210
#define IDC_TXT_UNI_TITLE					8211
#define IDC_BTN_UNI_ALL						8212
#define IDC_BTN_UNI_DESK					8213
#define IDC_BTN_UNI_STARTMENU				8214
#define IDC_BTN_UNI_QUICKLAN				8215
#define IDC_BTN_UNI_PROCESS					8216
#define IDC_BTN_UNI_TRAY					8217

#define IDC_DLG_UNI_CONTENT					8220	

#define IDC_LNK_STARTPAGE					8231
#define IDC_LNK_CUR_PAGE					8233
#define IDC_TXT_DETAIL_ARROW				8234
#define IDC_LNK_DETAIL						8235
#define IDC_IMG_GOBACK						8236
#define IDC_LNK_GOBACK						8237
#define IDC_BTN_SORT_BY_SPACE				8238
#define IDC_BTN_SORT_BY_TIME				8239
#define IDC_TXT_SPACE_CAP					8240
#define IDC_TXT_TIME_CAP					8241
#define IDC_IMG_SPACE_ARROW					8242
#define IDC_IMG_TIME_ARROW					8243
#define IDC_UNINSTALL_QUERYBACK_IMG			8244
#define IDC_UNINSTALL_QUERYBACK_LNK			8245


// ���ж��
#define	IDC_UNINSTALL_TYPELIST				9000
#define IDC_UNINSTALL_SOFT_DLG				9100
#define IDC_UNINSTALL_SOFTLIST				9101
#define	IDC_DLG_SEARCH_HINT					9102
#define IDC_BTN_SEARCH_GOBACK				9103
#define IDC_TXT_SEARCH_DESC					9104
#define IDC_TXT_SEARCH_DESC_FMT				9920
#define IDC_DLG_SEARCH_CONTENT				9105
#define IDC_TXT_SEARCH_CON1					9106
#define IDC_TXT_SEARCH_CON2					9107
#define IDC_TXT_SEARCH_CON3					9108

#define IDC_UNINSTALL_SOFT_DETAIL			9200
#define IDC_BTN_UNINSTALL_DETAIL_GOBACK		9201
#define	IDC_LBL_UNINSTALL_SOFT_VIEWING		9202
#define IDC_ICO_UNINSTALL_SOFT				9203
#define IDC_LBL_UNINSTALL_SOFT_NAME			9204
#define IDC_LINK_UNINSTALL_OPENDIR			9205
#define IDC_BTN_UNINSTALL_DO				9206
#define IDC_IE_UNINSTALL					9207
#define IDC_LINK_WHAT_TO_UNINSTALL			9301
#define IDC_LBL_UNINSTALL_TOTAL				9302
#define IDC_LINK_RPT_CANT_UNINSTALL			9303
#define IDC_LNK_CALC_SPACE					9304
#define IDC_TXT_CALCING_SPACE				9305
#define IDC_TXT_CALCING_PERCENT				9306
#define IDC_LNK_CALC_CANCEL					9307
#define IDC_LNK_WATCH_LASTUSE				9310

#define IDS_LBL_UNINSTALL_SOFT_FMT			9901
#define IDS_LBL_UNINSTALL_SOFT_N_FMT		9902
#define IDS_LBL_UNINSTALL_TOTAL_FMT			9912


// ǿ����ɨ
#define IDC_BTN_DEL_SELECTED				10001
#define	IDC_PROG_POWERSWEEP					10002
#define IDC_TXT_INTRO_PS					10003
#define	IDC_TREE_PS_ITEMS					10004
#define IDC_TXT_CLEAN_OVER					10005
#define IDS_TXT_INTRO_PS_FMT				9903
#define IDC_TXT_CLEAN_OVER_FMT				9904
#define IDC_TEXT_TIP_POWERSWEEP				9905
#define IDC_TEXT_TITTLE_POWERSWEEP			9906

//��������

#define ID_ONEKEY_CONFIG_BASE               11000
#define ID_IMG_ONEKEY_CONFIG_GREENTIP       (ID_ONEKEY_CONFIG_BASE+1)
#define ID_IMG_ONEKEY_CONFIG_OK             (ID_ONEKEY_CONFIG_BASE+2)
#define ID_IMG_ONEKEY_CONFIG_CANCEL         (ID_ONEKEY_CONFIG_BASE+3)
#define ID_IMG_ONEKEY_CONFIG_RECOMMAND      (ID_ONEKEY_CONFIG_BASE+4)
#define ID_IMG_ONEKEY_CONFIG_SELALL         (ID_ONEKEY_CONFIG_BASE+5)


//����ģ������

#define ID_UPLIVE_COMFIG_BASE				12000
#define IDC_TXT_PRODUCT_VERSION				(ID_UPLIVE_COMFIG_BASE+1)
#define IDC_IMG_UPLIVE_STATE				(ID_UPLIVE_COMFIG_BASE+5)
#define IDC_TXT_UPLIVE_CHECKING				(ID_UPLIVE_COMFIG_BASE+2)
#define IDC_TXT_UPLIVE_ALREADY				(ID_UPLIVE_COMFIG_BASE+3)
#define IDC_TXT_UPLIVE_UPPING				(ID_UPLIVE_COMFIG_BASE+4)
#define IDC_LNK_UPLIVE_UPDATE				(ID_UPLIVE_COMFIG_BASE+6)
#define IDC_TXT_UPLIVE_NEEDUP				(ID_UPLIVE_COMFIG_BASE+10)
