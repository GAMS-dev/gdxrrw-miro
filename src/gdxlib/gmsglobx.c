#include "p3io.h"
#include "p3platform.h"
#include "system_p3.h"
#include "p3utils.h"
#include "p3process.h"
#include "p3library.h"
#include "exceptions.h"
#include "math_p3.h"
#include "p3ieeefp.h"
#include "sysutils_p3.h"
#include "p3threads.h"
#include "idglobal_p3.h"
#include "gmsglobx.h"

typedef SYSTEM_uint8 _sub_1GMSGLOBX;
typedef _P3STR_31 _arr_0GMSGLOBX[22];
static _arr_0GMSGLOBX GMSGLOBX_setconstantskeys = {{10,'M','o','d','e','l','T','y','p','e','s'}, {14,'G','a','m','s','P','a','r','a','m','e','t','e','r','s'}, {21,'G','a','m','s','P','a','r','a','m','e','t','e','r','S','y','n','o','n','y','m','s'}, {23,'G','a','m','s','P','a','r','a','m','e','t','e','r','S','y','n','o','n','y','m','M','a','p'}, {13,'D','o','l','l','a','r','O','p','t','i','o','n','s'}, {13,'G','a','m','s','F','u','n','c','t','i','o','n','s'}, {14,'S','y','s','t','e','m','S','u','f','f','i','x','e','s'}, {5,'E','m','p','t','y'}, {17,'P','r','e','d','e','f','i','n','e','d','S','y','m','b','o','l','s'}, {19,'G','U','S','S','M','o','d','e','l','A','t','t','r','i','b','u','t','e','s'}, {12,'S','e','t','C','o','n','s','t','a','n','t','s'}, {11,'S','o','l','v','e','r','N','a','m','e','s'}, {9,'P','l','a','t','f','o','r','m','s'}, {7,'V','e','n','d','o','r','s'}, {10,'C','o','m','p','o','n','e','n','t','s'}, {9,'C','l','i','p','C','o','d','e','s'}, {12,'G','a','m','s','L','i','c','e','n','s','e','s'}, {16,'G','a','m','s','L','i','c','e','n','s','e','T','y','p','e','s'}, {18,'C','o','m','p','o','n','e','n','t','S','o','l','v','e','r','M','a','p'}, {16,'C','l','i','p','C','o','m','p','o','n','e','n','t','M','a','p'}, {17,'S','o','l','v','e','r','P','l','a','t','f','o','r','m','M','a','p'}, {21,'S','o','l','v','e','r','T','y','p','e','P','l','a','t','f','o','r','m','M','a','p'}};

Function(SYSTEM_ansichar *) GMSGLOBX_setconstantstext(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\012ModelTypes"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\016GamsParameters"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\025GamsParameterSynonyms"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\027GamsParameterSynonymMap"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\015DollarOptions"));
      break;
    case 6: 
      _P3strcpy(result,_len_ret,_P3str1("\015GamsFunctions"));
      break;
    case 7: 
      _P3strcpy(result,_len_ret,_P3str1("\016SystemSuffixes"));
      break;
    case 8: 
      _P3strcpy(result,_len_ret,_P3str1("\005Empty"));
      break;
    case 9: 
      _P3strcpy(result,_len_ret,_P3str1("\021PredefinedSymbols"));
      break;
    case 10: 
      _P3strcpy(result,_len_ret,_P3str1("\023GUSSModelAttributes"));
      break;
    case 11: 
      _P3strcpy(result,_len_ret,_P3str1("\014SetConstants"));
      break;
    case 12: 
      _P3strcpy(result,_len_ret,_P3str1("\013SolverNames"));
      break;
    case 13: 
      _P3strcpy(result,_len_ret,_P3str1("\011Platforms"));
      break;
    case 14: 
      _P3strcpy(result,_len_ret,_P3str1("\007Vendors"));
      break;
    case 15: 
      _P3strcpy(result,_len_ret,_P3str1("\012Components"));
      break;
    case 16: 
      _P3strcpy(result,_len_ret,_P3str1("\011ClipCodes"));
      break;
    case 17: 
      _P3strcpy(result,_len_ret,_P3str1("\014GamsLicenses"));
      break;
    case 18: 
      _P3strcpy(result,_len_ret,_P3str1("\020GamsLicenseTypes"));
      break;
    case 19: 
      _P3strcpy(result,_len_ret,_P3str1("\022ComponentSolverMap"));
      break;
    case 20: 
      _P3strcpy(result,_len_ret,_P3str1("\020ClipComponentMap"));
      break;
    case 21: 
      _P3strcpy(result,_len_ret,_P3str1("\021SolverPlatformMap"));
      break;
    case 22: 
      _P3strcpy(result,_len_ret,_P3str1("\025SolverTypePlatformMap"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* setconstantstext */

Function(SYSTEM_integer ) GMSGLOBX_setconstantslookup(
  const SYSTEM_ansichar *_ftmp1)
{
  SYSTEM_shortstring s;
  SYSTEM_integer result;

  _P3strcpy(s,255,_ftmp1);
  for (result = 1;result <= (SYSTEM_int32)
    GMSGLOBX_maxsetconstants;++result) {
    if (SYSUTILS_P3_sametext(GMSGLOBX_setconstantskeys[result - 1],
      s)) 
      return result;
  }
  result = 0;
  return result;
}  /* setconstantslookup */

Function(SYSTEM_ansichar *) GMSGLOBX_setconstantskey(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  if (n >= 1 && n <= 22) { 
    _P3strcpy(result,_len_ret,GMSGLOBX_setconstantskeys[n - 1]);
  } else 
    _P3strclr(result);
  return result;
}  /* setconstantskey */
typedef SYSTEM_uint8 _sub_3GMSGLOBX;
typedef _P3STR_15 _arr_2GMSGLOBX[151];
static _arr_2GMSGLOBX GMSGLOBX_solvernameskeys = {{2,'D','E'}, {2,'L','S'}, {2,'X','A'}, {8,'A','N','T','I','G','O','N','E'}, {5,'B','A','R','O','N'}, {6,'C','O','N','O','P','T'}, {5,'C','P','L','E','X'}, {11,'C','P','O','P','T','I','M','I','Z','E','R'}, {5,'D','E','C','I','S'}, {6,'D','I','C','O','P','T'}, {8,'A','L','P','H','A','E','C','P'}, {5,'M','P','S','G','E'}, {7,'G','L','O','M','I','Q','O'}, {6,'G','U','R','O','B','I'}, {5,'I','P','O','P','T'}, {6,'K','N','I','T','R','O'}, {3,'L','G','O'}, {5,'L','I','N','D','O'}, {11,'L','O','C','A','L','S','O','L','V','E','R'}, {5,'M','I','N','O','S'}, {5,'M','S','N','L','P'}, {8,'O','D','H','C','P','L','E','X'}, {4,'P','A','T','H'}, {3,'S','B','B'}, {4,'S','C','I','P'}, {5,'S','N','O','P','T'}, {6,'X','P','R','E','S','S'}, {6,'S','e','c','u','r','e'}, {5,'B','D','M','L','P'}, {5,'M','I','L','E','S'}, {5,'M','O','S','E','K'}, {4,'A','M','P','L'}, {6,'B','A','R','O','N','2'}, {6,'B','D','M','L','P','D'}, {5,'B','E','N','C','H'}, {6,'B','O','N','M','I','N'}, {3,'C','B','C'}, {7,'C','O','N','O','P','T','D'}, {7,'C','O','N','O','P','T','4'}, {7,'C','O','N','V','E','R','T'}, {8,'C','O','N','V','E','R','T','D'}, {7,'C','O','U','E','N','N','E'}, {6,'C','P','L','E','X','D'}, {6,'D','E','C','I','S','C'}, {6,'D','E','C','I','S','M'}, {7,'D','I','C','O','P','T','D'}, {8,'E','X','A','M','I','N','E','R'}, {9,'E','X','A','M','I','N','E','R','2'}, {7,'G','A','M','S','C','H','K'}, {10,'S','C','E','N','S','O','L','V','E','R'}, {4,'J','A','M','S'}, {7,'K','E','S','T','R','E','L'}, {9,'K','N','I','T','R','O','N','E','W'}, {4,'L','G','O','D'}, {11,'L','I','N','D','O','G','L','O','B','A','L'}, {5,'L','I','N','G','O'}, {13,'L','O','C','A','L','S','O','L','V','E','R','7','0'}, {7,'M','I','N','O','S','5','5'}, {9,'Q','U','A','D','M','I','N','O','S'}, {8,'M','P','E','C','D','U','M','P'}, {5,'N','L','P','E','C'}, {8,'O','s','i','C','p','l','e','x'}, {9,'O','s','i','G','u','r','o','b','i'}, {8,'O','s','i','M','o','s','e','k'}, {9,'O','s','i','X','p','r','e','s','s'}, {7,'P','A','T','H','N','L','P'}, {5,'P','A','T','H','C'}, {6,'P','A','T','H','V','I'}, {5,'P','Y','O','M','O'}, {6,'S','E','L','K','I','E'}, {11,'S','O','L','V','E','E','N','G','I','N','E'}, {6,'S','o','p','l','e','x'}, {3,'A','S','K'}, {7,'B','I','B','2','G','M','S'}, {7,'C','H','K','4','U','P','D'}, {8,'C','H','O','L','E','S','K','Y'}, {7,'C','S','V','2','G','D','X'}, {10,'E','I','G','E','N','V','A','L','U','E'}, {11,'E','I','G','E','N','V','E','C','T','O','R'}, {9,'E','N','D','E','C','R','Y','P','T'}, {12,'F','I','N','D','T','H','I','S','G','A','M','S'}, {7,'G','A','M','S','I','D','E'}, {10,'G','D','X','2','A','C','C','E','S','S'}, {10,'G','D','X','2','S','Q','L','I','T','E'}, {8,'G','D','X','2','V','E','D','A'}, {7,'G','D','X','2','X','L','S'}, {7,'G','D','X','C','O','P','Y'}, {7,'G','D','X','D','I','F','F'}, {7,'G','D','X','D','U','M','P'}, {8,'G','D','X','M','E','R','G','E'}, {6,'G','D','X','M','R','W'}, {7,'G','D','X','R','A','N','K'}, {9,'G','D','X','R','E','N','A','M','E'}, {6,'G','D','X','R','R','W'}, {8,'G','D','X','T','R','O','L','L'}, {9,'G','D','X','V','I','E','W','E','R'}, {6,'G','D','X','X','R','W'}, {9,'G','M','S','P','Y','T','H','O','N'}, {6,'G','M','S','Z','I','P'}, {7,'G','M','S','Z','L','I','B'}, {12,'H','A','R','U','T','I','L','I','T','I','E','S'}, {7,'H','E','X','D','U','M','P'}, {6,'I','N','V','E','R','T'}, {8,'M','C','F','I','L','T','E','R'}, {7,'M','D','B','2','G','M','S'}, {9,'M','O','D','E','L','2','T','E','X'}, {7,'M','P','S','2','G','M','S'}, {10,'M','S','A','P','P','A','V','A','I','L'}, {7,'S','C','E','N','R','E','D'}, {8,'S','C','E','N','R','E','D','2'}, {12,'S','H','E','L','L','E','X','E','C','U','T','E'}, {7,'S','Q','L','2','G','M','S'}, {6,'S','T','U','D','I','O'}, {5,'T','o','o','l','s'}, {7,'X','L','S','2','G','M','S'}, {7,'X','L','S','D','U','M','P'}, {7,'X','L','S','T','A','L','K'}, {4,'G','A','M','S'}, {9,'D','o','c','u','m','e','n','t','s'}, {4,'G','R','I','D'}, {6,'L','S','T','L','I','B'}, {12,'M','o','d','e','l','L','i','b','r','a','r','y'}, {11,'T','e','s','t','L','i','b','r','a','r','y'}, {11,'D','a','t','a','L','i','b','r','a','r','y'}, {10,'F','i','n','a','n','c','e','L','i','b'}, {10,'E','M','P','L','i','b','r','a','r','y'}, {10,'A','P','I','L','i','b','r','a','r','y'}, {12,'N','o','n','l','i','n','e','a','r','L','i','b'}, {12,'P','S','O','p','t','L','i','b','r','a','r','y'}, {6,'g','d','x','A','P','I'}, {6,'g','m','d','A','P','I'}, {7,'j','o','a','t','A','P','I'}, {9,'o','p','t','i','o','n','A','P','I'}, {7,'g','a','m','s','A','P','I'}, {9,'i','d','x','g','d','x','A','P','I'}, {7,'g','a','m','s','C','P','P'}, {10,'g','a','m','s','D','o','t','N','e','t'}, {10,'g','a','m','s','P','y','t','h','o','n'}, {8,'g','a','m','s','J','a','v','a'}, {6,'I','P','O','P','T','H'}, {7,'B','O','N','M','I','N','H'}, {7,'C','O','N','O','P','T','3'}, {10,'C','O','I','N','B','O','N','M','I','N'}, {7,'C','O','I','N','C','B','C'}, {11,'C','O','I','N','C','O','U','E','N','N','E'}, {9,'C','O','I','N','I','P','O','P','T'}, {8,'C','O','I','N','S','C','I','P'}, {6,'L','O','G','M','I','P'}, {6,'M','I','L','E','S','E'}, {6,'M','I','N','O','S','5'}, {9,'O','S','I','S','O','P','L','E','X'}};

Function(SYSTEM_ansichar *) GMSGLOBX_solvernamestext(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\002DE"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\002LS"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\002XA"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\010ANTIGONE"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\005BARON"));
      break;
    case 6: 
      _P3strcpy(result,_len_ret,_P3str1("\006CONOPT"));
      break;
    case 7: 
      _P3strcpy(result,_len_ret,_P3str1("\005CPLEX"));
      break;
    case 8: 
      _P3strcpy(result,_len_ret,_P3str1("\013CPOPTIMIZER"));
      break;
    case 9: 
      _P3strcpy(result,_len_ret,_P3str1("\005DECIS"));
      break;
    case 10: 
      _P3strcpy(result,_len_ret,_P3str1("\006DICOPT"));
      break;
    case 11: 
      _P3strcpy(result,_len_ret,_P3str1("\010ALPHAECP"));
      break;
    case 12: 
      _P3strcpy(result,_len_ret,_P3str1("\005MPSGE"));
      break;
    case 13: 
      _P3strcpy(result,_len_ret,_P3str1("\007GLOMIQO"));
      break;
    case 14: 
      _P3strcpy(result,_len_ret,_P3str1("\006GUROBI"));
      break;
    case 15: 
      _P3strcpy(result,_len_ret,_P3str1("\005IPOPT"));
      break;
    case 16: 
      _P3strcpy(result,_len_ret,_P3str1("\006KNITRO"));
      break;
    case 17: 
      _P3strcpy(result,_len_ret,_P3str1("\003LGO"));
      break;
    case 18: 
      _P3strcpy(result,_len_ret,_P3str1("\005LINDO"));
      break;
    case 19: 
      _P3strcpy(result,_len_ret,_P3str1("\013LOCALSOLVER"));
      break;
    case 20: 
      _P3strcpy(result,_len_ret,_P3str1("\005MINOS"));
      break;
    case 21: 
      _P3strcpy(result,_len_ret,_P3str1("\005MSNLP"));
      break;
    case 22: 
      _P3strcpy(result,_len_ret,_P3str1("\010ODHCPLEX"));
      break;
    case 23: 
      _P3strcpy(result,_len_ret,_P3str1("\004PATH"));
      break;
    case 24: 
      _P3strcpy(result,_len_ret,_P3str1("\003SBB"));
      break;
    case 25: 
      _P3strcpy(result,_len_ret,_P3str1("\004SCIP"));
      break;
    case 26: 
      _P3strcpy(result,_len_ret,_P3str1("\005SNOPT"));
      break;
    case 27: 
      _P3strcpy(result,_len_ret,_P3str1("\006XPRESS"));
      break;
    case 28: 
      _P3strcpy(result,_len_ret,_P3str1("\006Secure"));
      break;
    case 29: 
      _P3strcpy(result,_len_ret,_P3str1("\005BDMLP"));
      break;
    case 30: 
      _P3strcpy(result,_len_ret,_P3str1("\005MILES"));
      break;
    case 31: 
      _P3strcpy(result,_len_ret,_P3str1("\005MOSEK"));
      break;
    case 32: 
      _P3strcpy(result,_len_ret,_P3str1("\004AMPL"));
      break;
    case 33: 
      _P3strcpy(result,_len_ret,_P3str1("\006BARON2"));
      break;
    case 34: 
      _P3strcpy(result,_len_ret,_P3str1("\006BDMLPD"));
      break;
    case 35: 
      _P3strcpy(result,_len_ret,_P3str1("\005BENCH"));
      break;
    case 36: 
      _P3strcpy(result,_len_ret,_P3str1("\006BONMIN"));
      break;
    case 37: 
      _P3strcpy(result,_len_ret,_P3str1("\003CBC"));
      break;
    case 38: 
      _P3strcpy(result,_len_ret,_P3str1("\007CONOPTD"));
      break;
    case 39: 
      _P3strcpy(result,_len_ret,_P3str1("\007CONOPT4"));
      break;
    case 40: 
      _P3strcpy(result,_len_ret,_P3str1("\007CONVERT"));
      break;
    case 41: 
      _P3strcpy(result,_len_ret,_P3str1("\010CONVERTD"));
      break;
    case 42: 
      _P3strcpy(result,_len_ret,_P3str1("\007COUENNE"));
      break;
    case 43: 
      _P3strcpy(result,_len_ret,_P3str1("\006CPLEXD"));
      break;
    case 44: 
      _P3strcpy(result,_len_ret,_P3str1("\006DECISC"));
      break;
    case 45: 
      _P3strcpy(result,_len_ret,_P3str1("\006DECISM"));
      break;
    case 46: 
      _P3strcpy(result,_len_ret,_P3str1("\007DICOPTD"));
      break;
    case 47: 
      _P3strcpy(result,_len_ret,_P3str1("\010EXAMINER"));
      break;
    case 48: 
      _P3strcpy(result,_len_ret,_P3str1("\011EXAMINER2"));
      break;
    case 49: 
      _P3strcpy(result,_len_ret,_P3str1("\007GAMSCHK"));
      break;
    case 50: 
      _P3strcpy(result,_len_ret,_P3str1("\012SCENSOLVER"));
      break;
    case 51: 
      _P3strcpy(result,_len_ret,_P3str1("\004JAMS"));
      break;
    case 52: 
      _P3strcpy(result,_len_ret,_P3str1("\007KESTREL"));
      break;
    case 53: 
      _P3strcpy(result,_len_ret,_P3str1("\011KNITRONEW"));
      break;
    case 54: 
      _P3strcpy(result,_len_ret,_P3str1("\004LGOD"));
      break;
    case 55: 
      _P3strcpy(result,_len_ret,_P3str1("\013LINDOGLOBAL"));
      break;
    case 56: 
      _P3strcpy(result,_len_ret,_P3str1("\005LINGO"));
      break;
    case 57: 
      _P3strcpy(result,_len_ret,_P3str1("\015LOCALSOLVER70"));
      break;
    case 58: 
      _P3strcpy(result,_len_ret,_P3str1("\007MINOS55"));
      break;
    case 59: 
      _P3strcpy(result,_len_ret,_P3str1("\011QUADMINOS"));
      break;
    case 60: 
      _P3strcpy(result,_len_ret,_P3str1("\010MPECDUMP"));
      break;
    case 61: 
      _P3strcpy(result,_len_ret,_P3str1("\005NLPEC"));
      break;
    case 62: 
      _P3strcpy(result,_len_ret,_P3str1("\010OsiCplex"));
      break;
    case 63: 
      _P3strcpy(result,_len_ret,_P3str1("\011OsiGurobi"));
      break;
    case 64: 
      _P3strcpy(result,_len_ret,_P3str1("\010OsiMosek"));
      break;
    case 65: 
      _P3strcpy(result,_len_ret,_P3str1("\011OsiXpress"));
      break;
    case 66: 
      _P3strcpy(result,_len_ret,_P3str1("\007PATHNLP"));
      break;
    case 67: 
      _P3strcpy(result,_len_ret,_P3str1("\005PATHC"));
      break;
    case 68: 
      _P3strcpy(result,_len_ret,_P3str1("\006PATHVI"));
      break;
    case 69: 
      _P3strcpy(result,_len_ret,_P3str1("\005PYOMO"));
      break;
    case 70: 
      _P3strcpy(result,_len_ret,_P3str1("\006SELKIE"));
      break;
    case 71: 
      _P3strcpy(result,_len_ret,_P3str1("\013SOLVEENGINE"));
      break;
    case 72: 
      _P3strcpy(result,_len_ret,_P3str1("\006Soplex"));
      break;
    case 73: 
      _P3strcpy(result,_len_ret,_P3str1("\003ASK"));
      break;
    case 74: 
      _P3strcpy(result,_len_ret,_P3str1("\007BIB2GMS"));
      break;
    case 75: 
      _P3strcpy(result,_len_ret,_P3str1("\007CHK4UPD"));
      break;
    case 76: 
      _P3strcpy(result,_len_ret,_P3str1("\010CHOLESKY"));
      break;
    case 77: 
      _P3strcpy(result,_len_ret,_P3str1("\007CSV2GDX"));
      break;
    case 78: 
      _P3strcpy(result,_len_ret,_P3str1("\012EIGENVALUE"));
      break;
    case 79: 
      _P3strcpy(result,_len_ret,_P3str1("\013EIGENVECTOR"));
      break;
    case 80: 
      _P3strcpy(result,_len_ret,_P3str1("\011ENDECRYPT"));
      break;
    case 81: 
      _P3strcpy(result,_len_ret,_P3str1("\014FINDTHISGAMS"));
      break;
    case 82: 
      _P3strcpy(result,_len_ret,_P3str1("\007GAMSIDE"));
      break;
    case 83: 
      _P3strcpy(result,_len_ret,_P3str1("\012GDX2ACCESS"));
      break;
    case 84: 
      _P3strcpy(result,_len_ret,_P3str1("\012GDX2SQLITE"));
      break;
    case 85: 
      _P3strcpy(result,_len_ret,_P3str1("\010GDX2VEDA"));
      break;
    case 86: 
      _P3strcpy(result,_len_ret,_P3str1("\007GDX2XLS"));
      break;
    case 87: 
      _P3strcpy(result,_len_ret,_P3str1("\007GDXCOPY"));
      break;
    case 88: 
      _P3strcpy(result,_len_ret,_P3str1("\007GDXDIFF"));
      break;
    case 89: 
      _P3strcpy(result,_len_ret,_P3str1("\007GDXDUMP"));
      break;
    case 90: 
      _P3strcpy(result,_len_ret,_P3str1("\010GDXMERGE"));
      break;
    case 91: 
      _P3strcpy(result,_len_ret,_P3str1("\006GDXMRW"));
      break;
    case 92: 
      _P3strcpy(result,_len_ret,_P3str1("\007GDXRANK"));
      break;
    case 93: 
      _P3strcpy(result,_len_ret,_P3str1("\011GDXRENAME"));
      break;
    case 94: 
      _P3strcpy(result,_len_ret,_P3str1("\006GDXRRW"));
      break;
    case 95: 
      _P3strcpy(result,_len_ret,_P3str1("\010GDXTROLL"));
      break;
    case 96: 
      _P3strcpy(result,_len_ret,_P3str1("\011GDXVIEWER"));
      break;
    case 97: 
      _P3strcpy(result,_len_ret,_P3str1("\006GDXXRW"));
      break;
    case 98: 
      _P3strcpy(result,_len_ret,_P3str1("\011GMSPYTHON"));
      break;
    case 99: 
      _P3strcpy(result,_len_ret,_P3str1("\006GMSZIP"));
      break;
    case 100: 
      _P3strcpy(result,_len_ret,_P3str1("\007GMSZLIB"));
      break;
    case 101: 
      _P3strcpy(result,_len_ret,_P3str1("\014HARUTILITIES"));
      break;
    case 102: 
      _P3strcpy(result,_len_ret,_P3str1("\007HEXDUMP"));
      break;
    case 103: 
      _P3strcpy(result,_len_ret,_P3str1("\006INVERT"));
      break;
    case 104: 
      _P3strcpy(result,_len_ret,_P3str1("\010MCFILTER"));
      break;
    case 105: 
      _P3strcpy(result,_len_ret,_P3str1("\007MDB2GMS"));
      break;
    case 106: 
      _P3strcpy(result,_len_ret,_P3str1("\011MODEL2TEX"));
      break;
    case 107: 
      _P3strcpy(result,_len_ret,_P3str1("\007MPS2GMS"));
      break;
    case 108: 
      _P3strcpy(result,_len_ret,_P3str1("\012MSAPPAVAIL"));
      break;
    case 109: 
      _P3strcpy(result,_len_ret,_P3str1("\007SCENRED"));
      break;
    case 110: 
      _P3strcpy(result,_len_ret,_P3str1("\010SCENRED2"));
      break;
    case 111: 
      _P3strcpy(result,_len_ret,_P3str1("\014SHELLEXECUTE"));
      break;
    case 112: 
      _P3strcpy(result,_len_ret,_P3str1("\007SQL2GMS"));
      break;
    case 113: 
      _P3strcpy(result,_len_ret,_P3str1("\006STUDIO"));
      break;
    case 114: 
      _P3strcpy(result,_len_ret,_P3str1("\005Tools"));
      break;
    case 115: 
      _P3strcpy(result,_len_ret,_P3str1("\007XLS2GMS"));
      break;
    case 116: 
      _P3strcpy(result,_len_ret,_P3str1("\007XLSDUMP"));
      break;
    case 117: 
      _P3strcpy(result,_len_ret,_P3str1("\007XLSTALK"));
      break;
    case 118: 
      _P3strcpy(result,_len_ret,_P3str1("\004GAMS"));
      break;
    case 119: 
      _P3strcpy(result,_len_ret,_P3str1("\011Documents"));
      break;
    case 120: 
      _P3strcpy(result,_len_ret,_P3str1("\004GRID"));
      break;
    case 121: 
      _P3strcpy(result,_len_ret,_P3str1("\006LSTLIB"));
      break;
    case 122: 
      _P3strcpy(result,_len_ret,_P3str1("\014ModelLibrary"));
      break;
    case 123: 
      _P3strcpy(result,_len_ret,_P3str1("\013TestLibrary"));
      break;
    case 124: 
      _P3strcpy(result,_len_ret,_P3str1("\013DataLibrary"));
      break;
    case 125: 
      _P3strcpy(result,_len_ret,_P3str1("\012FinanceLib"));
      break;
    case 126: 
      _P3strcpy(result,_len_ret,_P3str1("\012EMPLibrary"));
      break;
    case 127: 
      _P3strcpy(result,_len_ret,_P3str1("\012APILibrary"));
      break;
    case 128: 
      _P3strcpy(result,_len_ret,_P3str1("\014NonlinearLib"));
      break;
    case 129: 
      _P3strcpy(result,_len_ret,_P3str1("\014PSOptLibrary"));
      break;
    case 130: 
      _P3strcpy(result,_len_ret,_P3str1("\006gdxAPI"));
      break;
    case 131: 
      _P3strcpy(result,_len_ret,_P3str1("\006gmdAPI"));
      break;
    case 132: 
      _P3strcpy(result,_len_ret,_P3str1("\007joatAPI"));
      break;
    case 133: 
      _P3strcpy(result,_len_ret,_P3str1("\011optionAPI"));
      break;
    case 134: 
      _P3strcpy(result,_len_ret,_P3str1("\007gamsAPI"));
      break;
    case 135: 
      _P3strcpy(result,_len_ret,_P3str1("\011idxgdxAPI"));
      break;
    case 136: 
      _P3strcpy(result,_len_ret,_P3str1("\007gamsCPP"));
      break;
    case 137: 
      _P3strcpy(result,_len_ret,_P3str1("\012gamsDotNet"));
      break;
    case 138: 
      _P3strcpy(result,_len_ret,_P3str1("\012gamsPython"));
      break;
    case 139: 
      _P3strcpy(result,_len_ret,_P3str1("\010gamsJava"));
      break;
    case 140: 
      _P3strcpy(result,_len_ret,_P3str1("\006IPOPTH"));
      break;
    case 141: 
      _P3strcpy(result,_len_ret,_P3str1("\007BONMINH"));
      break;
    case 142: 
      _P3strcpy(result,_len_ret,_P3str1("\007CONOPT3"));
      break;
    case 143: 
      _P3strcpy(result,_len_ret,_P3str1("\012COINBONMIN"));
      break;
    case 144: 
      _P3strcpy(result,_len_ret,_P3str1("\007COINCBC"));
      break;
    case 145: 
      _P3strcpy(result,_len_ret,_P3str1("\013COINCOUENNE"));
      break;
    case 146: 
      _P3strcpy(result,_len_ret,_P3str1("\011COINIPOPT"));
      break;
    case 147: 
      _P3strcpy(result,_len_ret,_P3str1("\010COINSCIP"));
      break;
    case 148: 
      _P3strcpy(result,_len_ret,_P3str1("\006LOGMIP"));
      break;
    case 149: 
      _P3strcpy(result,_len_ret,_P3str1("\006MILESE"));
      break;
    case 150: 
      _P3strcpy(result,_len_ret,_P3str1("\006MINOS5"));
      break;
    case 151: 
      _P3strcpy(result,_len_ret,_P3str1("\011OSISOPLEX"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* solvernamestext */

Function(SYSTEM_integer ) GMSGLOBX_solvernameslookup(
  const SYSTEM_ansichar *_ftmp1)
{
  SYSTEM_shortstring s;
  SYSTEM_integer result;

  _P3strcpy(s,255,_ftmp1);
  for (result = 1;result <= (SYSTEM_int32)GMSGLOBX_maxsolvernames;++
    result) {
    if (SYSUTILS_P3_sametext(GMSGLOBX_solvernameskeys[result - 1],
      s)) 
      return result;
  }
  result = 0;
  return result;
}  /* solvernameslookup */

Function(SYSTEM_ansichar *) GMSGLOBX_solvernameskey(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  if (n >= 1 && n <= 151) { 
    _P3strcpy(result,_len_ret,GMSGLOBX_solvernameskeys[n - 1]);
  } else 
    _P3strclr(result);
  return result;
}  /* solvernameskey */
typedef SYSTEM_uint8 _sub_5GMSGLOBX;
typedef _P3STR_3 _arr_4GMSGLOBX[14];
static _arr_4GMSGLOBX GMSGLOBX_platformskeys = {{3,'W','I','N'}, {3,'W','E','X'}, {3,'L','E','X'}, {3,'D','E','X'}, {3,'S','O','X'}, {3,'A','I','X'}, {3,'S','I','S'}, {3,'B','G','P'}, {3,'L','N','X'}, {3,'S','O','L'}, {3,'D','A','R'}, {3,'D','I','I'}, {3,'G','E','N'}, {3,'A','L','L'}};

Function(SYSTEM_ansichar *) GMSGLOBX_platformstext(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\041x86 32bit MS Windows 32 and 64bit"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\024x86 64bit MS Windows"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\017x86 64bit Linux"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\022x86 64bit Mac OS X"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\023Sparc 64bit SOLARIS"));
      break;
    case 6: 
      _P3strcpy(result,_len_ret,_P3str1("\023IBM Power 64bit AIX"));
      break;
    case 7: 
      _P3strcpy(result,_len_ret,_P3str1("\021x86 64bit SOLARIS"));
      break;
    case 8: 
      _P3strcpy(result,_len_ret,_P3str1("\025IBM Power 64bit Linux"));
      break;
    case 9: 
      _P3strcpy(result,_len_ret,_P3str1("\026x86 Linux 32 and 64bit"));
      break;
    case 10: 
      _P3strcpy(result,_len_ret,_P3str1("\021Sun Sparc SOLARIS"));
      break;
    case 11: 
      _P3strcpy(result,_len_ret,_P3str1("\022Mac PowerPC Darwin"));
      break;
    case 12: 
      _P3strcpy(result,_len_ret,_P3str1("\022Mac Intel32 Darwin"));
      break;
    case 13: 
      _P3strcpy(result,_len_ret,_P3str1("\031Generic popular platforms"));
      break;
    case 14: 
      _P3strcpy(result,_len_ret,_P3str1("\015All platforms"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* platformstext */

Function(SYSTEM_ansichar *) GMSGLOBX_platformstext2(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\024x86 32bit MS Windows"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\024x86 64bit MS Windows"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\017x86 64bit Linux"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\022x86 64bit Mac OS X"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\023Sparc 64bit SOLARIS"));
      break;
    case 6: 
      _P3strcpy(result,_len_ret,_P3str1("\023IBM Power 64bit AIX"));
      break;
    case 7: 
      _P3strcpy(result,_len_ret,_P3str1("\021x86 64bit SOLARIS"));
      break;
    case 8: 
      _P3strcpy(result,_len_ret,_P3str1("\025IBM Power 64bit Linux"));
      break;
    case 9: 
      _P3strcpy(result,_len_ret,_P3str1("\011x86 Linux"));
      break;
    case 10: 
      _P3strcpy(result,_len_ret,_P3str1("\021Sun Sparc SOLARIS"));
      break;
    case 11: 
      _P3strcpy(result,_len_ret,_P3str1("\022Mac PowerPC Darwin"));
      break;
    case 12: 
      _P3strcpy(result,_len_ret,_P3str1("\022Mac Intel32 Darwin"));
      break;
    case 13: 
      _P3strcpy(result,_len_ret,_P3str1("\031Generic popular platforms"));
      break;
    case 14: 
      _P3strcpy(result,_len_ret,_P3str1("\015All platforms"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* platformstext2 */

Function(SYSTEM_integer ) GMSGLOBX_platformslookup(
  const SYSTEM_ansichar *_ftmp1)
{
  SYSTEM_shortstring s;
  SYSTEM_integer result;

  _P3strcpy(s,255,_ftmp1);
  for (result = 1;result <= (SYSTEM_int32)GMSGLOBX_maxplatforms;++
    result) {
    if (SYSUTILS_P3_sametext(GMSGLOBX_platformskeys[result - 1],s)) 
      return result;
  }
  result = 0;
  return result;
}  /* platformslookup */

Function(SYSTEM_ansichar *) GMSGLOBX_platformskey(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  if (n >= 1 && n <= 14) { 
    _P3strcpy(result,_len_ret,GMSGLOBX_platformskeys[n - 1]);
  } else 
    _P3strclr(result);
  return result;
}  /* platformskey */
typedef SYSTEM_uint8 _sub_7GMSGLOBX;
typedef _P3STR_3 _arr_6GMSGLOBX[21];
static _arr_6GMSGLOBX GMSGLOBX_vendorskeys = {{1,'G'}, {1,'B'}, {1,'A'}, {1,'C'}, {1,'D'}, {1,'H'}, {1,'K'}, {1,'W'}, {1,'L'}, {1,'S'}, {1,'E'}, {1,'F'}, {1,'I'}, {1,'J'}, {1,'N'}, {1,'O'}, {1,'P'}, {1,'Q'}, {1,'R'}, {1,'#'}, {1,'x'}};

Function(SYSTEM_ansichar *) GMSGLOBX_vendorstext(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\034GAMS Development Corporation"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\023BOYOUN TMS CO., LTD"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\041ARKI Consulting & Development A/S"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\030Scientific Formosa China"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\031Delta Computer Consulting"));
      break;
    case 6: 
      _P3strcpy(result,_len_ret,_P3str1("\027Scientific Formosa Inc."));
      break;
    case 7: 
      _P3strcpy(result,_len_ret,_P3str1("\042kfs, scientific management systems"));
      break;
    case 8: 
      _P3strcpy(result,_len_ret,_P3str1("\022Decision Ware Inc."));
      break;
    case 9: 
      _P3strcpy(result,_len_ret,_P3str1("\033AddLink Software Cientifico"));
      break;
    case 10: 
      _P3strcpy(result,_len_ret,_P3str1("\022GAMS Software GmbH"));
      break;
    case 11: 
      _P3strcpy(result,_len_ret,_P3str1("\045Beijing Tianyan Rongzhi Ltd./Turntech"));
      break;
    case 12: 
      _P3strcpy(result,_len_ret,_P3str1("\012Focus Corp"));
      break;
    case 13: 
      _P3strcpy(result,_len_ret,_P3str1("\014Hulinks Inc."));
      break;
    case 14: 
      _P3strcpy(result,_len_ret,_P3str1("\011JUCA Inc."));
      break;
    case 15: 
      _P3strcpy(result,_len_ret,_P3str1("\047MultiON Consulting, S.A. de C.V.MultiOn"));
      break;
    case 16: 
      _P3strcpy(result,_len_ret,_P3str1("\020Pitotech Co.,Ltd"));
      break;
    case 17: 
      _P3strcpy(result,_len_ret,_P3str1("\022SOFTWARE Shop Inc."));
      break;
    case 18: 
      _P3strcpy(result,_len_ret,_P3str1("\022Tegara Corporation"));
      break;
    case 19: 
      _P3strcpy(result,_len_ret,_P3str1("\045Amsterdam Optimization Modeling Group"));
      break;
    case 20: 
      _P3strcpy(result,_len_ret,_P3str1("\014Other Vendor"));
      break;
    case 21: 
      _P3strcpy(result,_len_ret,_P3str1("\016Unknown Vendor"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* vendorstext */

Function(SYSTEM_integer ) GMSGLOBX_vendorslookup(
  const SYSTEM_ansichar *_ftmp1)
{
  SYSTEM_shortstring s;
  SYSTEM_integer result;

  _P3strcpy(s,255,_ftmp1);
  for (result = 1;result <= (SYSTEM_int32)GMSGLOBX_maxvendors;++
    result) {
    if (SYSUTILS_P3_sametext(GMSGLOBX_vendorskeys[result - 1],s)) 
      return result;
  }
  result = 0;
  return result;
}  /* vendorslookup */

Function(SYSTEM_ansichar *) GMSGLOBX_vendorskey(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  if (n >= 1 && n <= 21) { 
    _P3strcpy(result,_len_ret,GMSGLOBX_vendorskeys[n - 1]);
  } else 
    _P3strclr(result);
  return result;
}  /* vendorskey */
typedef SYSTEM_uint8 _sub_9GMSGLOBX;
typedef _P3STR_15 _arr_8GMSGLOBX[46];
static _arr_8GMSGLOBX GMSGLOBX_componentskeys = {{2,'X','A'}, {14,'S','e','c','u','r','e','W','o','r','k','f','i','l','e'}, {8,'A','N','T','I','G','O','N','E'}, {5,'B','A','R','O','N'}, {9,'C','P','L','E','X','L','i','n','k'}, {6,'C','O','N','O','P','T'}, {5,'C','P','L','E','X'}, {9,'C','P','L','E','X','D','I','S','T'}, {11,'C','P','O','P','T','I','M','I','Z','E','R'}, {5,'D','E','C','I','S'}, {6,'D','I','C','O','P','T'}, {8,'A','L','P','H','A','E','C','P'}, {5,'M','P','S','G','E'}, {6,'0','0','B','a','s','e'}, {7,'G','L','O','M','I','Q','O'}, {10,'G','U','R','O','B','I','L','i','n','k'}, {6,'G','U','R','O','B','I'}, {10,'G','U','R','O','B','I','D','i','s','t'}, {5,'I','P','O','P','T'}, {6,'K','N','I','T','R','O'}, {8,'L','I','N','D','O','A','P','I'}, {3,'L','G','O'}, {5,'L','I','N','D','O'}, {11,'L','O','C','A','L','S','O','L','V','E','R'}, {14,'L','O','C','A','L','S','O','L','V','E','R','L','N','K'}, {5,'M','I','N','O','S'}, {9,'M','O','S','E','K','B','a','s','e'}, {9,'M','O','S','E','K','L','i','n','k'}, {8,'M','O','S','E','K','M','I','P'}, {5,'M','S','N','L','P'}, {11,'O','S','L','V','e','r','s','i','o','n','2'}, {8,'C','P','L','E','X','O','S','I'}, {8,'O','D','H','C','P','L','E','X'}, {9,'G','U','R','O','B','I','O','S','I'}, {8,'M','O','S','E','K','O','S','I'}, {9,'X','P','R','E','S','S','O','S','I'}, {7,'O','S','L','L','i','n','k'}, {5,'O','Q','N','L','P'}, {11,'O','S','L','V','e','r','s','i','o','n','1'}, {4,'P','A','T','H'}, {3,'S','B','B'}, {4,'S','C','I','P'}, {5,'O','S','L','S','E'}, {5,'S','N','O','P','T'}, {10,'X','P','R','E','S','S','L','i','n','k'}, {6,'X','P','R','E','S','S'}};

Function(SYSTEM_ansichar *) GMSGLOBX_componentstext(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\041GAMS/XA           Sunset Software"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\045GAMS/Secure       GAMS Secure Version"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\046GAMS/ANTIGONE     Princeton University"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\050GAMS/BARON        University of Illinois"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\040GAMS/CPLEX Link   IBM-ILOG/CPLEX"));
      break;
    case 6: 
      _P3strcpy(result,_len_ret,_P3str1("\041GAMS/CONOPT       ARKI Consulting"));
      break;
    case 7: 
      _P3strcpy(result,_len_ret,_P3str1("\040GAMS/CPLEX        IBM-ILOG/CPLEX"));
      break;
    case 8: 
      _P3strcpy(result,_len_ret,_P3str1("\040GAMS/CPLEXDIST    IBM-ILOG/CPLEX"));
      break;
    case 9: 
      _P3strcpy(result,_len_ret,_P3str1("\040GAMS/CPOPTIMIZER  IBM-ILOG/CPLEX"));
      break;
    case 10: 
      _P3strcpy(result,_len_ret,_P3str1("\041GAMS/DECIS        G Infanger, Inc"));
      break;
    case 11: 
      _P3strcpy(result,_len_ret,_P3str1("\033GAMS/DICOPT       CAPD, CMU"));
      break;
    case 12: 
      _P3strcpy(result,_len_ret,_P3str1("\051GAMS/ALPHAECP     Abo University, Finland"));
      break;
    case 13: 
      _P3strcpy(result,_len_ret,_P3str1("\043GAMS/MPSGE        Thomas Rutherford"));
      break;
    case 14: 
      _P3strcpy(result,_len_ret,_P3str1("\047GAMS/Base Module  GAMS Development Corp"));
      break;
    case 15: 
      _P3strcpy(result,_len_ret,_P3str1("\046GAMS/GLOMIQO      Princeton University"));
      break;
    case 16: 
      _P3strcpy(result,_len_ret,_P3str1("\045GAMS/GUROBI Link  Gurobi Optimization"));
      break;
    case 17: 
      _P3strcpy(result,_len_ret,_P3str1("\045GAMS/GUROBI       Gurobi Optimization"));
      break;
    case 18: 
      _P3strcpy(result,_len_ret,_P3str1("\045GAMS/GUROBI Dist  Gurobi Optimization"));
      break;
    case 19: 
      _P3strcpy(result,_len_ret,_P3str1("\044GAMS/IPOPT        COIN-OR Foundation"));
      break;
    case 20: 
      _P3strcpy(result,_len_ret,_P3str1("\031GAMS/KNITRO       Artelys"));
      break;
    case 21: 
      _P3strcpy(result,_len_ret,_P3str1("\045GAMS/LINDOAPI     Lindo Systems, Inc."));
      break;
    case 22: 
      _P3strcpy(result,_len_ret,_P3str1("\054GAMS/LGO          Pinter Consulting Services"));
      break;
    case 23: 
      _P3strcpy(result,_len_ret,_P3str1("\045GAMS/LINDO        Lindo Systems, Inc."));
      break;
    case 24: 
      _P3strcpy(result,_len_ret,_P3str1("\037GAMS/LOCALSOLVER  Innovation 24"));
      break;
    case 25: 
      _P3strcpy(result,_len_ret,_P3str1("\037GAMS/LOCALSLNK    Innovation 24"));
      break;
    case 26: 
      _P3strcpy(result,_len_ret,_P3str1("\045GAMS/MINOS        Stanford University"));
      break;
    case 27: 
      _P3strcpy(result,_len_ret,_P3str1("\034GAMS/MOSEK Base   MOSEK Base"));
      break;
    case 28: 
      _P3strcpy(result,_len_ret,_P3str1("\034GAMS/MOSEK Link   MOSEK Link"));
      break;
    case 29: 
      _P3strcpy(result,_len_ret,_P3str1("\027GAMS/MOSEK        MOSEK"));
      break;
    case 30: 
      _P3strcpy(result,_len_ret,_P3str1("\047GAMS/MSNLP        Optimal Methods, Inc."));
      break;
    case 31: 
      _P3strcpy(result,_len_ret,_P3str1("\025GAMS/OSL V2       IBM"));
      break;
    case 32: 
      _P3strcpy(result,_len_ret,_P3str1("\044GAMS/CPLEXOSI     COIN-OR Foundation"));
      break;
    case 33: 
      _P3strcpy(result,_len_ret,_P3str1("\052GAMS/ODHCPLEX     Optimization Direct Inc."));
      break;
    case 34: 
      _P3strcpy(result,_len_ret,_P3str1("\044GAMS/GUROBIOSI    COIN-OR Foundation"));
      break;
    case 35: 
      _P3strcpy(result,_len_ret,_P3str1("\044GAMS/MOSEKOSI     COIN-OR Foundation"));
      break;
    case 36: 
      _P3strcpy(result,_len_ret,_P3str1("\044GAMS/XPRESSOSI    COIN-OR Foundation"));
      break;
    case 37: 
      _P3strcpy(result,_len_ret,_P3str1("\025GAMS/OSL Link     IBM"));
      break;
    case 38: 
      _P3strcpy(result,_len_ret,_P3str1("\047GAMS/OQNLP        Optimal Methods, Inc."));
      break;
    case 39: 
      _P3strcpy(result,_len_ret,_P3str1("\025GAMS/OSL          IBM"));
      break;
    case 40: 
      _P3strcpy(result,_len_ret,_P3str1("\056GAMS/PATH         University Wisconsin-Madison"));
      break;
    case 41: 
      _P3strcpy(result,_len_ret,_P3str1("\041GAMS/SBB          ARKI Consulting"));
      break;
    case 42: 
      _P3strcpy(result,_len_ret,_P3str1("\034GAMS/SCIP         ZIB Berlin"));
      break;
    case 43: 
      _P3strcpy(result,_len_ret,_P3str1("\057GAMS/OSL/SE       IBM/OSL Stochastic Extensions"));
      break;
    case 44: 
      _P3strcpy(result,_len_ret,_P3str1("\050GAMS/SNOPT        Stanford & UC-SanDiego"));
      break;
    case 45: 
      _P3strcpy(result,_len_ret,_P3str1("\026GAMS/XPRESS Link  FICO"));
      break;
    case 46: 
      _P3strcpy(result,_len_ret,_P3str1("\026GAMS/XPRESS       FICO"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* componentstext */

Function(SYSTEM_integer ) GMSGLOBX_componentslookup(
  const SYSTEM_ansichar *_ftmp1)
{
  SYSTEM_shortstring s;
  SYSTEM_integer result;

  _P3strcpy(s,255,_ftmp1);
  for (result = 1;result <= (SYSTEM_int32)GMSGLOBX_maxcomponents;++
    result) {
    if (SYSUTILS_P3_sametext(GMSGLOBX_componentskeys[result - 1],
      s)) 
      return result;
  }
  result = 0;
  return result;
}  /* componentslookup */

Function(SYSTEM_ansichar *) GMSGLOBX_componentskey(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  if (n >= 1 && n <= 46) { 
    _P3strcpy(result,_len_ret,GMSGLOBX_componentskeys[n - 1]);
  } else 
    _P3strclr(result);
  return result;
}  /* componentskey */
typedef SYSTEM_uint8 _sub_11GMSGLOBX;
typedef _P3STR_3 _arr_10GMSGLOBX[61];
static _arr_10GMSGLOBX GMSGLOBX_clipcodeskeys = {{2,'0','0'}, {2,'0','1'}, {2,'0','2'}, {2,'0','3'}, {2,'0','4'}, {2,'0','S'}, {2,'A','T'}, {2,'B','A'}, {2,'B','D'}, {2,'C','L'}, {2,'C','O'}, {2,'C','P'}, {2,'C','D'}, {2,'C','M'}, {2,'D','E'}, {2,'D','I'}, {2,'E','C'}, {2,'F','B'}, {2,'F','R'}, {2,'G','E'}, {2,'G','S'}, {2,'G','Q'}, {2,'G','L'}, {2,'G','U'}, {2,'G','D'}, {2,'I','P'}, {2,'K','N'}, {2,'L','A'}, {2,'L','D'}, {2,'L','G'}, {2,'L','I'}, {2,'L','S'}, {2,'L','L'}, {2,'L','O'}, {2,'M','5'}, {2,'M','B'}, {2,'M','C'}, {2,'M','L'}, {2,'M','K'}, {2,'M','N'}, {2,'M','S'}, {2,'N','A'}, {2,'O','2'}, {2,'O','C'}, {2,'O','D'}, {2,'O','G'}, {2,'O','M'}, {2,'O','X'}, {2,'O','L'}, {2,'O','Q'}, {2,'O','S'}, {2,'P','T'}, {2,'S','B'}, {2,'S','C'}, {2,'S','E'}, {2,'S','N'}, {2,'X','A'}, {2,'X','L'}, {2,'X','P'}, {2,'W','Z'}, {2,'Z','O'}};

Function(SYSTEM_ansichar *) GMSGLOBX_clipcodestext(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\037GAMS/Demo GAMS Development Corp"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\037GAMS      GAMS Development Corp"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\037GAMS/Run  GAMS Development Corp"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\037GAMS/App  GAMS Development Corp"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\037GAMS/Node GAMS Development Corp"));
      break;
    case 6: 
      _P3strcpy(result,_len_ret,_P3str1("\037GAMS/Sec  GAMS Development Corp"));
      break;
    case 7: 
      _P3strcpy(result,_len_ret,_P3str1("\036ANTIGONE  Princeton Univeristy"));
      break;
    case 8: 
      _P3strcpy(result,_len_ret,_P3str1("\064BARON     University of Illinois at Urbana-Champaign"));
      break;
    case 9: 
      _P3strcpy(result,_len_ret,_P3str1("\037BDMLP     GAMS Development Corp"));
      break;
    case 10: 
      _P3strcpy(result,_len_ret,_P3str1("\050CPLEX/L   Cplex Optimization (Link only)"));
      break;
    case 11: 
      _P3strcpy(result,_len_ret,_P3str1("\031CONOPT    ARKI Consulting"));
      break;
    case 12: 
      _P3strcpy(result,_len_ret,_P3str1("\076CPLEX     Cplex Optimization (license options in comment line)"));
      break;
    case 13: 
      _P3strcpy(result,_len_ret,_P3str1("\054CPLEXDIST Cplex Optimization Distributed MIP"));
      break;
    case 14: 
      _P3strcpy(result,_len_ret,_P3str1("\034CPOPTIM   Cplex Optimization"));
      break;
    case 15: 
      _P3strcpy(result,_len_ret,_P3str1("\033DECIS     G. Infanger, Inc."));
      break;
    case 16: 
      _P3strcpy(result,_len_ret,_P3str1("\052DICOPT    CAPD, Carnegie Mellon University"));
      break;
    case 17: 
      _P3strcpy(result,_len_ret,_P3str1("\041ALPHAECP  Abo University, Finland"));
      break;
    case 18: 
      _P3strcpy(result,_len_ret,_P3str1("\042FILTERBB  The University of Dundee"));
      break;
    case 19: 
      _P3strcpy(result,_len_ret,_P3str1("\035FREE      Maintained Freeware"));
      break;
    case 20: 
      _P3strcpy(result,_len_ret,_P3str1("\033MPS/GE    Thomas Rutherford"));
      break;
    case 21: 
      _P3strcpy(result,_len_ret,_P3str1("\037GAMS/Sys  GAMS Development Corp"));
      break;
    case 22: 
      _P3strcpy(result,_len_ret,_P3str1("\036GloMIQO   Princeton Univeristy"));
      break;
    case 23: 
      _P3strcpy(result,_len_ret,_P3str1("\051GUROBI/L  Gurobi Optimization (Link only)"));
      break;
    case 24: 
      _P3strcpy(result,_len_ret,_P3str1("\035GUROBI    Gurobi Optimization"));
      break;
    case 25: 
      _P3strcpy(result,_len_ret,_P3str1("\035GUROBI/D  Gurobi Optimization"));
      break;
    case 26: 
      _P3strcpy(result,_len_ret,_P3str1("\034IPOPT     COIN-OR Foundation"));
      break;
    case 27: 
      _P3strcpy(result,_len_ret,_P3str1("\034KNITRO    Artelys           "));
      break;
    case 28: 
      _P3strcpy(result,_len_ret,_P3str1("\056LAMPS     Advanced Mathematical Software, Inc."));
      break;
    case 29: 
      _P3strcpy(result,_len_ret,_P3str1("\035LINDO-API Lindo Systems, Inc."));
      break;
    case 30: 
      _P3strcpy(result,_len_ret,_P3str1("\044LGO       Pinter Consulting Services"));
      break;
    case 31: 
      _P3strcpy(result,_len_ret,_P3str1("\035LINDOGlob Lindo Systems, Inc."));
      break;
    case 32: 
      _P3strcpy(result,_len_ret,_P3str1("\027LOCALSol  Innovation 24"));
      break;
    case 33: 
      _P3strcpy(result,_len_ret,_P3str1("\043LOCALS/L  Innovation 24 (Link only)"));
      break;
    case 34: 
      _P3strcpy(result,_len_ret,_P3str1("\036LOQO      Princeton University"));
      break;
    case 35: 
      _P3strcpy(result,_len_ret,_P3str1("\035MINOS     Stanford University"));
      break;
    case 36: 
      _P3strcpy(result,_len_ret,_P3str1("\034MOSEK     EKA Consulting ApS"));
      break;
    case 37: 
      _P3strcpy(result,_len_ret,_P3str1("\037MILES     GAMS Development Corp"));
      break;
    case 38: 
      _P3strcpy(result,_len_ret,_P3str1("\034MOSEK/L   EKA Consulting ApS"));
      break;
    case 39: 
      _P3strcpy(result,_len_ret,_P3str1("\034MOSEK/MIP EKA Consulting ApS"));
      break;
    case 40: 
      _P3strcpy(result,_len_ret,_P3str1("\031MSNLP     Optimal Methods"));
      break;
    case 41: 
      _P3strcpy(result,_len_ret,_P3str1("\041MOPS      Freie University Berlin"));
      break;
    case 42: 
      _P3strcpy(result,_len_ret,_P3str1("\025NONO      Not Allowed"));
      break;
    case 43: 
      _P3strcpy(result,_len_ret,_P3str1("\033OSL2      IBM/OSL Version 2"));
      break;
    case 44: 
      _P3strcpy(result,_len_ret,_P3str1("\034CPLEXOSI  COIN-OR Foundation"));
      break;
    case 45: 
      _P3strcpy(result,_len_ret,_P3str1("\042ODHCPLEX  Optimization Direct Inc."));
      break;
    case 46: 
      _P3strcpy(result,_len_ret,_P3str1("\034GUROBIOSI COIN-OR Foundation"));
      break;
    case 47: 
      _P3strcpy(result,_len_ret,_P3str1("\034MOSEKOSI  COIN-OR Foundation"));
      break;
    case 48: 
      _P3strcpy(result,_len_ret,_P3str1("\034XPRESSOSI COIN-OR Foundation"));
      break;
    case 49: 
      _P3strcpy(result,_len_ret,_P3str1("\026OSL/L     IBM/OSL Link"));
      break;
    case 50: 
      _P3strcpy(result,_len_ret,_P3str1("\054OQNLP/GRG OptTek Systems and Optimal Methods"));
      break;
    case 51: 
      _P3strcpy(result,_len_ret,_P3str1("\021OSL       IBM/OSL"));
      break;
    case 52: 
      _P3strcpy(result,_len_ret,_P3str1("\053PATH      University of Wisconsin - Madison"));
      break;
    case 53: 
      _P3strcpy(result,_len_ret,_P3str1("\031SBB       ARKI Consulting"));
      break;
    case 54: 
      _P3strcpy(result,_len_ret,_P3str1("\024SCIP      ZIB Berlin"));
      break;
    case 55: 
      _P3strcpy(result,_len_ret,_P3str1("\046OSLSE     IBM/OSL Stochastic Extension"));
      break;
    case 56: 
      _P3strcpy(result,_len_ret,_P3str1("\035SNOPT     Stanford University"));
      break;
    case 57: 
      _P3strcpy(result,_len_ret,_P3str1("\031XA        Sunset Software"));
      break;
    case 58: 
      _P3strcpy(result,_len_ret,_P3str1("\016XPRESS/L  FICO"));
      break;
    case 59: 
      _P3strcpy(result,_len_ret,_P3str1("\016XPRESS    FICO"));
      break;
    case 60: 
      _P3strcpy(result,_len_ret,_P3str1("\043WHIZZARD  Ketron Management Science"));
      break;
    case 61: 
      _P3strcpy(result,_len_ret,_P3str1("\043ZOOM      XMP Optimization Software"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* clipcodestext */

Function(SYSTEM_integer ) GMSGLOBX_clipcodeslookup(
  const SYSTEM_ansichar *_ftmp1)
{
  SYSTEM_shortstring s;
  SYSTEM_integer result;

  _P3strcpy(s,255,_ftmp1);
  for (result = 1;result <= (SYSTEM_int32)GMSGLOBX_maxclipcodes;++
    result) {
    if (SYSUTILS_P3_sametext(GMSGLOBX_clipcodeskeys[result - 1],s)) 
      return result;
  }
  result = 0;
  return result;
}  /* clipcodeslookup */

Function(SYSTEM_ansichar *) GMSGLOBX_clipcodeskey(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  if (n >= 1 && n <= 61) { 
    _P3strcpy(result,_len_ret,GMSGLOBX_clipcodeskeys[n - 1]);
  } else 
    _P3strclr(result);
  return result;
}  /* clipcodeskey */
typedef SYSTEM_uint8 _sub_13GMSGLOBX;
typedef _P3STR_3 _arr_12GMSGLOBX[5];
static _arr_12GMSGLOBX GMSGLOBX_gamslicenseskeys = {{2,'0','0'}, {2,'0','1'}, {2,'0','2'}, {2,'0','3'}, {2,'0','4'}};

Function(SYSTEM_ansichar *) GMSGLOBX_gamslicensestext(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\011GAMS/Demo"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\021GAMS/Professional"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\015GAMS/Run Time"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\020GAMS/Application"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\015GAMS/Nodelock"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* gamslicensestext */

Function(SYSTEM_integer ) GMSGLOBX_gamslicenseslookup(
  const SYSTEM_ansichar *_ftmp1)
{
  SYSTEM_shortstring s;
  SYSTEM_integer result;

  _P3strcpy(s,255,_ftmp1);
  for (result = 1;result <= (SYSTEM_int32)
    GMSGLOBX_maxgamslicenses;++result) {
    if (SYSUTILS_P3_sametext(GMSGLOBX_gamslicenseskeys[result - 1],
      s)) 
      return result;
  }
  result = 0;
  return result;
}  /* gamslicenseslookup */

Function(SYSTEM_ansichar *) GMSGLOBX_gamslicenseskey(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  if (n >= 1 && n <= 5) { 
    _P3strcpy(result,_len_ret,GMSGLOBX_gamslicenseskeys[n - 1]);
  } else 
    _P3strclr(result);
  return result;
}  /* gamslicenseskey */
typedef SYSTEM_uint8 _sub_15GMSGLOBX;
typedef _P3STR_3 _arr_14GMSGLOBX[20];
static _arr_14GMSGLOBX GMSGLOBX_gamslicensetypeskeys = {{1,'1'}, {1,'2'}, {1,'3'}, {1,'4'}, {1,'5'}, {1,'6'}, {1,'7'}, {1,'G'}, {1,'B'}, {1,'A'}, {1,'C'}, {1,'D'}, {1,'H'}, {1,'K'}, {1,'L'}, {1,'E'}, {1,'F'}, {1,'I'}, {1,'J'}, {1,'M'}};

Function(SYSTEM_ansichar *) GMSGLOBX_gamslicensetypestext(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\013Single User"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\022Small MUD - 5 User"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\024Medium MUD - 10 User"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\023Large MUD - 20 User"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\012Multi-User"));
      break;
    case 6: 
      _P3strcpy(result,_len_ret,_P3str1("\011Mainframe"));
      break;
    case 7: 
      _P3strcpy(result,_len_ret,_P3str1("\005Other"));
      break;
    case 8: 
      _P3strcpy(result,_len_ret,_P3str1("\015MUD - 90 User"));
      break;
    case 9: 
      _P3strcpy(result,_len_ret,_P3str1("\015MUD - 40 User"));
      break;
    case 10: 
      _P3strcpy(result,_len_ret,_P3str1("\015MUD - 30 User"));
      break;
    case 11: 
      _P3strcpy(result,_len_ret,_P3str1("\015MUD - 50 User"));
      break;
    case 12: 
      _P3strcpy(result,_len_ret,_P3str1("\015MUD - 60 User"));
      break;
    case 13: 
      _P3strcpy(result,_len_ret,_P3str1("\016MUD - 100 User"));
      break;
    case 14: 
      _P3strcpy(result,_len_ret,_P3str1("\032Single Machine - 2 sockets"));
      break;
    case 15: 
      _P3strcpy(result,_len_ret,_P3str1("\032Single Machine - 3 sockets"));
      break;
    case 16: 
      _P3strcpy(result,_len_ret,_P3str1("\015MUD - 70 User"));
      break;
    case 17: 
      _P3strcpy(result,_len_ret,_P3str1("\015MUD - 80 User"));
      break;
    case 18: 
      _P3strcpy(result,_len_ret,_P3str1("\043Single Machine License - deprecated"));
      break;
    case 19: 
      _P3strcpy(result,_len_ret,_P3str1("\031Single Machine - 1 socket"));
      break;
    case 20: 
      _P3strcpy(result,_len_ret,_P3str1("\032Single Machine - 4 sockets"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* gamslicensetypestext */

Function(SYSTEM_integer ) GMSGLOBX_gamslicensetypeslookup(
  const SYSTEM_ansichar *_ftmp1)
{
  SYSTEM_shortstring s;
  SYSTEM_integer result;

  _P3strcpy(s,255,_ftmp1);
  for (result = 1;result <= (SYSTEM_int32)
    GMSGLOBX_maxgamslicensetypes;++result) {
    if (SYSUTILS_P3_sametext(GMSGLOBX_gamslicensetypeskeys[result - 1],
      s)) 
      return result;
  }
  result = 0;
  return result;
}  /* gamslicensetypeslookup */

Function(SYSTEM_ansichar *) GMSGLOBX_gamslicensetypeskey(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  if (n >= 1 && n <= 20) { 
    _P3strcpy(result,_len_ret,GMSGLOBX_gamslicensetypeskeys[n - 1]);
  } else 
    _P3strclr(result);
  return result;
}  /* gamslicensetypeskey */
typedef SYSTEM_uint8 _sub_17GMSGLOBX;
typedef _P3STR_7 _arr_16GMSGLOBX[16];
static _arr_16GMSGLOBX GMSGLOBX_modeltypesxkeys = {{4,'N','O','N','E'}, {2,'L','P'}, {3,'M','I','P'}, {4,'R','M','I','P'}, {3,'N','L','P'}, {3,'M','C','P'}, {4,'M','P','E','C'}, {5,'R','M','P','E','C'}, {3,'C','N','S'}, {4,'D','N','L','P'}, {6,'R','M','I','N','L','P'}, {5,'M','I','N','L','P'}, {3,'Q','C','P'}, {5,'M','I','Q','C','P'}, {6,'R','M','I','Q','C','P'}, {3,'E','M','P'}};

Function(SYSTEM_ansichar *) GMSGLOBX_modeltypesxtext(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  switch (n) {
    case 1: 
      _P3strcpy(result,_len_ret,_P3str1("\004NONE"));
      break;
    case 2: 
      _P3strcpy(result,_len_ret,_P3str1("\022Linear Programming"));
      break;
    case 3: 
      _P3strcpy(result,_len_ret,_P3str1("\031Mixed-Integer Programming"));
      break;
    case 4: 
      _P3strcpy(result,_len_ret,_P3str1("\041Relaxed Mixed-Integer Programming"));
      break;
    case 5: 
      _P3strcpy(result,_len_ret,_P3str1("\026Non-Linear Programming"));
      break;
    case 6: 
      _P3strcpy(result,_len_ret,_P3str1("\036Mixed Complementarity Problems"));
      break;
    case 7: 
      _P3strcpy(result,_len_ret,_P3str1("\062Mathematical Programs with Equilibrium Constraints"));
      break;
    case 8: 
      _P3strcpy(result,_len_ret,_P3str1("\072Relaxed Mathematical Programs with Equilibrium Constraints"));
      break;
    case 9: 
      _P3strcpy(result,_len_ret,_P3str1("\035Constrained Nonlinear Systems"));
      break;
    case 10: 
      _P3strcpy(result,_len_ret,_P3str1("\065Non-Linear Programming with Discontinuous Derivatives"));
      break;
    case 11: 
      _P3strcpy(result,_len_ret,_P3str1("\054Relaxed Mixed-Integer Non-Linear Programming"));
      break;
    case 12: 
      _P3strcpy(result,_len_ret,_P3str1("\044Mixed-Integer Non-Linear Programming"));
      break;
    case 13: 
      _P3strcpy(result,_len_ret,_P3str1("\042Quadratically Constrained Programs"));
      break;
    case 14: 
      _P3strcpy(result,_len_ret,_P3str1("\060Mixed Integer Quadratically Constrained Programs"));
      break;
    case 15: 
      _P3strcpy(result,_len_ret,_P3str1("\070Relaxed Mixed Integer Quadratically Constrained Programs"));
      break;
    case 16: 
      _P3strcpy(result,_len_ret,_P3str1("\036Extended Mathematical Programs"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\030**** should never happen"));
  }
  return result;
}  /* modeltypesxtext */

Function(SYSTEM_integer ) GMSGLOBX_modeltypesxlookup(
  const SYSTEM_ansichar *_ftmp1)
{
  SYSTEM_shortstring s;
  SYSTEM_integer result;

  _P3strcpy(s,255,_ftmp1);
  for (result = 1;result <= (SYSTEM_int32)GMSGLOBX_maxmodeltypesx;++
    result) {
    if (SYSUTILS_P3_sametext(GMSGLOBX_modeltypesxkeys[result - 1],
      s)) 
      return result;
  }
  result = 0;
  return result;
}  /* modeltypesxlookup */

Function(SYSTEM_ansichar *) GMSGLOBX_modeltypesxkey(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret,
  SYSTEM_integer n)
{
  if (n >= 1 && n <= 16) { 
    _P3strcpy(result,_len_ret,GMSGLOBX_modeltypesxkeys[n - 1]);
  } else 
    _P3strclr(result);
  return result;
}  /* modeltypesxkey */
typedef SYSTEM_uint8 _sub_19GMSGLOBX;
typedef SYSTEM_uint8 _sub_21GMSGLOBX;
typedef SYSTEM_integer _arr_20GMSGLOBX[2];
typedef _arr_20GMSGLOBX _arr_18GMSGLOBX[168];
static _arr_18GMSGLOBX GMSGLOBX_componentsolvermaptuple = {{1, 3}, 
  {2, 28}, {3, 4}, {3, 13}, {4, 5}, 
  {4, 33}, {5, 7}, {5, 43}, {5, 62}, 
  {6, 6}, {6, 38}, {6, 39}, {6, 142}, 
  {7, 7}, {7, 43}, {7, 62}, {9, 8}, 
  {10, 9}, {10, 44}, {10, 45}, {11, 10}, 
  {11, 46}, {12, 11}, {13, 12}, {14, 1}, 
  {14, 2}, {14, 15}, {14, 25}, {14, 29}, 
  {14, 30}, {14, 32}, {14, 34}, {14, 35}, 
  {14, 36}, {14, 37}, {14, 40}, {14, 41}, 
  {14, 42}, {14, 47}, {14, 48}, {14, 49}, 
  {14, 50}, {14, 51}, {14, 52}, {14, 56}, 
  {14, 60}, {14, 61}, {14, 63}, {14, 64}, 
  {14, 65}, {14, 69}, {14, 70}, {14, 71}, 
  {14, 72}, {14, 73}, {14, 74}, {14, 75}, 
  {14, 76}, {14, 77}, {14, 78}, {14, 79}, 
  {14, 80}, {14, 81}, {14, 82}, {14, 83}, 
  {14, 84}, {14, 85}, {14, 86}, {14, 87}, 
  {14, 88}, {14, 89}, {14, 90}, {14, 91}, 
  {14, 92}, {14, 93}, {14, 94}, {14, 95}, 
  {14, 96}, {14, 97}, {14, 98}, {14, 99}, 
  {14, 100}, {14, 101}, {14, 102}, {14, 103}, 
  {14, 104}, {14, 105}, {14, 106}, {14, 107}, 
  {14, 108}, {14, 109}, {14, 110}, {14, 111}, 
  {14, 112}, {14, 113}, {14, 114}, {14, 115}, 
  {14, 116}, {14, 117}, {14, 118}, {14, 119}, 
  {14, 120}, {14, 121}, {14, 122}, {14, 123}, 
  {14, 124}, {14, 125}, {14, 126}, {14, 127}, 
  {14, 128}, {14, 129}, {14, 130}, {14, 131}, 
  {14, 132}, {14, 133}, {14, 134}, {14, 135}, 
  {14, 136}, {14, 137}, {14, 138}, {14, 139}, 
  {14, 140}, {14, 141}, {14, 143}, {14, 144}, 
  {14, 145}, {14, 146}, {14, 147}, {14, 148}, 
  {14, 149}, {14, 151}, {15, 13}, {16, 14}, 
  {17, 14}, {18, 14}, {20, 16}, {20, 53}, 
  {21, 18}, {21, 55}, {22, 17}, {22, 54}, 
  {23, 55}, {24, 19}, {24, 57}, {25, 19}, 
  {25, 57}, {26, 20}, {26, 58}, {26, 59}, 
  {26, 150}, {27, 31}, {28, 31}, {29, 31}, 
  {30, 21}, {32, 62}, {33, 22}, {34, 63}, 
  {35, 64}, {36, 65}, {38, 21}, {40, 23}, 
  {40, 66}, {40, 67}, {40, 68}, {41, 24}, 
  {44, 26}, {45, 27}, {46, 27}};

Function(SYSTEM_integer ) GMSGLOBX_componentsolvermapmap(
  SYSTEM_integer i,
  SYSTEM_integer j)
{
  SYSTEM_integer result;

  result = 0;
  if (i >= 1 && i <= 168) 
    if (j >= 1 && j <= 2) 
      result = GMSGLOBX_componentsolvermaptuple[i - 1][j - 1];
  return result;
}  /* componentsolvermapmap */
typedef SYSTEM_uint8 _sub_23GMSGLOBX;
typedef SYSTEM_uint8 _sub_25GMSGLOBX;
typedef SYSTEM_integer _arr_24GMSGLOBX[2];
typedef _arr_24GMSGLOBX _arr_22GMSGLOBX[50];
static _arr_22GMSGLOBX GMSGLOBX_clipcomponentmaptuple = {{2, 14}, {3, 14}, 
  {4, 14}, {5, 14}, {6, 2}, {7, 3}, 
  {8, 4}, {10, 5}, {11, 6}, {12, 7}, 
  {13, 8}, {14, 9}, {15, 10}, {16, 11}, 
  {17, 12}, {20, 13}, {21, 14}, {22, 15}, 
  {23, 16}, {24, 17}, {25, 18}, {26, 19}, 
  {27, 20}, {29, 21}, {30, 22}, {31, 23}, 
  {32, 24}, {33, 25}, {35, 26}, {36, 27}, 
  {38, 28}, {39, 29}, {40, 30}, {43, 31}, 
  {44, 32}, {45, 33}, {46, 34}, {47, 35}, 
  {48, 36}, {49, 37}, {50, 38}, {51, 39}, 
  {52, 40}, {53, 41}, {54, 42}, {55, 43}, 
  {56, 44}, {57, 1}, {58, 45}, {59, 46}};

Function(SYSTEM_integer ) GMSGLOBX_clipcomponentmapmap(
  SYSTEM_integer i,
  SYSTEM_integer j)
{
  SYSTEM_integer result;

  result = 0;
  if (i >= 1 && i <= 50) 
    if (j >= 1 && j <= 2) 
      result = GMSGLOBX_clipcomponentmaptuple[i - 1][j - 1];
  return result;
}  /* clipcomponentmapmap */
typedef SYSTEM_uint16 _sub_27GMSGLOBX;
typedef SYSTEM_uint8 _sub_29GMSGLOBX;
typedef SYSTEM_integer _arr_28GMSGLOBX[2];
typedef _arr_28GMSGLOBX _arr_26GMSGLOBX[729];
static _arr_26GMSGLOBX GMSGLOBX_solverplatformmaptuple = {{1, 1}, {1, 2}, 
  {1, 3}, {1, 4}, {1, 5}, {1, 6}, 
  {2, 1}, {2, 2}, {2, 3}, {2, 4}, 
  {2, 5}, {2, 6}, {3, 1}, {3, 2}, 
  {3, 3}, {4, 1}, {4, 2}, {4, 3}, 
  {4, 4}, {5, 1}, {5, 2}, {5, 3}, 
  {5, 4}, {6, 1}, {6, 2}, {6, 3}, 
  {6, 4}, {6, 5}, {6, 6}, {7, 1}, 
  {7, 2}, {7, 3}, {7, 4}, {7, 5}, 
  {7, 6}, {8, 2}, {8, 3}, {8, 4}, 
  {9, 1}, {9, 2}, {9, 3}, {9, 4}, 
  {9, 5}, {10, 1}, {10, 2}, {10, 3}, 
  {10, 4}, {10, 5}, {10, 6}, {11, 1}, 
  {11, 2}, {11, 3}, {11, 4}, {11, 5}, 
  {11, 6}, {12, 1}, {12, 2}, {12, 3}, 
  {12, 4}, {12, 5}, {12, 6}, {13, 1}, 
  {13, 2}, {13, 3}, {13, 4}, {14, 1}, 
  {14, 2}, {14, 3}, {14, 4}, {14, 6}, 
  {15, 1}, {15, 2}, {15, 3}, {15, 4}, 
  {16, 1}, {16, 2}, {16, 3}, {16, 4}, 
  {17, 1}, {17, 2}, {17, 3}, {17, 4}, 
  {17, 5}, {18, 1}, {18, 2}, {18, 3}, 
  {18, 4}, {19, 1}, {19, 2}, {19, 3}, 
  {19, 4}, {20, 1}, {20, 2}, {20, 3}, 
  {20, 4}, {20, 5}, {20, 6}, {21, 1}, 
  {21, 2}, {21, 3}, {21, 4}, {21, 5}, 
  {22, 2}, {22, 3}, {23, 1}, {23, 2}, 
  {23, 3}, {23, 4}, {23, 5}, {23, 6}, 
  {24, 1}, {24, 2}, {24, 3}, {24, 4}, 
  {24, 5}, {24, 6}, {25, 1}, {25, 2}, 
  {25, 3}, {25, 4}, {26, 1}, {26, 2}, 
  {26, 3}, {26, 4}, {26, 5}, {26, 6}, 
  {27, 1}, {27, 2}, {27, 3}, {27, 4}, 
  {27, 5}, {27, 6}, {28, 1}, {28, 2}, 
  {28, 3}, {28, 4}, {28, 5}, {28, 6}, 
  {29, 1}, {29, 2}, {29, 3}, {29, 4}, 
  {29, 5}, {29, 6}, {30, 1}, {30, 2}, 
  {30, 3}, {30, 4}, {30, 5}, {30, 6}, 
  {31, 1}, {31, 2}, {31, 3}, {31, 4}, 
  {32, 1}, {32, 2}, {32, 3}, {32, 4}, 
  {32, 5}, {32, 6}, {34, 1}, {34, 2}, 
  {34, 3}, {34, 4}, {34, 5}, {34, 6}, 
  {35, 1}, {35, 2}, {35, 3}, {35, 4}, 
  {35, 5}, {35, 6}, {36, 1}, {36, 2}, 
  {36, 3}, {36, 4}, {37, 1}, {37, 2}, 
  {37, 3}, {37, 4}, {38, 1}, {38, 2}, 
  {38, 3}, {38, 4}, {38, 5}, {38, 6}, 
  {39, 1}, {39, 2}, {39, 3}, {39, 4}, 
  {39, 5}, {39, 6}, {40, 1}, {40, 2}, 
  {40, 3}, {40, 4}, {40, 5}, {40, 6}, 
  {41, 1}, {41, 2}, {41, 3}, {41, 4}, 
  {41, 5}, {41, 6}, {42, 1}, {42, 2}, 
  {42, 3}, {42, 4}, {43, 1}, {43, 2}, 
  {43, 3}, {43, 4}, {43, 5}, {43, 6}, 
  {44, 1}, {44, 2}, {44, 3}, {44, 4}, 
  {44, 5}, {45, 1}, {45, 2}, {45, 3}, 
  {45, 4}, {45, 5}, {47, 1}, {47, 2}, 
  {47, 3}, {47, 4}, {47, 5}, {47, 6}, 
  {48, 1}, {48, 2}, {48, 3}, {48, 4}, 
  {48, 5}, {48, 6}, {49, 1}, {49, 2}, 
  {49, 3}, {49, 4}, {49, 5}, {49, 6}, 
  {50, 1}, {50, 2}, {50, 3}, {50, 4}, 
  {50, 5}, {50, 6}, {51, 1}, {51, 2}, 
  {51, 3}, {51, 4}, {51, 5}, {51, 6}, 
  {52, 1}, {52, 2}, {52, 3}, {52, 4}, 
  {52, 5}, {52, 6}, {54, 1}, {54, 2}, 
  {54, 3}, {54, 4}, {54, 5}, {55, 1}, 
  {55, 2}, {55, 3}, {55, 4}, {56, 1}, 
  {56, 2}, {56, 3}, {56, 4}, {56, 5}, 
  {56, 6}, {57, 1}, {57, 2}, {57, 3}, 
  {57, 4}, {58, 1}, {58, 2}, {58, 3}, 
  {58, 4}, {58, 5}, {58, 6}, {59, 1}, 
  {59, 2}, {59, 3}, {59, 4}, {59, 5}, 
  {60, 1}, {60, 2}, {60, 3}, {60, 4}, 
  {60, 5}, {60, 6}, {61, 1}, {61, 2}, 
  {61, 3}, {61, 4}, {61, 5}, {61, 6}, 
  {62, 1}, {62, 2}, {62, 3}, {62, 4}, 
  {63, 1}, {63, 2}, {63, 3}, {63, 4}, 
  {64, 1}, {64, 2}, {64, 3}, {64, 4}, 
  {65, 1}, {65, 2}, {65, 3}, {65, 4}, 
  {66, 1}, {66, 2}, {66, 3}, {66, 4}, 
  {66, 5}, {66, 6}, {67, 1}, {67, 2}, 
  {67, 3}, {67, 4}, {67, 5}, {67, 6}, 
  {69, 1}, {69, 2}, {69, 3}, {69, 4}, 
  {69, 5}, {69, 6}, {70, 1}, {70, 2}, 
  {70, 3}, {70, 4}, {70, 5}, {71, 1}, 
  {71, 2}, {71, 3}, {71, 4}, {72, 1}, 
  {72, 2}, {72, 3}, {72, 4}, {73, 1}, 
  {73, 2}, {74, 1}, {74, 2}, {74, 3}, 
  {74, 4}, {74, 5}, {74, 6}, {75, 1}, 
  {75, 2}, {75, 3}, {75, 4}, {75, 5}, 
  {75, 6}, {76, 1}, {76, 2}, {76, 3}, 
  {76, 4}, {76, 5}, {76, 6}, {77, 1}, 
  {77, 2}, {77, 3}, {77, 4}, {77, 5}, 
  {77, 6}, {78, 1}, {78, 2}, {78, 3}, 
  {78, 4}, {78, 5}, {78, 6}, {79, 1}, 
  {79, 2}, {79, 3}, {79, 4}, {79, 5}, 
  {79, 6}, {80, 1}, {80, 2}, {80, 3}, 
  {80, 4}, {80, 5}, {80, 6}, {81, 1}, 
  {81, 2}, {82, 1}, {82, 2}, {83, 1}, 
  {83, 2}, {84, 1}, {84, 2}, {84, 3}, 
  {84, 4}, {84, 5}, {84, 6}, {85, 1}, 
  {85, 2}, {85, 3}, {85, 4}, {85, 5}, 
  {85, 6}, {86, 1}, {86, 2}, {87, 1}, 
  {87, 2}, {87, 3}, {87, 4}, {87, 5}, 
  {87, 6}, {88, 1}, {88, 2}, {88, 3}, 
  {88, 4}, {88, 5}, {88, 6}, {89, 1}, 
  {89, 2}, {89, 3}, {89, 4}, {89, 5}, 
  {89, 6}, {90, 1}, {90, 2}, {90, 3}, 
  {90, 4}, {90, 5}, {90, 6}, {91, 1}, 
  {91, 2}, {91, 3}, {91, 4}, {92, 1}, 
  {92, 2}, {92, 3}, {92, 4}, {92, 5}, 
  {92, 6}, {93, 1}, {93, 2}, {93, 3}, 
  {93, 4}, {93, 5}, {93, 6}, {94, 1}, 
  {94, 2}, {94, 3}, {94, 4}, {94, 5}, 
  {94, 6}, {95, 1}, {95, 2}, {95, 3}, 
  {95, 4}, {95, 5}, {95, 6}, {96, 1}, 
  {96, 2}, {97, 1}, {97, 2}, {99, 1}, 
  {99, 2}, {99, 3}, {99, 4}, {99, 5}, 
  {99, 6}, {100, 1}, {100, 2}, {100, 3}, 
  {100, 4}, {100, 5}, {100, 6}, {101, 1}, 
  {101, 2}, {102, 1}, {102, 2}, {102, 3}, 
  {102, 4}, {102, 5}, {102, 6}, {103, 1}, 
  {103, 2}, {103, 3}, {103, 4}, {103, 5}, 
  {103, 6}, {104, 1}, {104, 2}, {104, 3}, 
  {104, 4}, {104, 5}, {104, 6}, {105, 1}, 
  {105, 2}, {106, 1}, {106, 2}, {106, 3}, 
  {106, 4}, {106, 5}, {106, 6}, {107, 1}, 
  {107, 2}, {107, 3}, {107, 4}, {107, 5}, 
  {107, 6}, {108, 1}, {108, 2}, {109, 1}, 
  {109, 2}, {109, 3}, {109, 4}, {109, 5}, 
  {109, 6}, {110, 1}, {110, 2}, {110, 3}, 
  {110, 4}, {110, 5}, {110, 6}, {111, 1}, 
  {111, 2}, {112, 1}, {112, 2}, {113, 2}, 
  {113, 3}, {113, 4}, {114, 1}, {114, 2}, 
  {114, 3}, {114, 4}, {114, 5}, {114, 6}, 
  {115, 1}, {115, 2}, {116, 1}, {116, 2}, 
  {117, 1}, {117, 2}, {118, 1}, {118, 2}, 
  {118, 3}, {118, 4}, {118, 5}, {118, 6}, 
  {119, 1}, {119, 2}, {119, 3}, {119, 4}, 
  {119, 5}, {119, 6}, {120, 1}, {120, 2}, 
  {120, 3}, {120, 4}, {120, 5}, {120, 6}, 
  {121, 1}, {121, 2}, {121, 3}, {121, 4}, 
  {121, 5}, {121, 6}, {122, 1}, {122, 2}, 
  {122, 3}, {122, 4}, {122, 5}, {122, 6}, 
  {123, 1}, {123, 2}, {123, 3}, {123, 4}, 
  {123, 5}, {123, 6}, {124, 1}, {124, 2}, 
  {124, 3}, {124, 4}, {124, 5}, {124, 6}, 
  {125, 1}, {125, 2}, {125, 3}, {125, 4}, 
  {125, 5}, {125, 6}, {126, 1}, {126, 2}, 
  {126, 3}, {126, 4}, {126, 5}, {126, 6}, 
  {127, 1}, {127, 2}, {127, 3}, {127, 4}, 
  {127, 5}, {127, 6}, {128, 1}, {128, 2}, 
  {128, 3}, {128, 4}, {128, 5}, {128, 6}, 
  {129, 1}, {129, 2}, {129, 3}, {129, 4}, 
  {129, 5}, {129, 6}, {130, 1}, {130, 2}, 
  {130, 3}, {130, 4}, {130, 5}, {130, 6}, 
  {131, 1}, {131, 2}, {131, 3}, {131, 4}, 
  {131, 5}, {131, 6}, {132, 1}, {132, 2}, 
  {132, 3}, {132, 4}, {132, 5}, {132, 6}, 
  {133, 1}, {133, 2}, {133, 3}, {133, 4}, 
  {133, 5}, {133, 6}, {134, 1}, {134, 2}, 
  {134, 3}, {134, 4}, {134, 5}, {134, 6}, 
  {135, 1}, {135, 2}, {135, 3}, {135, 4}, 
  {135, 5}, {135, 6}, {136, 1}, {136, 2}, 
  {136, 3}, {136, 4}, {137, 1}, {137, 2}, 
  {137, 3}, {137, 4}, {138, 1}, {138, 2}, 
  {138, 3}, {138, 4}, {139, 1}, {139, 2}, 
  {139, 3}, {139, 4}, {139, 5}, {140, 1}, 
  {140, 2}, {140, 3}, {140, 4}, {141, 1}, 
  {141, 2}, {141, 3}, {141, 4}, {142, 1}, 
  {142, 2}, {142, 3}, {142, 4}, {142, 5}, 
  {142, 6}, {143, 1}, {143, 2}, {143, 3}, 
  {143, 4}, {144, 1}, {144, 2}, {144, 3}, 
  {144, 4}, {145, 1}, {145, 2}, {145, 3}, 
  {145, 4}, {146, 1}, {146, 2}, {146, 3}, 
  {146, 4}, {147, 1}, {147, 2}, {147, 3}, 
  {147, 4}, {148, 1}, {148, 2}, {148, 3}, 
  {148, 4}, {148, 5}, {148, 6}, {149, 1}, 
  {149, 2}, {149, 3}, {149, 4}, {149, 5}, 
  {149, 6}, {150, 1}, {150, 2}, {150, 3}, 
  {150, 4}, {150, 5}, {150, 6}, {151, 1}, 
  {151, 2}, {151, 3}, {151, 4}};

Function(SYSTEM_integer ) GMSGLOBX_solverplatformmapmap(
  SYSTEM_integer i,
  SYSTEM_integer j)
{
  SYSTEM_integer result;

  result = 0;
  if (i >= 1 && i <= 729) 
    if (j >= 1 && j <= 2) 
      result = GMSGLOBX_solverplatformmaptuple[i - 1][j - 1];
  return result;
}  /* solverplatformmapmap */
typedef SYSTEM_uint16 _sub_31GMSGLOBX;
typedef SYSTEM_uint8 _sub_33GMSGLOBX;
typedef SYSTEM_integer _arr_32GMSGLOBX[3];
typedef _arr_32GMSGLOBX _arr_30GMSGLOBX[2419];
static _arr_30GMSGLOBX GMSGLOBX_solvertypeplatformmaptuple = {{1, 16, 1}, 
  {1, 16, 2}, {1, 16, 3}, {1, 16, 4}, 
  {1, 16, 5}, {1, 16, 6}, {2, 2, 1}, 
  {2, 2, 2}, {2, 2, 3}, {2, 2, 4}, 
  {2, 2, 5}, {2, 2, 6}, {2, 4, 1}, 
  {2, 4, 2}, {2, 4, 3}, {2, 4, 4}, 
  {2, 4, 5}, {2, 4, 6}, {3, 2, 1}, 
  {3, 2, 2}, {3, 2, 3}, {3, 3, 1}, 
  {3, 3, 2}, {3, 3, 3}, {3, 4, 1}, 
  {3, 4, 2}, {3, 4, 3}, {4, 5, 1}, 
  {4, 5, 2}, {4, 5, 3}, {4, 5, 4}, 
  {4, 9, 1}, {4, 9, 2}, {4, 9, 3}, 
  {4, 9, 4}, {4, 10, 1}, {4, 10, 2}, 
  {4, 10, 3}, {4, 10, 4}, {4, 11, 1}, 
  {4, 11, 2}, {4, 11, 3}, {4, 11, 4}, 
  {4, 12, 1}, {4, 12, 2}, {4, 12, 3}, 
  {4, 12, 4}, {4, 13, 1}, {4, 13, 2}, 
  {4, 13, 3}, {4, 13, 4}, {4, 14, 1}, 
  {4, 14, 2}, {4, 14, 3}, {4, 14, 4}, 
  {4, 15, 1}, {4, 15, 2}, {4, 15, 3}, 
  {4, 15, 4}, {5, 2, 1}, {5, 2, 2}, 
  {5, 2, 3}, {5, 2, 4}, {5, 3, 1}, 
  {5, 3, 2}, {5, 3, 3}, {5, 3, 4}, 
  {5, 4, 1}, {5, 4, 2}, {5, 4, 3}, 
  {5, 4, 4}, {5, 5, 1}, {5, 5, 2}, 
  {5, 5, 3}, {5, 5, 4}, {5, 9, 1}, 
  {5, 9, 2}, {5, 9, 3}, {5, 9, 4}, 
  {5, 10, 1}, {5, 10, 2}, {5, 10, 3}, 
  {5, 10, 4}, {5, 11, 1}, {5, 11, 2}, 
  {5, 11, 3}, {5, 11, 4}, {5, 12, 1}, 
  {5, 12, 2}, {5, 12, 3}, {5, 12, 4}, 
  {5, 13, 1}, {5, 13, 2}, {5, 13, 3}, 
  {5, 13, 4}, {5, 14, 1}, {5, 14, 2}, 
  {5, 14, 3}, {5, 14, 4}, {5, 15, 1}, 
  {5, 15, 2}, {5, 15, 3}, {5, 15, 4}, 
  {6, 2, 1}, {6, 2, 2}, {6, 2, 3}, 
  {6, 2, 4}, {6, 2, 5}, {6, 2, 6}, 
  {6, 4, 1}, {6, 4, 2}, {6, 4, 3}, 
  {6, 4, 4}, {6, 4, 5}, {6, 4, 6}, 
  {6, 5, 1}, {6, 5, 2}, {6, 5, 3}, 
  {6, 5, 4}, {6, 5, 5}, {6, 5, 6}, 
  {6, 9, 1}, {6, 9, 2}, {6, 9, 3}, 
  {6, 9, 4}, {6, 9, 5}, {6, 9, 6}, 
  {6, 10, 1}, {6, 10, 2}, {6, 10, 3}, 
  {6, 10, 4}, {6, 10, 5}, {6, 10, 6}, 
  {6, 11, 1}, {6, 11, 2}, {6, 11, 3}, 
  {6, 11, 4}, {6, 11, 5}, {6, 11, 6}, 
  {6, 13, 1}, {6, 13, 2}, {6, 13, 3}, 
  {6, 13, 4}, {6, 13, 5}, {6, 13, 6}, 
  {6, 15, 1}, {6, 15, 2}, {6, 15, 3}, 
  {6, 15, 4}, {6, 15, 5}, {6, 15, 6}, 
  {7, 2, 1}, {7, 2, 2}, {7, 2, 3}, 
  {7, 2, 4}, {7, 2, 5}, {7, 2, 6}, 
  {7, 3, 1}, {7, 3, 2}, {7, 3, 3}, 
  {7, 3, 4}, {7, 3, 5}, {7, 3, 6}, 
  {7, 4, 1}, {7, 4, 2}, {7, 4, 3}, 
  {7, 4, 4}, {7, 4, 5}, {7, 4, 6}, 
  {7, 13, 1}, {7, 13, 2}, {7, 13, 3}, 
  {7, 13, 4}, {7, 13, 5}, {7, 13, 6}, 
  {7, 14, 1}, {7, 14, 2}, {7, 14, 3}, 
  {7, 14, 4}, {7, 14, 5}, {7, 14, 6}, 
  {7, 15, 1}, {7, 15, 2}, {7, 15, 3}, 
  {7, 15, 4}, {7, 15, 5}, {7, 15, 6}, 
  {8, 3, 2}, {8, 3, 3}, {8, 3, 4}, 
  {8, 12, 2}, {8, 12, 3}, {8, 12, 4}, 
  {8, 14, 2}, {8, 14, 3}, {8, 14, 4}, 
  {9, 16, 1}, {9, 16, 2}, {9, 16, 3}, 
  {9, 16, 4}, {9, 16, 5}, {10, 12, 1}, 
  {10, 12, 2}, {10, 12, 3}, {10, 12, 4}, 
  {10, 12, 5}, {10, 12, 6}, {10, 14, 1}, 
  {10, 14, 2}, {10, 14, 3}, {10, 14, 4}, 
  {10, 14, 5}, {10, 14, 6}, {11, 12, 1}, 
  {11, 12, 2}, {11, 12, 3}, {11, 12, 4}, 
  {11, 12, 5}, {11, 12, 6}, {11, 14, 1}, 
  {11, 14, 2}, {11, 14, 3}, {11, 14, 4}, 
  {11, 14, 5}, {11, 14, 6}, {13, 13, 1}, 
  {13, 13, 2}, {13, 13, 3}, {13, 13, 4}, 
  {13, 14, 1}, {13, 14, 2}, {13, 14, 3}, 
  {13, 14, 4}, {13, 15, 1}, {13, 15, 2}, 
  {13, 15, 3}, {13, 15, 4}, {14, 2, 1}, 
  {14, 2, 2}, {14, 2, 3}, {14, 2, 4}, 
  {14, 2, 6}, {14, 3, 1}, {14, 3, 2}, 
  {14, 3, 3}, {14, 3, 4}, {14, 3, 6}, 
  {14, 4, 1}, {14, 4, 2}, {14, 4, 3}, 
  {14, 4, 4}, {14, 4, 6}, {14, 13, 1}, 
  {14, 13, 2}, {14, 13, 3}, {14, 13, 4}, 
  {14, 13, 6}, {14, 14, 1}, {14, 14, 2}, 
  {14, 14, 3}, {14, 14, 4}, {14, 14, 6}, 
  {14, 15, 1}, {14, 15, 2}, {14, 15, 3}, 
  {14, 15, 4}, {14, 15, 6}, {15, 2, 1}, 
  {15, 2, 2}, {15, 2, 3}, {15, 2, 4}, 
  {15, 4, 1}, {15, 4, 2}, {15, 4, 3}, 
  {15, 4, 4}, {15, 5, 1}, {15, 5, 2}, 
  {15, 5, 3}, {15, 5, 4}, {15, 9, 1}, 
  {15, 9, 2}, {15, 9, 3}, {15, 9, 4}, 
  {15, 10, 1}, {15, 10, 2}, {15, 10, 3}, 
  {15, 10, 4}, {15, 11, 1}, {15, 11, 2}, 
  {15, 11, 3}, {15, 11, 4}, {15, 13, 1}, 
  {15, 13, 2}, {15, 13, 3}, {15, 13, 4}, 
  {15, 15, 1}, {15, 15, 2}, {15, 15, 3}, 
  {15, 15, 4}, {16, 2, 1}, {16, 2, 2}, 
  {16, 2, 3}, {16, 2, 4}, {16, 4, 1}, 
  {16, 4, 2}, {16, 4, 3}, {16, 4, 4}, 
  {16, 5, 1}, {16, 5, 2}, {16, 5, 3}, 
  {16, 5, 4}, {16, 7, 1}, {16, 7, 2}, 
  {16, 7, 3}, {16, 7, 4}, {16, 8, 1}, 
  {16, 8, 2}, {16, 8, 3}, {16, 8, 4}, 
  {16, 9, 1}, {16, 9, 2}, {16, 9, 3}, 
  {16, 9, 4}, {16, 10, 1}, {16, 10, 2}, 
  {16, 10, 3}, {16, 10, 4}, {16, 11, 1}, 
  {16, 11, 2}, {16, 11, 3}, {16, 11, 4}, 
  {16, 12, 1}, {16, 12, 2}, {16, 12, 3}, 
  {16, 12, 4}, {16, 13, 1}, {16, 13, 2}, 
  {16, 13, 3}, {16, 13, 4}, {16, 14, 1}, 
  {16, 14, 2}, {16, 14, 3}, {16, 14, 4}, 
  {16, 15, 1}, {16, 15, 2}, {16, 15, 3}, 
  {16, 15, 4}, {17, 2, 1}, {17, 2, 2}, 
  {17, 2, 3}, {17, 2, 4}, {17, 2, 5}, 
  {17, 4, 1}, {17, 4, 2}, {17, 4, 3}, 
  {17, 4, 4}, {17, 4, 5}, {17, 5, 1}, 
  {17, 5, 2}, {17, 5, 3}, {17, 5, 4}, 
  {17, 5, 5}, {17, 10, 1}, {17, 10, 2}, 
  {17, 10, 3}, {17, 10, 4}, {17, 10, 5}, 
  {17, 11, 1}, {17, 11, 2}, {17, 11, 3}, 
  {17, 11, 4}, {17, 11, 5}, {17, 13, 1}, 
  {17, 13, 2}, {17, 13, 3}, {17, 13, 4}, 
  {17, 13, 5}, {17, 15, 1}, {17, 15, 2}, 
  {17, 15, 3}, {17, 15, 4}, {17, 15, 5}, 
  {18, 2, 1}, {18, 2, 2}, {18, 2, 3}, 
  {18, 2, 4}, {18, 3, 1}, {18, 3, 2}, 
  {18, 3, 3}, {18, 3, 4}, {18, 4, 1}, 
  {18, 4, 2}, {18, 4, 3}, {18, 4, 4}, 
  {18, 5, 1}, {18, 5, 2}, {18, 5, 3}, 
  {18, 5, 4}, {18, 10, 1}, {18, 10, 2}, 
  {18, 10, 3}, {18, 10, 4}, {18, 11, 1}, 
  {18, 11, 2}, {18, 11, 3}, {18, 11, 4}, 
  {18, 12, 1}, {18, 12, 2}, {18, 12, 3}, 
  {18, 12, 4}, {18, 13, 1}, {18, 13, 2}, 
  {18, 13, 3}, {18, 13, 4}, {18, 14, 1}, 
  {18, 14, 2}, {18, 14, 3}, {18, 14, 4}, 
  {18, 15, 1}, {18, 15, 2}, {18, 15, 3}, 
  {18, 15, 4}, {18, 16, 1}, {18, 16, 2}, 
  {18, 16, 3}, {18, 16, 4}, {19, 3, 1}, 
  {19, 3, 2}, {19, 3, 3}, {19, 3, 4}, 
  {19, 5, 1}, {19, 5, 2}, {19, 5, 3}, 
  {19, 5, 4}, {19, 9, 1}, {19, 9, 2}, 
  {19, 9, 3}, {19, 9, 4}, {19, 10, 1}, 
  {19, 10, 2}, {19, 10, 3}, {19, 10, 4}, 
  {19, 11, 1}, {19, 11, 2}, {19, 11, 3}, 
  {19, 11, 4}, {19, 12, 1}, {19, 12, 2}, 
  {19, 12, 3}, {19, 12, 4}, {19, 13, 1}, 
  {19, 13, 2}, {19, 13, 3}, {19, 13, 4}, 
  {19, 14, 1}, {19, 14, 2}, {19, 14, 3}, 
  {19, 14, 4}, {19, 15, 1}, {19, 15, 2}, 
  {19, 15, 3}, {19, 15, 4}, {20, 2, 1}, 
  {20, 2, 2}, {20, 2, 3}, {20, 2, 4}, 
  {20, 2, 5}, {20, 2, 6}, {20, 4, 1}, 
  {20, 4, 2}, {20, 4, 3}, {20, 4, 4}, 
  {20, 4, 5}, {20, 4, 6}, {20, 5, 1}, 
  {20, 5, 2}, {20, 5, 3}, {20, 5, 4}, 
  {20, 5, 5}, {20, 5, 6}, {20, 9, 1}, 
  {20, 9, 2}, {20, 9, 3}, {20, 9, 4}, 
  {20, 9, 5}, {20, 9, 6}, {20, 10, 1}, 
  {20, 10, 2}, {20, 10, 3}, {20, 10, 4}, 
  {20, 10, 5}, {20, 10, 6}, {20, 11, 1}, 
  {20, 11, 2}, {20, 11, 3}, {20, 11, 4}, 
  {20, 11, 5}, {20, 11, 6}, {20, 13, 1}, 
  {20, 13, 2}, {20, 13, 3}, {20, 13, 4}, 
  {20, 13, 5}, {20, 13, 6}, {20, 15, 1}, 
  {20, 15, 2}, {20, 15, 3}, {20, 15, 4}, 
  {20, 15, 5}, {20, 15, 6}, {21, 5, 1}, 
  {21, 5, 2}, {21, 5, 3}, {21, 5, 4}, 
  {21, 5, 5}, {21, 10, 1}, {21, 10, 2}, 
  {21, 10, 3}, {21, 10, 4}, {21, 10, 5}, 
  {21, 11, 1}, {21, 11, 2}, {21, 11, 3}, 
  {21, 11, 4}, {21, 11, 5}, {21, 13, 1}, 
  {21, 13, 2}, {21, 13, 3}, {21, 13, 4}, 
  {21, 13, 5}, {21, 15, 1}, {21, 15, 2}, 
  {21, 15, 3}, {21, 15, 4}, {21, 15, 5}, 
  {22, 3, 2}, {22, 3, 3}, {22, 14, 2}, 
  {22, 14, 3}, {23, 6, 1}, {23, 6, 2}, 
  {23, 6, 3}, {23, 6, 4}, {23, 6, 5}, 
  {23, 6, 6}, {23, 9, 1}, {23, 9, 2}, 
  {23, 9, 3}, {23, 9, 4}, {23, 9, 5}, 
  {23, 9, 6}, {24, 12, 1}, {24, 12, 2}, 
  {24, 12, 3}, {24, 12, 4}, {24, 12, 5}, 
  {24, 12, 6}, {24, 14, 1}, {24, 14, 2}, 
  {24, 14, 3}, {24, 14, 4}, {24, 14, 5}, 
  {24, 14, 6}, {25, 3, 1}, {25, 3, 2}, 
  {25, 3, 3}, {25, 3, 4}, {25, 5, 1}, 
  {25, 5, 2}, {25, 5, 3}, {25, 5, 4}, 
  {25, 9, 1}, {25, 9, 2}, {25, 9, 3}, 
  {25, 9, 4}, {25, 10, 1}, {25, 10, 2}, 
  {25, 10, 3}, {25, 10, 4}, {25, 11, 1}, 
  {25, 11, 2}, {25, 11, 3}, {25, 11, 4}, 
  {25, 12, 1}, {25, 12, 2}, {25, 12, 3}, 
  {25, 12, 4}, {25, 13, 1}, {25, 13, 2}, 
  {25, 13, 3}, {25, 13, 4}, {25, 14, 1}, 
  {25, 14, 2}, {25, 14, 3}, {25, 14, 4}, 
  {25, 15, 1}, {25, 15, 2}, {25, 15, 3}, 
  {25, 15, 4}, {26, 2, 1}, {26, 2, 2}, 
  {26, 2, 3}, {26, 2, 4}, {26, 2, 5}, 
  {26, 2, 6}, {26, 4, 1}, {26, 4, 2}, 
  {26, 4, 3}, {26, 4, 4}, {26, 4, 5}, 
  {26, 4, 6}, {26, 5, 1}, {26, 5, 2}, 
  {26, 5, 3}, {26, 5, 4}, {26, 5, 5}, 
  {26, 5, 6}, {26, 9, 1}, {26, 9, 2}, 
  {26, 9, 3}, {26, 9, 4}, {26, 9, 5}, 
  {26, 9, 6}, {26, 10, 1}, {26, 10, 2}, 
  {26, 10, 3}, {26, 10, 4}, {26, 10, 5}, 
  {26, 10, 6}, {26, 11, 1}, {26, 11, 2}, 
  {26, 11, 3}, {26, 11, 4}, {26, 11, 5}, 
  {26, 11, 6}, {26, 13, 1}, {26, 13, 2}, 
  {26, 13, 3}, {26, 13, 4}, {26, 13, 5}, 
  {26, 13, 6}, {26, 15, 1}, {26, 15, 2}, 
  {26, 15, 3}, {26, 15, 4}, {26, 15, 5}, 
  {26, 15, 6}, {27, 2, 1}, {27, 2, 2}, 
  {27, 2, 3}, {27, 2, 4}, {27, 2, 5}, 
  {27, 2, 6}, {27, 3, 1}, {27, 3, 2}, 
  {27, 3, 3}, {27, 3, 4}, {27, 3, 5}, 
  {27, 3, 6}, {27, 4, 1}, {27, 4, 2}, 
  {27, 4, 3}, {27, 4, 4}, {27, 4, 5}, 
  {27, 4, 6}, {27, 13, 1}, {27, 13, 2}, 
  {27, 13, 3}, {27, 13, 4}, {27, 13, 5}, 
  {27, 13, 6}, {27, 14, 1}, {27, 14, 2}, 
  {27, 14, 3}, {27, 14, 4}, {27, 14, 5}, 
  {27, 14, 6}, {27, 15, 1}, {27, 15, 2}, 
  {27, 15, 3}, {27, 15, 4}, {27, 15, 5}, 
  {27, 15, 6}, {29, 2, 1}, {29, 2, 2}, 
  {29, 2, 3}, {29, 2, 4}, {29, 2, 5}, 
  {29, 2, 6}, {29, 3, 1}, {29, 3, 2}, 
  {29, 3, 3}, {29, 3, 4}, {29, 3, 5}, 
  {29, 3, 6}, {29, 4, 1}, {29, 4, 2}, 
  {29, 4, 3}, {29, 4, 4}, {29, 4, 5}, 
  {29, 4, 6}, {30, 6, 1}, {30, 6, 2}, 
  {30, 6, 3}, {30, 6, 4}, {30, 6, 5}, 
  {30, 6, 6}, {31, 2, 1}, {31, 2, 2}, 
  {31, 2, 3}, {31, 2, 4}, {31, 3, 1}, 
  {31, 3, 2}, {31, 3, 3}, {31, 3, 4}, 
  {31, 4, 1}, {31, 4, 2}, {31, 4, 3}, 
  {31, 4, 4}, {31, 5, 1}, {31, 5, 2}, 
  {31, 5, 3}, {31, 5, 4}, {31, 10, 1}, 
  {31, 10, 2}, {31, 10, 3}, {31, 10, 4}, 
  {31, 11, 1}, {31, 11, 2}, {31, 11, 3}, 
  {31, 11, 4}, {31, 12, 1}, {31, 12, 2}, 
  {31, 12, 3}, {31, 12, 4}, {31, 13, 1}, 
  {31, 13, 2}, {31, 13, 3}, {31, 13, 4}, 
  {31, 14, 1}, {31, 14, 2}, {31, 14, 3}, 
  {31, 14, 4}, {31, 15, 1}, {31, 15, 2}, 
  {31, 15, 3}, {31, 15, 4}, {32, 2, 1}, 
  {32, 2, 2}, {32, 2, 3}, {32, 2, 4}, 
  {32, 2, 5}, {32, 2, 6}, {32, 3, 1}, 
  {32, 3, 2}, {32, 3, 3}, {32, 3, 4}, 
  {32, 3, 5}, {32, 3, 6}, {32, 4, 1}, 
  {32, 4, 2}, {32, 4, 3}, {32, 4, 4}, 
  {32, 4, 5}, {32, 4, 6}, {32, 5, 1}, 
  {32, 5, 2}, {32, 5, 3}, {32, 5, 4}, 
  {32, 5, 5}, {32, 5, 6}, {32, 6, 1}, 
  {32, 6, 2}, {32, 6, 3}, {32, 6, 4}, 
  {32, 6, 5}, {32, 6, 6}, {32, 7, 1}, 
  {32, 7, 2}, {32, 7, 3}, {32, 7, 4}, 
  {32, 7, 5}, {32, 7, 6}, {32, 8, 1}, 
  {32, 8, 2}, {32, 8, 3}, {32, 8, 4}, 
  {32, 8, 5}, {32, 8, 6}, {32, 9, 1}, 
  {32, 9, 2}, {32, 9, 3}, {32, 9, 4}, 
  {32, 9, 5}, {32, 9, 6}, {32, 10, 1}, 
  {32, 10, 2}, {32, 10, 3}, {32, 10, 4}, 
  {32, 10, 5}, {32, 10, 6}, {32, 11, 1}, 
  {32, 11, 2}, {32, 11, 3}, {32, 11, 4}, 
  {32, 11, 5}, {32, 11, 6}, {32, 12, 1}, 
  {32, 12, 2}, {32, 12, 3}, {32, 12, 4}, 
  {32, 12, 5}, {32, 12, 6}, {34, 2, 1}, 
  {34, 2, 2}, {34, 2, 3}, {34, 2, 4}, 
  {34, 2, 5}, {34, 2, 6}, {34, 4, 1}, 
  {34, 4, 2}, {34, 4, 3}, {34, 4, 4}, 
  {34, 4, 5}, {34, 4, 6}, {35, 2, 1}, 
  {35, 2, 2}, {35, 2, 3}, {35, 2, 4}, 
  {35, 2, 5}, {35, 2, 6}, {35, 3, 1}, 
  {35, 3, 2}, {35, 3, 3}, {35, 3, 4}, 
  {35, 3, 5}, {35, 3, 6}, {35, 4, 1}, 
  {35, 4, 2}, {35, 4, 3}, {35, 4, 4}, 
  {35, 4, 5}, {35, 4, 6}, {35, 5, 1}, 
  {35, 5, 2}, {35, 5, 3}, {35, 5, 4}, 
  {35, 5, 5}, {35, 5, 6}, {35, 6, 1}, 
  {35, 6, 2}, {35, 6, 3}, {35, 6, 4}, 
  {35, 6, 5}, {35, 6, 6}, {35, 7, 1}, 
  {35, 7, 2}, {35, 7, 3}, {35, 7, 4}, 
  {35, 7, 5}, {35, 7, 6}, {35, 8, 1}, 
  {35, 8, 2}, {35, 8, 3}, {35, 8, 4}, 
  {35, 8, 5}, {35, 8, 6}, {35, 9, 1}, 
  {35, 9, 2}, {35, 9, 3}, {35, 9, 4}, 
  {35, 9, 5}, {35, 9, 6}, {35, 10, 1}, 
  {35, 10, 2}, {35, 10, 3}, {35, 10, 4}, 
  {35, 10, 5}, {35, 10, 6}, {35, 11, 1}, 
  {35, 11, 2}, {35, 11, 3}, {35, 11, 4}, 
  {35, 11, 5}, {35, 11, 6}, {35, 12, 1}, 
  {35, 12, 2}, {35, 12, 3}, {35, 12, 4}, 
  {35, 12, 5}, {35, 12, 6}, {35, 13, 1}, 
  {35, 13, 2}, {35, 13, 3}, {35, 13, 4}, 
  {35, 13, 5}, {35, 13, 6}, {35, 14, 1}, 
  {35, 14, 2}, {35, 14, 3}, {35, 14, 4}, 
  {35, 14, 5}, {35, 14, 6}, {35, 15, 1}, 
  {35, 15, 2}, {35, 15, 3}, {35, 15, 4}, 
  {35, 15, 5}, {35, 15, 6}, {36, 12, 1}, 
  {36, 12, 2}, {36, 12, 3}, {36, 12, 4}, 
  {36, 14, 1}, {36, 14, 2}, {36, 14, 3}, 
  {36, 14, 4}, {37, 2, 1}, {37, 2, 2}, 
  {37, 2, 3}, {37, 2, 4}, {37, 3, 1}, 
  {37, 3, 2}, {37, 3, 3}, {37, 3, 4}, 
  {37, 4, 1}, {37, 4, 2}, {37, 4, 3}, 
  {37, 4, 4}, {38, 2, 1}, {38, 2, 2}, 
  {38, 2, 3}, {38, 2, 4}, {38, 2, 5}, 
  {38, 2, 6}, {38, 4, 1}, {38, 4, 2}, 
  {38, 4, 3}, {38, 4, 4}, {38, 4, 5}, 
  {38, 4, 6}, {38, 5, 1}, {38, 5, 2}, 
  {38, 5, 3}, {38, 5, 4}, {38, 5, 5}, 
  {38, 5, 6}, {38, 9, 1}, {38, 9, 2}, 
  {38, 9, 3}, {38, 9, 4}, {38, 9, 5}, 
  {38, 9, 6}, {38, 10, 1}, {38, 10, 2}, 
  {38, 10, 3}, {38, 10, 4}, {38, 10, 5}, 
  {38, 10, 6}, {38, 11, 1}, {38, 11, 2}, 
  {38, 11, 3}, {38, 11, 4}, {38, 11, 5}, 
  {38, 11, 6}, {38, 13, 1}, {38, 13, 2}, 
  {38, 13, 3}, {38, 13, 4}, {38, 13, 5}, 
  {38, 13, 6}, {38, 15, 1}, {38, 15, 2}, 
  {38, 15, 3}, {38, 15, 4}, {38, 15, 5}, 
  {38, 15, 6}, {39, 2, 1}, {39, 2, 2}, 
  {39, 2, 3}, {39, 2, 4}, {39, 2, 5}, 
  {39, 2, 6}, {39, 4, 1}, {39, 4, 2}, 
  {39, 4, 3}, {39, 4, 4}, {39, 4, 5}, 
  {39, 4, 6}, {39, 5, 1}, {39, 5, 2}, 
  {39, 5, 3}, {39, 5, 4}, {39, 5, 5}, 
  {39, 5, 6}, {39, 9, 1}, {39, 9, 2}, 
  {39, 9, 3}, {39, 9, 4}, {39, 9, 5}, 
  {39, 9, 6}, {39, 10, 1}, {39, 10, 2}, 
  {39, 10, 3}, {39, 10, 4}, {39, 10, 5}, 
  {39, 10, 6}, {39, 11, 1}, {39, 11, 2}, 
  {39, 11, 3}, {39, 11, 4}, {39, 11, 5}, 
  {39, 11, 6}, {39, 13, 1}, {39, 13, 2}, 
  {39, 13, 3}, {39, 13, 4}, {39, 13, 5}, 
  {39, 13, 6}, {39, 15, 1}, {39, 15, 2}, 
  {39, 15, 3}, {39, 15, 4}, {39, 15, 5}, 
  {39, 15, 6}, {40, 2, 1}, {40, 2, 2}, 
  {40, 2, 3}, {40, 2, 4}, {40, 2, 5}, 
  {40, 2, 6}, {40, 3, 1}, {40, 3, 2}, 
  {40, 3, 3}, {40, 3, 4}, {40, 3, 5}, 
  {40, 3, 6}, {40, 4, 1}, {40, 4, 2}, 
  {40, 4, 3}, {40, 4, 4}, {40, 4, 5}, 
  {40, 4, 6}, {40, 5, 1}, {40, 5, 2}, 
  {40, 5, 3}, {40, 5, 4}, {40, 5, 5}, 
  {40, 5, 6}, {40, 6, 1}, {40, 6, 2}, 
  {40, 6, 3}, {40, 6, 4}, {40, 6, 5}, 
  {40, 6, 6}, {40, 7, 1}, {40, 7, 2}, 
  {40, 7, 3}, {40, 7, 4}, {40, 7, 5}, 
  {40, 7, 6}, {40, 8, 1}, {40, 8, 2}, 
  {40, 8, 3}, {40, 8, 4}, {40, 8, 5}, 
  {40, 8, 6}, {40, 9, 1}, {40, 9, 2}, 
  {40, 9, 3}, {40, 9, 4}, {40, 9, 5}, 
  {40, 9, 6}, {40, 10, 1}, {40, 10, 2}, 
  {40, 10, 3}, {40, 10, 4}, {40, 10, 5}, 
  {40, 10, 6}, {40, 11, 1}, {40, 11, 2}, 
  {40, 11, 3}, {40, 11, 4}, {40, 11, 5}, 
  {40, 11, 6}, {40, 12, 1}, {40, 12, 2}, 
  {40, 12, 3}, {40, 12, 4}, {40, 12, 5}, 
  {40, 12, 6}, {40, 13, 1}, {40, 13, 2}, 
  {40, 13, 3}, {40, 13, 4}, {40, 13, 5}, 
  {40, 13, 6}, {40, 14, 1}, {40, 14, 2}, 
  {40, 14, 3}, {40, 14, 4}, {40, 14, 5}, 
  {40, 14, 6}, {40, 15, 1}, {40, 15, 2}, 
  {40, 15, 3}, {40, 15, 4}, {40, 15, 5}, 
  {40, 15, 6}, {41, 2, 1}, {41, 2, 2}, 
  {41, 2, 3}, {41, 2, 4}, {41, 2, 5}, 
  {41, 2, 6}, {41, 3, 1}, {41, 3, 2}, 
  {41, 3, 3}, {41, 3, 4}, {41, 3, 5}, 
  {41, 3, 6}, {41, 4, 1}, {41, 4, 2}, 
  {41, 4, 3}, {41, 4, 4}, {41, 4, 5}, 
  {41, 4, 6}, {41, 5, 1}, {41, 5, 2}, 
  {41, 5, 3}, {41, 5, 4}, {41, 5, 5}, 
  {41, 5, 6}, {41, 6, 1}, {41, 6, 2}, 
  {41, 6, 3}, {41, 6, 4}, {41, 6, 5}, 
  {41, 6, 6}, {41, 7, 1}, {41, 7, 2}, 
  {41, 7, 3}, {41, 7, 4}, {41, 7, 5}, 
  {41, 7, 6}, {41, 8, 1}, {41, 8, 2}, 
  {41, 8, 3}, {41, 8, 4}, {41, 8, 5}, 
  {41, 8, 6}, {41, 9, 1}, {41, 9, 2}, 
  {41, 9, 3}, {41, 9, 4}, {41, 9, 5}, 
  {41, 9, 6}, {41, 10, 1}, {41, 10, 2}, 
  {41, 10, 3}, {41, 10, 4}, {41, 10, 5}, 
  {41, 10, 6}, {41, 11, 1}, {41, 11, 2}, 
  {41, 11, 3}, {41, 11, 4}, {41, 11, 5}, 
  {41, 11, 6}, {41, 12, 1}, {41, 12, 2}, 
  {41, 12, 3}, {41, 12, 4}, {41, 12, 5}, 
  {41, 12, 6}, {41, 13, 1}, {41, 13, 2}, 
  {41, 13, 3}, {41, 13, 4}, {41, 13, 5}, 
  {41, 13, 6}, {41, 14, 1}, {41, 14, 2}, 
  {41, 14, 3}, {41, 14, 4}, {41, 14, 5}, 
  {41, 14, 6}, {41, 15, 1}, {41, 15, 2}, 
  {41, 15, 3}, {41, 15, 4}, {41, 15, 5}, 
  {41, 15, 6}, {41, 16, 1}, {41, 16, 2}, 
  {41, 16, 3}, {41, 16, 4}, {41, 16, 5}, 
  {41, 16, 6}, {42, 5, 1}, {42, 5, 2}, 
  {42, 5, 3}, {42, 5, 4}, {42, 9, 1}, 
  {42, 9, 2}, {42, 9, 3}, {42, 9, 4}, 
  {42, 10, 1}, {42, 10, 2}, {42, 10, 3}, 
  {42, 10, 4}, {42, 11, 1}, {42, 11, 2}, 
  {42, 11, 3}, {42, 11, 4}, {42, 12, 1}, 
  {42, 12, 2}, {42, 12, 3}, {42, 12, 4}, 
  {42, 13, 1}, {42, 13, 2}, {42, 13, 3}, 
  {42, 13, 4}, {42, 14, 1}, {42, 14, 2}, 
  {42, 14, 3}, {42, 14, 4}, {42, 15, 1}, 
  {42, 15, 2}, {42, 15, 3}, {42, 15, 4}, 
  {43, 2, 1}, {43, 2, 2}, {43, 2, 3}, 
  {43, 2, 4}, {43, 2, 5}, {43, 2, 6}, 
  {43, 3, 1}, {43, 3, 2}, {43, 3, 3}, 
  {43, 3, 4}, {43, 3, 5}, {43, 3, 6}, 
  {43, 4, 1}, {43, 4, 2}, {43, 4, 3}, 
  {43, 4, 4}, {43, 4, 5}, {43, 4, 6}, 
  {43, 13, 1}, {43, 13, 2}, {43, 13, 3}, 
  {43, 13, 4}, {43, 13, 5}, {43, 13, 6}, 
  {43, 14, 1}, {43, 14, 2}, {43, 14, 3}, 
  {43, 14, 4}, {43, 14, 5}, {43, 14, 6}, 
  {43, 15, 1}, {43, 15, 2}, {43, 15, 3}, 
  {43, 15, 4}, {43, 15, 5}, {43, 15, 6}, 
  {44, 2, 1}, {44, 2, 2}, {44, 2, 3}, 
  {44, 2, 4}, {44, 2, 5}, {45, 2, 1}, 
  {45, 2, 2}, {45, 2, 3}, {45, 2, 4}, 
  {45, 2, 5}, {47, 2, 1}, {47, 2, 2}, 
  {47, 2, 3}, {47, 2, 4}, {47, 2, 5}, 
  {47, 2, 6}, {47, 3, 1}, {47, 3, 2}, 
  {47, 3, 3}, {47, 3, 4}, {47, 3, 5}, 
  {47, 3, 6}, {47, 4, 1}, {47, 4, 2}, 
  {47, 4, 3}, {47, 4, 4}, {47, 4, 5}, 
  {47, 4, 6}, {47, 5, 1}, {47, 5, 2}, 
  {47, 5, 3}, {47, 5, 4}, {47, 5, 5}, 
  {47, 5, 6}, {47, 6, 1}, {47, 6, 2}, 
  {47, 6, 3}, {47, 6, 4}, {47, 6, 5}, 
  {47, 6, 6}, {47, 7, 1}, {47, 7, 2}, 
  {47, 7, 3}, {47, 7, 4}, {47, 7, 5}, 
  {47, 7, 6}, {47, 8, 1}, {47, 8, 2}, 
  {47, 8, 3}, {47, 8, 4}, {47, 8, 5}, 
  {47, 8, 6}, {47, 10, 1}, {47, 10, 2}, 
  {47, 10, 3}, {47, 10, 4}, {47, 10, 5}, 
  {47, 10, 6}, {47, 11, 1}, {47, 11, 2}, 
  {47, 11, 3}, {47, 11, 4}, {47, 11, 5}, 
  {47, 11, 6}, {47, 12, 1}, {47, 12, 2}, 
  {47, 12, 3}, {47, 12, 4}, {47, 12, 5}, 
  {47, 12, 6}, {47, 13, 1}, {47, 13, 2}, 
  {47, 13, 3}, {47, 13, 4}, {47, 13, 5}, 
  {47, 13, 6}, {47, 14, 1}, {47, 14, 2}, 
  {47, 14, 3}, {47, 14, 4}, {47, 14, 5}, 
  {47, 14, 6}, {47, 15, 1}, {47, 15, 2}, 
  {47, 15, 3}, {47, 15, 4}, {47, 15, 5}, 
  {47, 15, 6}, {48, 2, 1}, {48, 2, 2}, 
  {48, 2, 3}, {48, 2, 4}, {48, 2, 5}, 
  {48, 2, 6}, {48, 3, 1}, {48, 3, 2}, 
  {48, 3, 3}, {48, 3, 4}, {48, 3, 5}, 
  {48, 3, 6}, {48, 4, 1}, {48, 4, 2}, 
  {48, 4, 3}, {48, 4, 4}, {48, 4, 5}, 
  {48, 4, 6}, {48, 5, 1}, {48, 5, 2}, 
  {48, 5, 3}, {48, 5, 4}, {48, 5, 5}, 
  {48, 5, 6}, {48, 6, 1}, {48, 6, 2}, 
  {48, 6, 3}, {48, 6, 4}, {48, 6, 5}, 
  {48, 6, 6}, {48, 10, 1}, {48, 10, 2}, 
  {48, 10, 3}, {48, 10, 4}, {48, 10, 5}, 
  {48, 10, 6}, {48, 11, 1}, {48, 11, 2}, 
  {48, 11, 3}, {48, 11, 4}, {48, 11, 5}, 
  {48, 11, 6}, {48, 12, 1}, {48, 12, 2}, 
  {48, 12, 3}, {48, 12, 4}, {48, 12, 5}, 
  {48, 12, 6}, {48, 13, 1}, {48, 13, 2}, 
  {48, 13, 3}, {48, 13, 4}, {48, 13, 5}, 
  {48, 13, 6}, {48, 14, 1}, {48, 14, 2}, 
  {48, 14, 3}, {48, 14, 4}, {48, 14, 5}, 
  {48, 14, 6}, {48, 15, 1}, {48, 15, 2}, 
  {48, 15, 3}, {48, 15, 4}, {48, 15, 5}, 
  {48, 15, 6}, {49, 2, 1}, {49, 2, 2}, 
  {49, 2, 3}, {49, 2, 4}, {49, 2, 5}, 
  {49, 2, 6}, {49, 3, 1}, {49, 3, 2}, 
  {49, 3, 3}, {49, 3, 4}, {49, 3, 5}, 
  {49, 3, 6}, {49, 4, 1}, {49, 4, 2}, 
  {49, 4, 3}, {49, 4, 4}, {49, 4, 5}, 
  {49, 4, 6}, {49, 5, 1}, {49, 5, 2}, 
  {49, 5, 3}, {49, 5, 4}, {49, 5, 5}, 
  {49, 5, 6}, {49, 6, 1}, {49, 6, 2}, 
  {49, 6, 3}, {49, 6, 4}, {49, 6, 5}, 
  {49, 6, 6}, {49, 10, 1}, {49, 10, 2}, 
  {49, 10, 3}, {49, 10, 4}, {49, 10, 5}, 
  {49, 10, 6}, {49, 11, 1}, {49, 11, 2}, 
  {49, 11, 3}, {49, 11, 4}, {49, 11, 5}, 
  {49, 11, 6}, {49, 12, 1}, {49, 12, 2}, 
  {49, 12, 3}, {49, 12, 4}, {49, 12, 5}, 
  {49, 12, 6}, {49, 13, 1}, {49, 13, 2}, 
  {49, 13, 3}, {49, 13, 4}, {49, 13, 5}, 
  {49, 13, 6}, {49, 14, 1}, {49, 14, 2}, 
  {49, 14, 3}, {49, 14, 4}, {49, 14, 5}, 
  {49, 14, 6}, {49, 15, 1}, {49, 15, 2}, 
  {49, 15, 3}, {49, 15, 4}, {49, 15, 5}, 
  {49, 15, 6}, {50, 2, 1}, {50, 2, 2}, 
  {50, 2, 3}, {50, 2, 4}, {50, 2, 5}, 
  {50, 2, 6}, {50, 3, 1}, {50, 3, 2}, 
  {50, 3, 3}, {50, 3, 4}, {50, 3, 5}, 
  {50, 3, 6}, {50, 4, 1}, {50, 4, 2}, 
  {50, 4, 3}, {50, 4, 4}, {50, 4, 5}, 
  {50, 4, 6}, {50, 5, 1}, {50, 5, 2}, 
  {50, 5, 3}, {50, 5, 4}, {50, 5, 5}, 
  {50, 5, 6}, {50, 6, 1}, {50, 6, 2}, 
  {50, 6, 3}, {50, 6, 4}, {50, 6, 5}, 
  {50, 6, 6}, {50, 9, 1}, {50, 9, 2}, 
  {50, 9, 3}, {50, 9, 4}, {50, 9, 5}, 
  {50, 9, 6}, {50, 10, 1}, {50, 10, 2}, 
  {50, 10, 3}, {50, 10, 4}, {50, 10, 5}, 
  {50, 10, 6}, {50, 11, 1}, {50, 11, 2}, 
  {50, 11, 3}, {50, 11, 4}, {50, 11, 5}, 
  {50, 11, 6}, {50, 12, 1}, {50, 12, 2}, 
  {50, 12, 3}, {50, 12, 4}, {50, 12, 5}, 
  {50, 12, 6}, {50, 13, 1}, {50, 13, 2}, 
  {50, 13, 3}, {50, 13, 4}, {50, 13, 5}, 
  {50, 13, 6}, {50, 14, 1}, {50, 14, 2}, 
  {50, 14, 3}, {50, 14, 4}, {50, 14, 5}, 
  {50, 14, 6}, {50, 15, 1}, {50, 15, 2}, 
  {50, 15, 3}, {50, 15, 4}, {50, 15, 5}, 
  {50, 15, 6}, {51, 16, 1}, {51, 16, 2}, 
  {51, 16, 3}, {51, 16, 4}, {51, 16, 5}, 
  {51, 16, 6}, {52, 2, 1}, {52, 2, 2}, 
  {52, 2, 3}, {52, 2, 4}, {52, 2, 5}, 
  {52, 2, 6}, {52, 3, 1}, {52, 3, 2}, 
  {52, 3, 3}, {52, 3, 4}, {52, 3, 5}, 
  {52, 3, 6}, {52, 4, 1}, {52, 4, 2}, 
  {52, 4, 3}, {52, 4, 4}, {52, 4, 5}, 
  {52, 4, 6}, {52, 5, 1}, {52, 5, 2}, 
  {52, 5, 3}, {52, 5, 4}, {52, 5, 5}, 
  {52, 5, 6}, {52, 6, 1}, {52, 6, 2}, 
  {52, 6, 3}, {52, 6, 4}, {52, 6, 5}, 
  {52, 6, 6}, {52, 7, 1}, {52, 7, 2}, 
  {52, 7, 3}, {52, 7, 4}, {52, 7, 5}, 
  {52, 7, 6}, {52, 8, 1}, {52, 8, 2}, 
  {52, 8, 3}, {52, 8, 4}, {52, 8, 5}, 
  {52, 8, 6}, {52, 9, 1}, {52, 9, 2}, 
  {52, 9, 3}, {52, 9, 4}, {52, 9, 5}, 
  {52, 9, 6}, {52, 10, 1}, {52, 10, 2}, 
  {52, 10, 3}, {52, 10, 4}, {52, 10, 5}, 
  {52, 10, 6}, {52, 11, 1}, {52, 11, 2}, 
  {52, 11, 3}, {52, 11, 4}, {52, 11, 5}, 
  {52, 11, 6}, {52, 12, 1}, {52, 12, 2}, 
  {52, 12, 3}, {52, 12, 4}, {52, 12, 5}, 
  {52, 12, 6}, {52, 13, 1}, {52, 13, 2}, 
  {52, 13, 3}, {52, 13, 4}, {52, 13, 5}, 
  {52, 13, 6}, {52, 14, 1}, {52, 14, 2}, 
  {52, 14, 3}, {52, 14, 4}, {52, 14, 5}, 
  {52, 14, 6}, {52, 15, 1}, {52, 15, 2}, 
  {52, 15, 3}, {52, 15, 4}, {52, 15, 5}, 
  {52, 15, 6}, {52, 16, 1}, {52, 16, 2}, 
  {52, 16, 3}, {52, 16, 4}, {52, 16, 5}, 
  {52, 16, 6}, {54, 2, 1}, {54, 2, 2}, 
  {54, 2, 3}, {54, 2, 4}, {54, 2, 5}, 
  {54, 4, 1}, {54, 4, 2}, {54, 4, 3}, 
  {54, 4, 4}, {54, 4, 5}, {54, 5, 1}, 
  {54, 5, 2}, {54, 5, 3}, {54, 5, 4}, 
  {54, 5, 5}, {54, 10, 1}, {54, 10, 2}, 
  {54, 10, 3}, {54, 10, 4}, {54, 10, 5}, 
  {54, 11, 1}, {54, 11, 2}, {54, 11, 3}, 
  {54, 11, 4}, {54, 11, 5}, {54, 13, 1}, 
  {54, 13, 2}, {54, 13, 3}, {54, 13, 4}, 
  {54, 13, 5}, {54, 15, 1}, {54, 15, 2}, 
  {54, 15, 3}, {54, 15, 4}, {54, 15, 5}, 
  {55, 2, 1}, {55, 2, 2}, {55, 2, 3}, 
  {55, 2, 4}, {55, 3, 1}, {55, 3, 2}, 
  {55, 3, 3}, {55, 3, 4}, {55, 4, 1}, 
  {55, 4, 2}, {55, 4, 3}, {55, 4, 4}, 
  {55, 5, 1}, {55, 5, 2}, {55, 5, 3}, 
  {55, 5, 4}, {55, 10, 1}, {55, 10, 2}, 
  {55, 10, 3}, {55, 10, 4}, {55, 11, 1}, 
  {55, 11, 2}, {55, 11, 3}, {55, 11, 4}, 
  {55, 12, 1}, {55, 12, 2}, {55, 12, 3}, 
  {55, 12, 4}, {55, 13, 1}, {55, 13, 2}, 
  {55, 13, 3}, {55, 13, 4}, {55, 14, 1}, 
  {55, 14, 2}, {55, 14, 3}, {55, 14, 4}, 
  {55, 15, 1}, {55, 15, 2}, {55, 15, 3}, 
  {55, 15, 4}, {56, 2, 1}, {56, 2, 2}, 
  {56, 2, 3}, {56, 2, 4}, {56, 2, 5}, 
  {56, 2, 6}, {56, 3, 1}, {56, 3, 2}, 
  {56, 3, 3}, {56, 3, 4}, {56, 3, 5}, 
  {56, 3, 6}, {56, 4, 1}, {56, 4, 2}, 
  {56, 4, 3}, {56, 4, 4}, {56, 4, 5}, 
  {56, 4, 6}, {56, 5, 1}, {56, 5, 2}, 
  {56, 5, 3}, {56, 5, 4}, {56, 5, 5}, 
  {56, 5, 6}, {56, 10, 1}, {56, 10, 2}, 
  {56, 10, 3}, {56, 10, 4}, {56, 10, 5}, 
  {56, 10, 6}, {56, 11, 1}, {56, 11, 2}, 
  {56, 11, 3}, {56, 11, 4}, {56, 11, 5}, 
  {56, 11, 6}, {56, 12, 1}, {56, 12, 2}, 
  {56, 12, 3}, {56, 12, 4}, {56, 12, 5}, 
  {56, 12, 6}, {57, 3, 1}, {57, 3, 2}, 
  {57, 3, 3}, {57, 3, 4}, {57, 5, 1}, 
  {57, 5, 2}, {57, 5, 3}, {57, 5, 4}, 
  {57, 9, 1}, {57, 9, 2}, {57, 9, 3}, 
  {57, 9, 4}, {57, 10, 1}, {57, 10, 2}, 
  {57, 10, 3}, {57, 10, 4}, {57, 11, 1}, 
  {57, 11, 2}, {57, 11, 3}, {57, 11, 4}, 
  {57, 12, 1}, {57, 12, 2}, {57, 12, 3}, 
  {57, 12, 4}, {57, 13, 1}, {57, 13, 2}, 
  {57, 13, 3}, {57, 13, 4}, {57, 14, 1}, 
  {57, 14, 2}, {57, 14, 3}, {57, 14, 4}, 
  {57, 15, 1}, {57, 15, 2}, {57, 15, 3}, 
  {57, 15, 4}, {58, 2, 1}, {58, 2, 2}, 
  {58, 2, 3}, {58, 2, 4}, {58, 2, 5}, 
  {58, 2, 6}, {58, 4, 1}, {58, 4, 2}, 
  {58, 4, 3}, {58, 4, 4}, {58, 4, 5}, 
  {58, 4, 6}, {58, 5, 1}, {58, 5, 2}, 
  {58, 5, 3}, {58, 5, 4}, {58, 5, 5}, 
  {58, 5, 6}, {58, 9, 1}, {58, 9, 2}, 
  {58, 9, 3}, {58, 9, 4}, {58, 9, 5}, 
  {58, 9, 6}, {58, 10, 1}, {58, 10, 2}, 
  {58, 10, 3}, {58, 10, 4}, {58, 10, 5}, 
  {58, 10, 6}, {58, 11, 1}, {58, 11, 2}, 
  {58, 11, 3}, {58, 11, 4}, {58, 11, 5}, 
  {58, 11, 6}, {58, 13, 1}, {58, 13, 2}, 
  {58, 13, 3}, {58, 13, 4}, {58, 13, 5}, 
  {58, 13, 6}, {58, 15, 1}, {58, 15, 2}, 
  {58, 15, 3}, {58, 15, 4}, {58, 15, 5}, 
  {58, 15, 6}, {59, 2, 1}, {59, 2, 2}, 
  {59, 2, 3}, {59, 2, 4}, {59, 2, 5}, 
  {59, 4, 1}, {59, 4, 2}, {59, 4, 3}, 
  {59, 4, 4}, {59, 4, 5}, {60, 2, 1}, 
  {60, 2, 2}, {60, 2, 3}, {60, 2, 4}, 
  {60, 2, 5}, {60, 2, 6}, {60, 3, 1}, 
  {60, 3, 2}, {60, 3, 3}, {60, 3, 4}, 
  {60, 3, 5}, {60, 3, 6}, {60, 4, 1}, 
  {60, 4, 2}, {60, 4, 3}, {60, 4, 4}, 
  {60, 4, 5}, {60, 4, 6}, {60, 5, 1}, 
  {60, 5, 2}, {60, 5, 3}, {60, 5, 4}, 
  {60, 5, 5}, {60, 5, 6}, {60, 6, 1}, 
  {60, 6, 2}, {60, 6, 3}, {60, 6, 4}, 
  {60, 6, 5}, {60, 6, 6}, {60, 7, 1}, 
  {60, 7, 2}, {60, 7, 3}, {60, 7, 4}, 
  {60, 7, 5}, {60, 7, 6}, {60, 8, 1}, 
  {60, 8, 2}, {60, 8, 3}, {60, 8, 4}, 
  {60, 8, 5}, {60, 8, 6}, {60, 9, 1}, 
  {60, 9, 2}, {60, 9, 3}, {60, 9, 4}, 
  {60, 9, 5}, {60, 9, 6}, {60, 10, 1}, 
  {60, 10, 2}, {60, 10, 3}, {60, 10, 4}, 
  {60, 10, 5}, {60, 10, 6}, {60, 11, 1}, 
  {60, 11, 2}, {60, 11, 3}, {60, 11, 4}, 
  {60, 11, 5}, {60, 11, 6}, {60, 12, 1}, 
  {60, 12, 2}, {60, 12, 3}, {60, 12, 4}, 
  {60, 12, 5}, {60, 12, 6}, {61, 6, 1}, 
  {61, 6, 2}, {61, 6, 3}, {61, 6, 4}, 
  {61, 6, 5}, {61, 6, 6}, {61, 7, 1}, 
  {61, 7, 2}, {61, 7, 3}, {61, 7, 4}, 
  {61, 7, 5}, {61, 7, 6}, {61, 8, 1}, 
  {61, 8, 2}, {61, 8, 3}, {61, 8, 4}, 
  {61, 8, 5}, {61, 8, 6}, {62, 2, 1}, 
  {62, 2, 2}, {62, 2, 3}, {62, 2, 4}, 
  {62, 3, 1}, {62, 3, 2}, {62, 3, 3}, 
  {62, 3, 4}, {62, 4, 1}, {62, 4, 2}, 
  {62, 4, 3}, {62, 4, 4}, {63, 2, 1}, 
  {63, 2, 2}, {63, 2, 3}, {63, 2, 4}, 
  {63, 3, 1}, {63, 3, 2}, {63, 3, 3}, 
  {63, 3, 4}, {63, 4, 1}, {63, 4, 2}, 
  {63, 4, 3}, {63, 4, 4}, {64, 2, 1}, 
  {64, 2, 2}, {64, 2, 3}, {64, 2, 4}, 
  {64, 3, 1}, {64, 3, 2}, {64, 3, 3}, 
  {64, 3, 4}, {64, 4, 1}, {64, 4, 2}, 
  {64, 4, 3}, {64, 4, 4}, {65, 2, 1}, 
  {65, 2, 2}, {65, 2, 3}, {65, 2, 4}, 
  {65, 3, 1}, {65, 3, 2}, {65, 3, 3}, 
  {65, 3, 4}, {65, 4, 1}, {65, 4, 2}, 
  {65, 4, 3}, {65, 4, 4}, {66, 2, 1}, 
  {66, 2, 2}, {66, 2, 3}, {66, 2, 4}, 
  {66, 2, 5}, {66, 2, 6}, {66, 4, 1}, 
  {66, 4, 2}, {66, 4, 3}, {66, 4, 4}, 
  {66, 4, 5}, {66, 4, 6}, {66, 5, 1}, 
  {66, 5, 2}, {66, 5, 3}, {66, 5, 4}, 
  {66, 5, 5}, {66, 5, 6}, {66, 10, 1}, 
  {66, 10, 2}, {66, 10, 3}, {66, 10, 4}, 
  {66, 10, 5}, {66, 10, 6}, {66, 11, 1}, 
  {66, 11, 2}, {66, 11, 3}, {66, 11, 4}, 
  {66, 11, 5}, {66, 11, 6}, {66, 13, 1}, 
  {66, 13, 2}, {66, 13, 3}, {66, 13, 4}, 
  {66, 13, 5}, {66, 13, 6}, {66, 15, 1}, 
  {66, 15, 2}, {66, 15, 3}, {66, 15, 4}, 
  {66, 15, 5}, {66, 15, 6}, {67, 6, 1}, 
  {67, 6, 2}, {67, 6, 3}, {67, 6, 4}, 
  {67, 6, 5}, {67, 6, 6}, {67, 9, 1}, 
  {67, 9, 2}, {67, 9, 3}, {67, 9, 4}, 
  {67, 9, 5}, {67, 9, 6}, {69, 2, 1}, 
  {69, 2, 2}, {69, 2, 3}, {69, 2, 4}, 
  {69, 2, 5}, {69, 2, 6}, {69, 3, 1}, 
  {69, 3, 2}, {69, 3, 3}, {69, 3, 4}, 
  {69, 3, 5}, {69, 3, 6}, {69, 4, 1}, 
  {69, 4, 2}, {69, 4, 3}, {69, 4, 4}, 
  {69, 4, 5}, {69, 4, 6}, {69, 5, 1}, 
  {69, 5, 2}, {69, 5, 3}, {69, 5, 4}, 
  {69, 5, 5}, {69, 5, 6}, {69, 6, 1}, 
  {69, 6, 2}, {69, 6, 3}, {69, 6, 4}, 
  {69, 6, 5}, {69, 6, 6}, {69, 7, 1}, 
  {69, 7, 2}, {69, 7, 3}, {69, 7, 4}, 
  {69, 7, 5}, {69, 7, 6}, {69, 8, 1}, 
  {69, 8, 2}, {69, 8, 3}, {69, 8, 4}, 
  {69, 8, 5}, {69, 8, 6}, {69, 9, 1}, 
  {69, 9, 2}, {69, 9, 3}, {69, 9, 4}, 
  {69, 9, 5}, {69, 9, 6}, {69, 10, 1}, 
  {69, 10, 2}, {69, 10, 3}, {69, 10, 4}, 
  {69, 10, 5}, {69, 10, 6}, {69, 11, 1}, 
  {69, 11, 2}, {69, 11, 3}, {69, 11, 4}, 
  {69, 11, 5}, {69, 11, 6}, {69, 12, 1}, 
  {69, 12, 2}, {69, 12, 3}, {69, 12, 4}, 
  {69, 12, 5}, {69, 12, 6}, {70, 16, 1}, 
  {70, 16, 2}, {70, 16, 3}, {70, 16, 4}, 
  {70, 16, 5}, {71, 2, 1}, {71, 2, 2}, 
  {71, 2, 3}, {71, 2, 4}, {71, 3, 1}, 
  {71, 3, 2}, {71, 3, 3}, {71, 3, 4}, 
  {71, 4, 1}, {71, 4, 2}, {71, 4, 3}, 
  {71, 4, 4}, {72, 2, 1}, {72, 2, 2}, 
  {72, 2, 3}, {72, 2, 4}, {72, 4, 1}, 
  {72, 4, 2}, {72, 4, 3}, {72, 4, 4}, 
  {140, 2, 1}, {140, 2, 2}, {140, 2, 3}, 
  {140, 2, 4}, {140, 4, 1}, {140, 4, 2}, 
  {140, 4, 3}, {140, 4, 4}, {140, 5, 1}, 
  {140, 5, 2}, {140, 5, 3}, {140, 5, 4}, 
  {140, 9, 1}, {140, 9, 2}, {140, 9, 3}, 
  {140, 9, 4}, {140, 10, 1}, {140, 10, 2}, 
  {140, 10, 3}, {140, 10, 4}, {140, 11, 1}, 
  {140, 11, 2}, {140, 11, 3}, {140, 11, 4}, 
  {140, 13, 1}, {140, 13, 2}, {140, 13, 3}, 
  {140, 13, 4}, {140, 15, 1}, {140, 15, 2}, 
  {140, 15, 3}, {140, 15, 4}, {141, 12, 1}, 
  {141, 12, 2}, {141, 12, 3}, {141, 12, 4}, 
  {141, 14, 1}, {141, 14, 2}, {141, 14, 3}, 
  {141, 14, 4}, {142, 2, 1}, {142, 2, 2}, 
  {142, 2, 3}, {142, 2, 4}, {142, 2, 5}, 
  {142, 2, 6}, {142, 4, 1}, {142, 4, 2}, 
  {142, 4, 3}, {142, 4, 4}, {142, 4, 5}, 
  {142, 4, 6}, {142, 5, 1}, {142, 5, 2}, 
  {142, 5, 3}, {142, 5, 4}, {142, 5, 5}, 
  {142, 5, 6}, {142, 9, 1}, {142, 9, 2}, 
  {142, 9, 3}, {142, 9, 4}, {142, 9, 5}, 
  {142, 9, 6}, {142, 10, 1}, {142, 10, 2}, 
  {142, 10, 3}, {142, 10, 4}, {142, 10, 5}, 
  {142, 10, 6}, {142, 11, 1}, {142, 11, 2}, 
  {142, 11, 3}, {142, 11, 4}, {142, 11, 5}, 
  {142, 11, 6}, {142, 13, 1}, {142, 13, 2}, 
  {142, 13, 3}, {142, 13, 4}, {142, 13, 5}, 
  {142, 13, 6}, {142, 15, 1}, {142, 15, 2}, 
  {142, 15, 3}, {142, 15, 4}, {142, 15, 5}, 
  {142, 15, 6}, {143, 12, 1}, {143, 12, 2}, 
  {143, 12, 3}, {143, 12, 4}, {143, 14, 1}, 
  {143, 14, 2}, {143, 14, 3}, {143, 14, 4}, 
  {144, 2, 1}, {144, 2, 2}, {144, 2, 3}, 
  {144, 2, 4}, {144, 3, 1}, {144, 3, 2}, 
  {144, 3, 3}, {144, 3, 4}, {144, 4, 1}, 
  {144, 4, 2}, {144, 4, 3}, {144, 4, 4}, 
  {145, 5, 1}, {145, 5, 2}, {145, 5, 3}, 
  {145, 5, 4}, {145, 9, 1}, {145, 9, 2}, 
  {145, 9, 3}, {145, 9, 4}, {145, 10, 1}, 
  {145, 10, 2}, {145, 10, 3}, {145, 10, 4}, 
  {145, 11, 1}, {145, 11, 2}, {145, 11, 3}, 
  {145, 11, 4}, {145, 12, 1}, {145, 12, 2}, 
  {145, 12, 3}, {145, 12, 4}, {145, 13, 1}, 
  {145, 13, 2}, {145, 13, 3}, {145, 13, 4}, 
  {145, 14, 1}, {145, 14, 2}, {145, 14, 3}, 
  {145, 14, 4}, {145, 15, 1}, {145, 15, 2}, 
  {145, 15, 3}, {145, 15, 4}, {146, 2, 1}, 
  {146, 2, 2}, {146, 2, 3}, {146, 2, 4}, 
  {146, 4, 1}, {146, 4, 2}, {146, 4, 3}, 
  {146, 4, 4}, {146, 5, 1}, {146, 5, 2}, 
  {146, 5, 3}, {146, 5, 4}, {146, 9, 1}, 
  {146, 9, 2}, {146, 9, 3}, {146, 9, 4}, 
  {146, 10, 1}, {146, 10, 2}, {146, 10, 3}, 
  {146, 10, 4}, {146, 11, 1}, {146, 11, 2}, 
  {146, 11, 3}, {146, 11, 4}, {146, 13, 1}, 
  {146, 13, 2}, {146, 13, 3}, {146, 13, 4}, 
  {146, 15, 1}, {146, 15, 2}, {146, 15, 3}, 
  {146, 15, 4}, {147, 3, 1}, {147, 3, 2}, 
  {147, 3, 3}, {147, 3, 4}, {147, 5, 1}, 
  {147, 5, 2}, {147, 5, 3}, {147, 5, 4}, 
  {147, 9, 1}, {147, 9, 2}, {147, 9, 3}, 
  {147, 9, 4}, {147, 10, 1}, {147, 10, 2}, 
  {147, 10, 3}, {147, 10, 4}, {147, 11, 1}, 
  {147, 11, 2}, {147, 11, 3}, {147, 11, 4}, 
  {147, 12, 1}, {147, 12, 2}, {147, 12, 3}, 
  {147, 12, 4}, {147, 13, 1}, {147, 13, 2}, 
  {147, 13, 3}, {147, 13, 4}, {147, 14, 1}, 
  {147, 14, 2}, {147, 14, 3}, {147, 14, 4}, 
  {147, 15, 1}, {147, 15, 2}, {147, 15, 3}, 
  {147, 15, 4}, {148, 16, 1}, {148, 16, 2}, 
  {148, 16, 3}, {148, 16, 4}, {148, 16, 5}, 
  {148, 16, 6}, {149, 6, 1}, {149, 6, 2}, 
  {149, 6, 3}, {149, 6, 4}, {149, 6, 5}, 
  {149, 6, 6}, {150, 2, 1}, {150, 2, 2}, 
  {150, 2, 3}, {150, 2, 4}, {150, 2, 5}, 
  {150, 2, 6}, {150, 4, 1}, {150, 4, 2}, 
  {150, 4, 3}, {150, 4, 4}, {150, 4, 5}, 
  {150, 4, 6}, {150, 5, 1}, {150, 5, 2}, 
  {150, 5, 3}, {150, 5, 4}, {150, 5, 5}, 
  {150, 5, 6}, {150, 9, 1}, {150, 9, 2}, 
  {150, 9, 3}, {150, 9, 4}, {150, 9, 5}, 
  {150, 9, 6}, {150, 10, 1}, {150, 10, 2}, 
  {150, 10, 3}, {150, 10, 4}, {150, 10, 5}, 
  {150, 10, 6}, {150, 11, 1}, {150, 11, 2}, 
  {150, 11, 3}, {150, 11, 4}, {150, 11, 5}, 
  {150, 11, 6}, {150, 13, 1}, {150, 13, 2}, 
  {150, 13, 3}, {150, 13, 4}, {150, 13, 5}, 
  {150, 13, 6}, {150, 15, 1}, {150, 15, 2}, 
  {150, 15, 3}, {150, 15, 4}, {150, 15, 5}, 
  {150, 15, 6}, {151, 2, 1}, {151, 2, 2}, 
  {151, 2, 3}, {151, 2, 4}, {151, 4, 1}, 
  {151, 4, 2}, {151, 4, 3}, {151, 4, 4}};

Function(SYSTEM_integer ) GMSGLOBX_solvertypeplatformmapmap(
  SYSTEM_integer i,
  SYSTEM_integer j)
{
  SYSTEM_integer result;

  result = 0;
  if (i >= 1 && i <= 2419) 
    if (j >= 1 && j <= 3) 
      result = GMSGLOBX_solvertypeplatformmaptuple[i - 1][j - 1];
  return result;
}  /* solvertypeplatformmapmap */

Function(SYSTEM_ansichar *) GMSGLOBX_hostplatform(
  SYSTEM_ansichar *result,
  SYSTEM_uint8 _len_ret)
{
  switch (P3PLATFORM_osplatform()) {
    case P3PLATFORM_oswindows95: 
    case P3PLATFORM_oswindowsnt: 
      _P3strcpy(result,_len_ret,_P3str1("\003WIN"));
      break;
    case P3PLATFORM_oswindows64emt: 
      _P3strcpy(result,_len_ret,_P3str1("\003WEX"));
      break;
    case P3PLATFORM_oslinux86_64: 
      _P3strcpy(result,_len_ret,_P3str1("\003LEX"));
      break;
    case P3PLATFORM_osdarwin_x64: 
      _P3strcpy(result,_len_ret,_P3str1("\003DEX"));
      break;
    case P3PLATFORM_ossunos_sparc64: 
      _P3strcpy(result,_len_ret,_P3str1("\003SOX"));
      break;
    case P3PLATFORM_osaix: 
      _P3strcpy(result,_len_ret,_P3str1("\003AIX"));
      break;
    default:
      _P3strcpy(result,_len_ret,_P3str1("\003XXX"));
  }
  return result;
}  /* hostplatform */

/* unit gmsglobx */
void _Init_Module_gmsglobx(void)
{
} /* _Init_Module_gmsglobx */

void _Final_Module_gmsglobx(void)
{
} /* _Final_Module_gmsglobx */

