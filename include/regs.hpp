#ifndef _REGS_H_
#define _REGS_H_

#define REG_GROUPS 29 // number of REG groups, i.e. REG, SREG, OREG, etc.
#define REG_PAGES 6
#define REG_PER_PAGE 16
#define REG_PER_GROUP REG_PAGES * REG_PER_PAGE

#define BASE_REG(n, r) gGameInfo->data[n * REG_PER_GROUP + r]

#define  REG(r) BASE_REG(0, r)
#define SREG(r) BASE_REG(1, r)
#define OREG(r) BASE_REG(2, r)
#define PREG(r) BASE_REG(3, r)
#define QREG(r) BASE_REG(4, r)
#define MREG(r) BASE_REG(5, r)
#define YREG(r) BASE_REG(6, r)
#define DREG(r) BASE_REG(7, r)
#define UREG(r) BASE_REG(8, r)
#define IREG(r) BASE_REG(9, r)
#define ZREG(r) BASE_REG(10, r)
#define CREG(r) BASE_REG(11, r)
#define NREG(r) BASE_REG(12, r)
#define KREG(r) BASE_REG(13, r)
#define XREG(r) BASE_REG(14, r)
#define cREG(r) BASE_REG(15, r)
#define sREG(r) BASE_REG(16, r)
#define iREG(r) BASE_REG(17, r)
#define WREG(r) BASE_REG(18, r)
#define AREG(r) BASE_REG(19, r)
#define VREG(r) BASE_REG(20, r)
#define HREG(r) BASE_REG(21, r)
#define GREG(r) BASE_REG(22, r)
#define mREG(r) BASE_REG(23, r)
#define nREG(r) BASE_REG(24, r)
#define BREG(r) BASE_REG(25, r)
#define dREG(r) BASE_REG(26, r)
#define kREG(r) BASE_REG(27, r)
#define bREG(r) BASE_REG(28, r)

#endif
