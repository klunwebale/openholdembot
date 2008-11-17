//
// Chairs
//


BEGIN_TESTCASE
    TESTCASE_ID ("0032")
    REASONING ("Range check for symbol chair")
    PRECONDITION (true)
    POSTCONDITION ((gws("chair") >= 0) && (gws("chair") <= 9))
    SYMBOLS_POSSIBLY_AFFECTED ("chair")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0033")
    REASONING ("Range check for symbol userchair")
    PRECONDITION (true)
    POSTCONDITION ((gws("userchair") >= 0) && (gws("userchair") <= 9))
    SYMBOLS_POSSIBLY_AFFECTED ("userchair")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0034")
    REASONING ("Range check for symbol dealerchair")
    PRECONDITION (true)
    POSTCONDITION ((gws("dealerchair") >= 0) && (gws("dealerchair") <= 9))
    SYMBOLS_POSSIBLY_AFFECTED ("dealerchair")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0035")
    REASONING ("Range check for symbol raischair")
    PRECONDITION (true)
    POSTCONDITION ((gws("raischair") >= 0) && (gws("raischair") <= 9))
    SYMBOLS_POSSIBLY_AFFECTED ("raischair")
END_TESTCASE