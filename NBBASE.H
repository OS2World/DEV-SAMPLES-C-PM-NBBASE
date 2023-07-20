/*********************************************************************
 *                                                                   *
 * MODULE NAME :  nbbase.h               			     *
 * DATE WRITTEN:  10-17-92                                           *
 *                                                                   *
 * DESCRIPTION:                                                      *
 *                                                                   *
 *  Common definitions and function prototypes for NBBASE.EXE        *
 *                                                                   *
 * HISTORY:                                                          *
 *                                                                   *
 *  10-17-92 - File Created                                          *
 *  12-04-92 - Got rid of ulPageId and hwndDlg from NBPAGE structure *
 *                                                                   *
 *                                                                   *
 *********************************************************************/

#define PMERR_WIN_DEBUGMSG                  0x1037

#define ID_NBWINFRAME           1
#define ID_NB                   10

#define IDD_PAGE1               1000
#define EF_1                    1001

#define IDD_PAGE2               2000

#define IDD_PAGE2A              2100
#define EF_2A                   2101

#define IDD_PAGE2B              2200
#define EF_2B                   2201

#define IDD_PAGE3               3000
#define EF_3                    3001

#define DEBUG_FILENAME          "nbbase.dbg"

#define NOTEBOOK_WINCLASS       "NoteBookSample"

#define PROGRAM_TITLE           (PCSZ) "Notebook Control Sample Program"

#define HABERR( hab )           (ERRORIDERROR( WinGetLastError( hab ) ))

#define ANCHOR( hwnd )          (WinQueryAnchorBlock( hwnd ))

#define HWNDERR( hwnd )         \
            (ERRORIDERROR( WinGetLastError( WinQueryAnchorBlock( hwnd ) ) ))

#define INSTDATA( hwnd )        (WinQueryWindowPtr( hwnd, 0 ))

#define PARENT( hwnd )          (WinQueryWindow( hwnd, QW_PARENT ))

#define GRANDPARENT( hwnd )   (WinQueryWindow( WinQueryWindow(hwnd, QW_PARENT)))

typedef struct _NBPAGE              // VARIABLES USED FOR A NOTEBOOK PAGE
{
    PFNWP    pfnwpDlg;              // Window procedure address for the dialog
    PSZ      szStatusLineText;      // Text to go on status line
    PSZ      szTabText;             // Text to go on major tab
    ULONG    idDlg;                 // ID of the dialog box for this page
    ULONG    idFocus;               // ID of the control to get the focus first
    BOOL     fParent;               // Is this a Parent page with minor pages
    USHORT   usTabType;             // BKA_MAJOR or BKA_MINOR

} NBPAGE, *PNBPAGE;

/****************************************************************************
 *                        E N D   O F   S O U R C E                         *
 ****************************************************************************/
