/* Generated automatically from machmode.def and config/riscv/riscv-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_INLINE_H
#define GCC_INSN_MODES_INLINE_H

#if !defined (USED_FOR_TARGET) && GCC_VERSION >= 4001

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
poly_uint16
mode_size_inline (machine_mode mode)
{
  extern const poly_uint16_pod mode_size[NUM_MACHINE_MODES];
  gcc_assert (mode >= 0 && mode < NUM_MACHINE_MODES);
  switch (mode)
    {
    case E_VOIDmode: return 0;
    case E_BLKmode: return 0;
    case E_CCmode: return 4;
    case E_BImode: return 1;
    case E_QImode: return 1;
    case E_HImode: return 2;
    case E_SImode: return 4;
    case E_DImode: return 8;
    case E_TImode: return 16;
    case E_TI2mode: return 16;
    case E_EI3mode: return 24;
    case E_OImode: return 32;
    case E_OI2mode: return 32;
    case E_OI4mode: return 32;
    case E_FI5mode: return 40;
    case E_CI3mode: return 48;
    case E_CI6mode: return 48;
    case E_RI7mode: return 56;
    case E_XImode: return 64;
    case E_XI2mode: return 64;
    case E_XI4mode: return 64;
    case E_XI8mode: return 64;
    case E_VI5mode: return 80;
    case E_YI3mode: return 96;
    case E_YI6mode: return 96;
    case E_WI7mode: return 112;
    case E_ZImode: return 128;
    case E_ZI2mode: return 128;
    case E_ZI4mode: return 128;
    case E_ZI8mode: return 128;
    case E_QQmode: return 1;
    case E_HQmode: return 2;
    case E_SQmode: return 4;
    case E_DQmode: return 8;
    case E_TQmode: return 16;
    case E_UQQmode: return 1;
    case E_UHQmode: return 2;
    case E_USQmode: return 4;
    case E_UDQmode: return 8;
    case E_UTQmode: return 16;
    case E_HAmode: return 2;
    case E_SAmode: return 4;
    case E_DAmode: return 8;
    case E_TAmode: return 16;
    case E_UHAmode: return 2;
    case E_USAmode: return 4;
    case E_UDAmode: return 8;
    case E_UTAmode: return 16;
    case E_HFmode: return 2;
    case E_SFmode: return 4;
    case E_DFmode: return 8;
    case E_TFmode: return 16;
    case E_SDmode: return 4;
    case E_DDmode: return 8;
    case E_TDmode: return 16;
    case E_CQImode: return 2;
    case E_CHImode: return 4;
    case E_CSImode: return 8;
    case E_CDImode: return 16;
    case E_CTI2mode: return 32;
    case E_CTImode: return 32;
    case E_CEI3mode: return 48;
    case E_COI4mode: return 64;
    case E_COI2mode: return 64;
    case E_COImode: return 64;
    case E_CFI5mode: return 80;
    case E_CCI6mode: return 96;
    case E_CCI3mode: return 96;
    case E_CRI7mode: return 112;
    case E_CXI8mode: return 128;
    case E_CXI4mode: return 128;
    case E_CXI2mode: return 128;
    case E_CXImode: return 128;
    case E_CVI5mode: return 160;
    case E_CYI6mode: return 192;
    case E_CYI3mode: return 192;
    case E_CWI7mode: return 224;
    case E_CZI8mode: return 256;
    case E_CZI4mode: return 256;
    case E_CZI2mode: return 256;
    case E_CZImode: return 256;
    case E_HCmode: return 4;
    case E_SCmode: return 8;
    case E_DCmode: return 16;
    case E_TCmode: return 32;
    case E_V8QImode: return 8;
    case E_V4HImode: return 8;
    case E_V2SImode: return 8;
    case E_V1DImode: return 8;
    case E_V16QImode: return 16;
    case E_V8HImode: return 16;
    case E_V4SImode: return 16;
    case E_V2DImode: return 16;
    case E_V1TImode: return 16;
    case E_V24QImode: return 24;
    case E_V12HImode: return 24;
    case E_V6SImode: return 24;
    case E_V3DImode: return 24;
    case E_V32QImode: return 32;
    case E_V16HImode: return 32;
    case E_V8SImode: return 32;
    case E_V4DImode: return 32;
    case E_V2TImode: return 32;
    case E_V40QImode: return 40;
    case E_V20HImode: return 40;
    case E_V10SImode: return 40;
    case E_V5DImode: return 40;
    case E_V48QImode: return 48;
    case E_V24HImode: return 48;
    case E_V12SImode: return 48;
    case E_V6DImode: return 48;
    case E_V3TImode: return 48;
    case E_V56QImode: return 56;
    case E_V28HImode: return 56;
    case E_V14SImode: return 56;
    case E_V7DImode: return 56;
    case E_V64QImode: return 64;
    case E_V32HImode: return 64;
    case E_V16SImode: return 64;
    case E_V8DImode: return 64;
    case E_V4TImode: return 64;
    case E_V80QImode: return 80;
    case E_V40HImode: return 80;
    case E_V20SImode: return 80;
    case E_V10DImode: return 80;
    case E_V5TImode: return 80;
    case E_V96QImode: return 96;
    case E_V48HImode: return 96;
    case E_V24SImode: return 96;
    case E_V12DImode: return 96;
    case E_V6TImode: return 96;
    case E_V112QImode: return 112;
    case E_V56HImode: return 112;
    case E_V28SImode: return 112;
    case E_V14DImode: return 112;
    case E_V7TImode: return 112;
    case E_V128QImode: return 128;
    case E_V64HImode: return 128;
    case E_V32SImode: return 128;
    case E_V16DImode: return 128;
    case E_V8TImode: return 128;
    case E_V4HFmode: return 8;
    case E_V2SFmode: return 8;
    case E_V1DFmode: return 8;
    case E_V8HFmode: return 16;
    case E_V4SFmode: return 16;
    case E_V2DFmode: return 16;
    case E_V1TFmode: return 16;
    case E_V12HFmode: return 24;
    case E_V6SFmode: return 24;
    case E_V3DFmode: return 24;
    case E_V16HFmode: return 32;
    case E_V8SFmode: return 32;
    case E_V4DFmode: return 32;
    case E_V2TFmode: return 32;
    case E_V20HFmode: return 40;
    case E_V10SFmode: return 40;
    case E_V5DFmode: return 40;
    case E_V24HFmode: return 48;
    case E_V12SFmode: return 48;
    case E_V6DFmode: return 48;
    case E_V3TFmode: return 48;
    case E_V28HFmode: return 56;
    case E_V14SFmode: return 56;
    case E_V7DFmode: return 56;
    case E_V32HFmode: return 64;
    case E_V16SFmode: return 64;
    case E_V8DFmode: return 64;
    case E_V4TFmode: return 64;
    case E_V40HFmode: return 80;
    case E_V20SFmode: return 80;
    case E_V10DFmode: return 80;
    case E_V5TFmode: return 80;
    case E_V48HFmode: return 96;
    case E_V24SFmode: return 96;
    case E_V12DFmode: return 96;
    case E_V6TFmode: return 96;
    case E_V56HFmode: return 112;
    case E_V28SFmode: return 112;
    case E_V14DFmode: return 112;
    case E_V7TFmode: return 112;
    case E_V64HFmode: return 128;
    case E_V32SFmode: return 128;
    case E_V16DFmode: return 128;
    case E_V8TFmode: return 128;
    default: return mode_size[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
poly_uint16
mode_nunits_inline (machine_mode mode)
{
  extern const poly_uint16_pod mode_nunits[NUM_MACHINE_MODES];
  switch (mode)
    {
    case E_VOIDmode: return 0;
    case E_BLKmode: return 0;
    case E_CCmode: return 1;
    case E_BImode: return 1;
    case E_QImode: return 1;
    case E_HImode: return 1;
    case E_SImode: return 1;
    case E_DImode: return 1;
    case E_TImode: return 1;
    case E_TI2mode: return 1;
    case E_EI3mode: return 1;
    case E_OImode: return 1;
    case E_OI2mode: return 1;
    case E_OI4mode: return 1;
    case E_FI5mode: return 1;
    case E_CI3mode: return 1;
    case E_CI6mode: return 1;
    case E_RI7mode: return 1;
    case E_XImode: return 1;
    case E_XI2mode: return 1;
    case E_XI4mode: return 1;
    case E_XI8mode: return 1;
    case E_VI5mode: return 1;
    case E_YI3mode: return 1;
    case E_YI6mode: return 1;
    case E_WI7mode: return 1;
    case E_ZImode: return 1;
    case E_ZI2mode: return 1;
    case E_ZI4mode: return 1;
    case E_ZI8mode: return 1;
    case E_QQmode: return 1;
    case E_HQmode: return 1;
    case E_SQmode: return 1;
    case E_DQmode: return 1;
    case E_TQmode: return 1;
    case E_UQQmode: return 1;
    case E_UHQmode: return 1;
    case E_USQmode: return 1;
    case E_UDQmode: return 1;
    case E_UTQmode: return 1;
    case E_HAmode: return 1;
    case E_SAmode: return 1;
    case E_DAmode: return 1;
    case E_TAmode: return 1;
    case E_UHAmode: return 1;
    case E_USAmode: return 1;
    case E_UDAmode: return 1;
    case E_UTAmode: return 1;
    case E_HFmode: return 1;
    case E_SFmode: return 1;
    case E_DFmode: return 1;
    case E_TFmode: return 1;
    case E_SDmode: return 1;
    case E_DDmode: return 1;
    case E_TDmode: return 1;
    case E_CQImode: return 2;
    case E_CHImode: return 2;
    case E_CSImode: return 2;
    case E_CDImode: return 2;
    case E_CTI2mode: return 2;
    case E_CTImode: return 2;
    case E_CEI3mode: return 2;
    case E_COI4mode: return 2;
    case E_COI2mode: return 2;
    case E_COImode: return 2;
    case E_CFI5mode: return 2;
    case E_CCI6mode: return 2;
    case E_CCI3mode: return 2;
    case E_CRI7mode: return 2;
    case E_CXI8mode: return 2;
    case E_CXI4mode: return 2;
    case E_CXI2mode: return 2;
    case E_CXImode: return 2;
    case E_CVI5mode: return 2;
    case E_CYI6mode: return 2;
    case E_CYI3mode: return 2;
    case E_CWI7mode: return 2;
    case E_CZI8mode: return 2;
    case E_CZI4mode: return 2;
    case E_CZI2mode: return 2;
    case E_CZImode: return 2;
    case E_HCmode: return 2;
    case E_SCmode: return 2;
    case E_DCmode: return 2;
    case E_TCmode: return 2;
    case E_V8QImode: return 8;
    case E_V4HImode: return 4;
    case E_V2SImode: return 2;
    case E_V1DImode: return 1;
    case E_V16QImode: return 16;
    case E_V8HImode: return 8;
    case E_V4SImode: return 4;
    case E_V2DImode: return 2;
    case E_V1TImode: return 1;
    case E_V24QImode: return 24;
    case E_V12HImode: return 12;
    case E_V6SImode: return 6;
    case E_V3DImode: return 3;
    case E_V32QImode: return 32;
    case E_V16HImode: return 16;
    case E_V8SImode: return 8;
    case E_V4DImode: return 4;
    case E_V2TImode: return 2;
    case E_V40QImode: return 40;
    case E_V20HImode: return 20;
    case E_V10SImode: return 10;
    case E_V5DImode: return 5;
    case E_V48QImode: return 48;
    case E_V24HImode: return 24;
    case E_V12SImode: return 12;
    case E_V6DImode: return 6;
    case E_V3TImode: return 3;
    case E_V56QImode: return 56;
    case E_V28HImode: return 28;
    case E_V14SImode: return 14;
    case E_V7DImode: return 7;
    case E_V64QImode: return 64;
    case E_V32HImode: return 32;
    case E_V16SImode: return 16;
    case E_V8DImode: return 8;
    case E_V4TImode: return 4;
    case E_V80QImode: return 80;
    case E_V40HImode: return 40;
    case E_V20SImode: return 20;
    case E_V10DImode: return 10;
    case E_V5TImode: return 5;
    case E_V96QImode: return 96;
    case E_V48HImode: return 48;
    case E_V24SImode: return 24;
    case E_V12DImode: return 12;
    case E_V6TImode: return 6;
    case E_V112QImode: return 112;
    case E_V56HImode: return 56;
    case E_V28SImode: return 28;
    case E_V14DImode: return 14;
    case E_V7TImode: return 7;
    case E_V128QImode: return 128;
    case E_V64HImode: return 64;
    case E_V32SImode: return 32;
    case E_V16DImode: return 16;
    case E_V8TImode: return 8;
    case E_V4HFmode: return 4;
    case E_V2SFmode: return 2;
    case E_V1DFmode: return 1;
    case E_V8HFmode: return 8;
    case E_V4SFmode: return 4;
    case E_V2DFmode: return 2;
    case E_V1TFmode: return 1;
    case E_V12HFmode: return 12;
    case E_V6SFmode: return 6;
    case E_V3DFmode: return 3;
    case E_V16HFmode: return 16;
    case E_V8SFmode: return 8;
    case E_V4DFmode: return 4;
    case E_V2TFmode: return 2;
    case E_V20HFmode: return 20;
    case E_V10SFmode: return 10;
    case E_V5DFmode: return 5;
    case E_V24HFmode: return 24;
    case E_V12SFmode: return 12;
    case E_V6DFmode: return 6;
    case E_V3TFmode: return 3;
    case E_V28HFmode: return 28;
    case E_V14SFmode: return 14;
    case E_V7DFmode: return 7;
    case E_V32HFmode: return 32;
    case E_V16SFmode: return 16;
    case E_V8DFmode: return 8;
    case E_V4TFmode: return 4;
    case E_V40HFmode: return 40;
    case E_V20SFmode: return 20;
    case E_V10DFmode: return 10;
    case E_V5TFmode: return 5;
    case E_V48HFmode: return 48;
    case E_V24SFmode: return 24;
    case E_V12DFmode: return 12;
    case E_V6TFmode: return 6;
    case E_V56HFmode: return 56;
    case E_V28SFmode: return 28;
    case E_V14DFmode: return 14;
    case E_V7TFmode: return 7;
    case E_V64HFmode: return 64;
    case E_V32SFmode: return 32;
    case E_V16DFmode: return 16;
    case E_V8TFmode: return 8;
    default: return mode_nunits[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_inner_inline (machine_mode mode)
{
  extern const unsigned char mode_inner[NUM_MACHINE_MODES];
  gcc_assert (mode >= 0 && mode < NUM_MACHINE_MODES);
  switch (mode)
    {
    case E_VOIDmode: return E_VOIDmode;
    case E_BLKmode: return E_BLKmode;
    case E_CCmode: return E_CCmode;
    case E_BImode: return E_BImode;
    case E_QImode: return E_QImode;
    case E_HImode: return E_HImode;
    case E_SImode: return E_SImode;
    case E_DImode: return E_DImode;
    case E_TImode: return E_TImode;
    case E_TI2mode: return E_TI2mode;
    case E_EI3mode: return E_EI3mode;
    case E_OImode: return E_OImode;
    case E_OI2mode: return E_OI2mode;
    case E_OI4mode: return E_OI4mode;
    case E_FI5mode: return E_FI5mode;
    case E_CI3mode: return E_CI3mode;
    case E_CI6mode: return E_CI6mode;
    case E_RI7mode: return E_RI7mode;
    case E_XImode: return E_XImode;
    case E_XI2mode: return E_XI2mode;
    case E_XI4mode: return E_XI4mode;
    case E_XI8mode: return E_XI8mode;
    case E_VI5mode: return E_VI5mode;
    case E_YI3mode: return E_YI3mode;
    case E_YI6mode: return E_YI6mode;
    case E_WI7mode: return E_WI7mode;
    case E_ZImode: return E_ZImode;
    case E_ZI2mode: return E_ZI2mode;
    case E_ZI4mode: return E_ZI4mode;
    case E_ZI8mode: return E_ZI8mode;
    case E_QQmode: return E_QQmode;
    case E_HQmode: return E_HQmode;
    case E_SQmode: return E_SQmode;
    case E_DQmode: return E_DQmode;
    case E_TQmode: return E_TQmode;
    case E_UQQmode: return E_UQQmode;
    case E_UHQmode: return E_UHQmode;
    case E_USQmode: return E_USQmode;
    case E_UDQmode: return E_UDQmode;
    case E_UTQmode: return E_UTQmode;
    case E_HAmode: return E_HAmode;
    case E_SAmode: return E_SAmode;
    case E_DAmode: return E_DAmode;
    case E_TAmode: return E_TAmode;
    case E_UHAmode: return E_UHAmode;
    case E_USAmode: return E_USAmode;
    case E_UDAmode: return E_UDAmode;
    case E_UTAmode: return E_UTAmode;
    case E_HFmode: return E_HFmode;
    case E_SFmode: return E_SFmode;
    case E_DFmode: return E_DFmode;
    case E_TFmode: return E_TFmode;
    case E_SDmode: return E_SDmode;
    case E_DDmode: return E_DDmode;
    case E_TDmode: return E_TDmode;
    case E_CQImode: return E_QImode;
    case E_CHImode: return E_HImode;
    case E_CSImode: return E_SImode;
    case E_CDImode: return E_DImode;
    case E_CTI2mode: return E_TI2mode;
    case E_CTImode: return E_TImode;
    case E_CEI3mode: return E_EI3mode;
    case E_COI4mode: return E_OI4mode;
    case E_COI2mode: return E_OI2mode;
    case E_COImode: return E_OImode;
    case E_CFI5mode: return E_FI5mode;
    case E_CCI6mode: return E_CI6mode;
    case E_CCI3mode: return E_CI3mode;
    case E_CRI7mode: return E_RI7mode;
    case E_CXI8mode: return E_XI8mode;
    case E_CXI4mode: return E_XI4mode;
    case E_CXI2mode: return E_XI2mode;
    case E_CXImode: return E_XImode;
    case E_CVI5mode: return E_VI5mode;
    case E_CYI6mode: return E_YI6mode;
    case E_CYI3mode: return E_YI3mode;
    case E_CWI7mode: return E_WI7mode;
    case E_CZI8mode: return E_ZI8mode;
    case E_CZI4mode: return E_ZI4mode;
    case E_CZI2mode: return E_ZI2mode;
    case E_CZImode: return E_ZImode;
    case E_HCmode: return E_HFmode;
    case E_SCmode: return E_SFmode;
    case E_DCmode: return E_DFmode;
    case E_TCmode: return E_TFmode;
    case E_V8QImode: return E_QImode;
    case E_V4HImode: return E_HImode;
    case E_V2SImode: return E_SImode;
    case E_V1DImode: return E_DImode;
    case E_V16QImode: return E_QImode;
    case E_V8HImode: return E_HImode;
    case E_V4SImode: return E_SImode;
    case E_V2DImode: return E_DImode;
    case E_V1TImode: return E_TImode;
    case E_V24QImode: return E_QImode;
    case E_V12HImode: return E_HImode;
    case E_V6SImode: return E_SImode;
    case E_V3DImode: return E_DImode;
    case E_V32QImode: return E_QImode;
    case E_V16HImode: return E_HImode;
    case E_V8SImode: return E_SImode;
    case E_V4DImode: return E_DImode;
    case E_V2TImode: return E_TImode;
    case E_V40QImode: return E_QImode;
    case E_V20HImode: return E_HImode;
    case E_V10SImode: return E_SImode;
    case E_V5DImode: return E_DImode;
    case E_V48QImode: return E_QImode;
    case E_V24HImode: return E_HImode;
    case E_V12SImode: return E_SImode;
    case E_V6DImode: return E_DImode;
    case E_V3TImode: return E_TImode;
    case E_V56QImode: return E_QImode;
    case E_V28HImode: return E_HImode;
    case E_V14SImode: return E_SImode;
    case E_V7DImode: return E_DImode;
    case E_V64QImode: return E_QImode;
    case E_V32HImode: return E_HImode;
    case E_V16SImode: return E_SImode;
    case E_V8DImode: return E_DImode;
    case E_V4TImode: return E_TImode;
    case E_V80QImode: return E_QImode;
    case E_V40HImode: return E_HImode;
    case E_V20SImode: return E_SImode;
    case E_V10DImode: return E_DImode;
    case E_V5TImode: return E_TImode;
    case E_V96QImode: return E_QImode;
    case E_V48HImode: return E_HImode;
    case E_V24SImode: return E_SImode;
    case E_V12DImode: return E_DImode;
    case E_V6TImode: return E_TImode;
    case E_V112QImode: return E_QImode;
    case E_V56HImode: return E_HImode;
    case E_V28SImode: return E_SImode;
    case E_V14DImode: return E_DImode;
    case E_V7TImode: return E_TImode;
    case E_V128QImode: return E_QImode;
    case E_V64HImode: return E_HImode;
    case E_V32SImode: return E_SImode;
    case E_V16DImode: return E_DImode;
    case E_V8TImode: return E_TImode;
    case E_V4HFmode: return E_HFmode;
    case E_V2SFmode: return E_SFmode;
    case E_V1DFmode: return E_DFmode;
    case E_V8HFmode: return E_HFmode;
    case E_V4SFmode: return E_SFmode;
    case E_V2DFmode: return E_DFmode;
    case E_V1TFmode: return E_TFmode;
    case E_V12HFmode: return E_HFmode;
    case E_V6SFmode: return E_SFmode;
    case E_V3DFmode: return E_DFmode;
    case E_V16HFmode: return E_HFmode;
    case E_V8SFmode: return E_SFmode;
    case E_V4DFmode: return E_DFmode;
    case E_V2TFmode: return E_TFmode;
    case E_V20HFmode: return E_HFmode;
    case E_V10SFmode: return E_SFmode;
    case E_V5DFmode: return E_DFmode;
    case E_V24HFmode: return E_HFmode;
    case E_V12SFmode: return E_SFmode;
    case E_V6DFmode: return E_DFmode;
    case E_V3TFmode: return E_TFmode;
    case E_V28HFmode: return E_HFmode;
    case E_V14SFmode: return E_SFmode;
    case E_V7DFmode: return E_DFmode;
    case E_V32HFmode: return E_HFmode;
    case E_V16SFmode: return E_SFmode;
    case E_V8DFmode: return E_DFmode;
    case E_V4TFmode: return E_TFmode;
    case E_V40HFmode: return E_HFmode;
    case E_V20SFmode: return E_SFmode;
    case E_V10DFmode: return E_DFmode;
    case E_V5TFmode: return E_TFmode;
    case E_V48HFmode: return E_HFmode;
    case E_V24SFmode: return E_SFmode;
    case E_V12DFmode: return E_DFmode;
    case E_V6TFmode: return E_TFmode;
    case E_V56HFmode: return E_HFmode;
    case E_V28SFmode: return E_SFmode;
    case E_V14DFmode: return E_DFmode;
    case E_V7TFmode: return E_TFmode;
    case E_V64HFmode: return E_HFmode;
    case E_V32SFmode: return E_SFmode;
    case E_V16DFmode: return E_DFmode;
    case E_V8TFmode: return E_TFmode;
    default: return mode_inner[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned char
mode_unit_size_inline (machine_mode mode)
{
  extern CONST_MODE_UNIT_SIZE unsigned char mode_unit_size[NUM_MACHINE_MODES];
  gcc_assert (mode >= 0 && mode < NUM_MACHINE_MODES);
  switch (mode)
    {
    case E_VOIDmode: return 0;
    case E_BLKmode: return 0;
    case E_CCmode: return 4;
    case E_BImode: return 1;
    case E_QImode: return 1;
    case E_HImode: return 2;
    case E_SImode: return 4;
    case E_DImode: return 8;
    case E_TImode: return 16;
    case E_TI2mode: return 16;
    case E_EI3mode: return 24;
    case E_OImode: return 32;
    case E_OI2mode: return 32;
    case E_OI4mode: return 32;
    case E_FI5mode: return 40;
    case E_CI3mode: return 48;
    case E_CI6mode: return 48;
    case E_RI7mode: return 56;
    case E_XImode: return 64;
    case E_XI2mode: return 64;
    case E_XI4mode: return 64;
    case E_XI8mode: return 64;
    case E_VI5mode: return 80;
    case E_YI3mode: return 96;
    case E_YI6mode: return 96;
    case E_WI7mode: return 112;
    case E_ZImode: return 128;
    case E_ZI2mode: return 128;
    case E_ZI4mode: return 128;
    case E_ZI8mode: return 128;
    case E_QQmode: return 1;
    case E_HQmode: return 2;
    case E_SQmode: return 4;
    case E_DQmode: return 8;
    case E_TQmode: return 16;
    case E_UQQmode: return 1;
    case E_UHQmode: return 2;
    case E_USQmode: return 4;
    case E_UDQmode: return 8;
    case E_UTQmode: return 16;
    case E_HAmode: return 2;
    case E_SAmode: return 4;
    case E_DAmode: return 8;
    case E_TAmode: return 16;
    case E_UHAmode: return 2;
    case E_USAmode: return 4;
    case E_UDAmode: return 8;
    case E_UTAmode: return 16;
    case E_HFmode: return 2;
    case E_SFmode: return 4;
    case E_DFmode: return 8;
    case E_TFmode: return 16;
    case E_SDmode: return 4;
    case E_DDmode: return 8;
    case E_TDmode: return 16;
    case E_CQImode: return 1;
    case E_CHImode: return 2;
    case E_CSImode: return 4;
    case E_CDImode: return 8;
    case E_CTI2mode: return 16;
    case E_CTImode: return 16;
    case E_CEI3mode: return 24;
    case E_COI4mode: return 32;
    case E_COI2mode: return 32;
    case E_COImode: return 32;
    case E_CFI5mode: return 40;
    case E_CCI6mode: return 48;
    case E_CCI3mode: return 48;
    case E_CRI7mode: return 56;
    case E_CXI8mode: return 64;
    case E_CXI4mode: return 64;
    case E_CXI2mode: return 64;
    case E_CXImode: return 64;
    case E_CVI5mode: return 80;
    case E_CYI6mode: return 96;
    case E_CYI3mode: return 96;
    case E_CWI7mode: return 112;
    case E_CZI8mode: return 128;
    case E_CZI4mode: return 128;
    case E_CZI2mode: return 128;
    case E_CZImode: return 128;
    case E_HCmode: return 2;
    case E_SCmode: return 4;
    case E_DCmode: return 8;
    case E_TCmode: return 16;
    case E_V8QImode: return 1;
    case E_V4HImode: return 2;
    case E_V2SImode: return 4;
    case E_V1DImode: return 8;
    case E_V16QImode: return 1;
    case E_V8HImode: return 2;
    case E_V4SImode: return 4;
    case E_V2DImode: return 8;
    case E_V1TImode: return 16;
    case E_V24QImode: return 1;
    case E_V12HImode: return 2;
    case E_V6SImode: return 4;
    case E_V3DImode: return 8;
    case E_V32QImode: return 1;
    case E_V16HImode: return 2;
    case E_V8SImode: return 4;
    case E_V4DImode: return 8;
    case E_V2TImode: return 16;
    case E_V40QImode: return 1;
    case E_V20HImode: return 2;
    case E_V10SImode: return 4;
    case E_V5DImode: return 8;
    case E_V48QImode: return 1;
    case E_V24HImode: return 2;
    case E_V12SImode: return 4;
    case E_V6DImode: return 8;
    case E_V3TImode: return 16;
    case E_V56QImode: return 1;
    case E_V28HImode: return 2;
    case E_V14SImode: return 4;
    case E_V7DImode: return 8;
    case E_V64QImode: return 1;
    case E_V32HImode: return 2;
    case E_V16SImode: return 4;
    case E_V8DImode: return 8;
    case E_V4TImode: return 16;
    case E_V80QImode: return 1;
    case E_V40HImode: return 2;
    case E_V20SImode: return 4;
    case E_V10DImode: return 8;
    case E_V5TImode: return 16;
    case E_V96QImode: return 1;
    case E_V48HImode: return 2;
    case E_V24SImode: return 4;
    case E_V12DImode: return 8;
    case E_V6TImode: return 16;
    case E_V112QImode: return 1;
    case E_V56HImode: return 2;
    case E_V28SImode: return 4;
    case E_V14DImode: return 8;
    case E_V7TImode: return 16;
    case E_V128QImode: return 1;
    case E_V64HImode: return 2;
    case E_V32SImode: return 4;
    case E_V16DImode: return 8;
    case E_V8TImode: return 16;
    case E_V4HFmode: return 2;
    case E_V2SFmode: return 4;
    case E_V1DFmode: return 8;
    case E_V8HFmode: return 2;
    case E_V4SFmode: return 4;
    case E_V2DFmode: return 8;
    case E_V1TFmode: return 16;
    case E_V12HFmode: return 2;
    case E_V6SFmode: return 4;
    case E_V3DFmode: return 8;
    case E_V16HFmode: return 2;
    case E_V8SFmode: return 4;
    case E_V4DFmode: return 8;
    case E_V2TFmode: return 16;
    case E_V20HFmode: return 2;
    case E_V10SFmode: return 4;
    case E_V5DFmode: return 8;
    case E_V24HFmode: return 2;
    case E_V12SFmode: return 4;
    case E_V6DFmode: return 8;
    case E_V3TFmode: return 16;
    case E_V28HFmode: return 2;
    case E_V14SFmode: return 4;
    case E_V7DFmode: return 8;
    case E_V32HFmode: return 2;
    case E_V16SFmode: return 4;
    case E_V8DFmode: return 8;
    case E_V4TFmode: return 16;
    case E_V40HFmode: return 2;
    case E_V20SFmode: return 4;
    case E_V10DFmode: return 8;
    case E_V5TFmode: return 16;
    case E_V48HFmode: return 2;
    case E_V24SFmode: return 4;
    case E_V12DFmode: return 8;
    case E_V6TFmode: return 16;
    case E_V56HFmode: return 2;
    case E_V28SFmode: return 4;
    case E_V14DFmode: return 8;
    case E_V7TFmode: return 16;
    case E_V64HFmode: return 2;
    case E_V32SFmode: return 4;
    case E_V16DFmode: return 8;
    case E_V8TFmode: return 16;
    default: return mode_unit_size[mode];
    }
}

#ifdef __cplusplus
inline __attribute__((__always_inline__))
#else
extern __inline__ __attribute__((__always_inline__, __gnu_inline__))
#endif
unsigned short
mode_unit_precision_inline (machine_mode mode)
{
  extern const unsigned short mode_unit_precision[NUM_MACHINE_MODES];
  gcc_assert (mode >= 0 && mode < NUM_MACHINE_MODES);
  switch (mode)
    {
    case E_VOIDmode: return 0;
    case E_BLKmode: return 0;
    case E_CCmode: return 4*BITS_PER_UNIT;
    case E_BImode: return 1;
    case E_QImode: return 1*BITS_PER_UNIT;
    case E_HImode: return 2*BITS_PER_UNIT;
    case E_SImode: return 4*BITS_PER_UNIT;
    case E_DImode: return 8*BITS_PER_UNIT;
    case E_TImode: return 16*BITS_PER_UNIT;
    case E_TI2mode: return 16*BITS_PER_UNIT;
    case E_EI3mode: return 24*BITS_PER_UNIT;
    case E_OImode: return 32*BITS_PER_UNIT;
    case E_OI2mode: return 32*BITS_PER_UNIT;
    case E_OI4mode: return 32*BITS_PER_UNIT;
    case E_FI5mode: return 40*BITS_PER_UNIT;
    case E_CI3mode: return 48*BITS_PER_UNIT;
    case E_CI6mode: return 48*BITS_PER_UNIT;
    case E_RI7mode: return 56*BITS_PER_UNIT;
    case E_XImode: return 64*BITS_PER_UNIT;
    case E_XI2mode: return 64*BITS_PER_UNIT;
    case E_XI4mode: return 64*BITS_PER_UNIT;
    case E_XI8mode: return 64*BITS_PER_UNIT;
    case E_VI5mode: return 80*BITS_PER_UNIT;
    case E_YI3mode: return 96*BITS_PER_UNIT;
    case E_YI6mode: return 96*BITS_PER_UNIT;
    case E_WI7mode: return 112*BITS_PER_UNIT;
    case E_ZImode: return 128*BITS_PER_UNIT;
    case E_ZI2mode: return 128*BITS_PER_UNIT;
    case E_ZI4mode: return 128*BITS_PER_UNIT;
    case E_ZI8mode: return 128*BITS_PER_UNIT;
    case E_QQmode: return 1*BITS_PER_UNIT;
    case E_HQmode: return 2*BITS_PER_UNIT;
    case E_SQmode: return 4*BITS_PER_UNIT;
    case E_DQmode: return 8*BITS_PER_UNIT;
    case E_TQmode: return 16*BITS_PER_UNIT;
    case E_UQQmode: return 1*BITS_PER_UNIT;
    case E_UHQmode: return 2*BITS_PER_UNIT;
    case E_USQmode: return 4*BITS_PER_UNIT;
    case E_UDQmode: return 8*BITS_PER_UNIT;
    case E_UTQmode: return 16*BITS_PER_UNIT;
    case E_HAmode: return 2*BITS_PER_UNIT;
    case E_SAmode: return 4*BITS_PER_UNIT;
    case E_DAmode: return 8*BITS_PER_UNIT;
    case E_TAmode: return 16*BITS_PER_UNIT;
    case E_UHAmode: return 2*BITS_PER_UNIT;
    case E_USAmode: return 4*BITS_PER_UNIT;
    case E_UDAmode: return 8*BITS_PER_UNIT;
    case E_UTAmode: return 16*BITS_PER_UNIT;
    case E_HFmode: return 2*BITS_PER_UNIT;
    case E_SFmode: return 4*BITS_PER_UNIT;
    case E_DFmode: return 8*BITS_PER_UNIT;
    case E_TFmode: return 16*BITS_PER_UNIT;
    case E_SDmode: return 4*BITS_PER_UNIT;
    case E_DDmode: return 8*BITS_PER_UNIT;
    case E_TDmode: return 16*BITS_PER_UNIT;
    case E_CQImode: return 1*BITS_PER_UNIT;
    case E_CHImode: return 2*BITS_PER_UNIT;
    case E_CSImode: return 4*BITS_PER_UNIT;
    case E_CDImode: return 8*BITS_PER_UNIT;
    case E_CTI2mode: return 16*BITS_PER_UNIT;
    case E_CTImode: return 16*BITS_PER_UNIT;
    case E_CEI3mode: return 24*BITS_PER_UNIT;
    case E_COI4mode: return 32*BITS_PER_UNIT;
    case E_COI2mode: return 32*BITS_PER_UNIT;
    case E_COImode: return 32*BITS_PER_UNIT;
    case E_CFI5mode: return 40*BITS_PER_UNIT;
    case E_CCI6mode: return 48*BITS_PER_UNIT;
    case E_CCI3mode: return 48*BITS_PER_UNIT;
    case E_CRI7mode: return 56*BITS_PER_UNIT;
    case E_CXI8mode: return 64*BITS_PER_UNIT;
    case E_CXI4mode: return 64*BITS_PER_UNIT;
    case E_CXI2mode: return 64*BITS_PER_UNIT;
    case E_CXImode: return 64*BITS_PER_UNIT;
    case E_CVI5mode: return 80*BITS_PER_UNIT;
    case E_CYI6mode: return 96*BITS_PER_UNIT;
    case E_CYI3mode: return 96*BITS_PER_UNIT;
    case E_CWI7mode: return 112*BITS_PER_UNIT;
    case E_CZI8mode: return 128*BITS_PER_UNIT;
    case E_CZI4mode: return 128*BITS_PER_UNIT;
    case E_CZI2mode: return 128*BITS_PER_UNIT;
    case E_CZImode: return 128*BITS_PER_UNIT;
    case E_HCmode: return 2*BITS_PER_UNIT;
    case E_SCmode: return 4*BITS_PER_UNIT;
    case E_DCmode: return 8*BITS_PER_UNIT;
    case E_TCmode: return 16*BITS_PER_UNIT;
    case E_V8QImode: return 1*BITS_PER_UNIT;
    case E_V4HImode: return 2*BITS_PER_UNIT;
    case E_V2SImode: return 4*BITS_PER_UNIT;
    case E_V1DImode: return 8*BITS_PER_UNIT;
    case E_V16QImode: return 1*BITS_PER_UNIT;
    case E_V8HImode: return 2*BITS_PER_UNIT;
    case E_V4SImode: return 4*BITS_PER_UNIT;
    case E_V2DImode: return 8*BITS_PER_UNIT;
    case E_V1TImode: return 16*BITS_PER_UNIT;
    case E_V24QImode: return 1*BITS_PER_UNIT;
    case E_V12HImode: return 2*BITS_PER_UNIT;
    case E_V6SImode: return 4*BITS_PER_UNIT;
    case E_V3DImode: return 8*BITS_PER_UNIT;
    case E_V32QImode: return 1*BITS_PER_UNIT;
    case E_V16HImode: return 2*BITS_PER_UNIT;
    case E_V8SImode: return 4*BITS_PER_UNIT;
    case E_V4DImode: return 8*BITS_PER_UNIT;
    case E_V2TImode: return 16*BITS_PER_UNIT;
    case E_V40QImode: return 1*BITS_PER_UNIT;
    case E_V20HImode: return 2*BITS_PER_UNIT;
    case E_V10SImode: return 4*BITS_PER_UNIT;
    case E_V5DImode: return 8*BITS_PER_UNIT;
    case E_V48QImode: return 1*BITS_PER_UNIT;
    case E_V24HImode: return 2*BITS_PER_UNIT;
    case E_V12SImode: return 4*BITS_PER_UNIT;
    case E_V6DImode: return 8*BITS_PER_UNIT;
    case E_V3TImode: return 16*BITS_PER_UNIT;
    case E_V56QImode: return 1*BITS_PER_UNIT;
    case E_V28HImode: return 2*BITS_PER_UNIT;
    case E_V14SImode: return 4*BITS_PER_UNIT;
    case E_V7DImode: return 8*BITS_PER_UNIT;
    case E_V64QImode: return 1*BITS_PER_UNIT;
    case E_V32HImode: return 2*BITS_PER_UNIT;
    case E_V16SImode: return 4*BITS_PER_UNIT;
    case E_V8DImode: return 8*BITS_PER_UNIT;
    case E_V4TImode: return 16*BITS_PER_UNIT;
    case E_V80QImode: return 1*BITS_PER_UNIT;
    case E_V40HImode: return 2*BITS_PER_UNIT;
    case E_V20SImode: return 4*BITS_PER_UNIT;
    case E_V10DImode: return 8*BITS_PER_UNIT;
    case E_V5TImode: return 16*BITS_PER_UNIT;
    case E_V96QImode: return 1*BITS_PER_UNIT;
    case E_V48HImode: return 2*BITS_PER_UNIT;
    case E_V24SImode: return 4*BITS_PER_UNIT;
    case E_V12DImode: return 8*BITS_PER_UNIT;
    case E_V6TImode: return 16*BITS_PER_UNIT;
    case E_V112QImode: return 1*BITS_PER_UNIT;
    case E_V56HImode: return 2*BITS_PER_UNIT;
    case E_V28SImode: return 4*BITS_PER_UNIT;
    case E_V14DImode: return 8*BITS_PER_UNIT;
    case E_V7TImode: return 16*BITS_PER_UNIT;
    case E_V128QImode: return 1*BITS_PER_UNIT;
    case E_V64HImode: return 2*BITS_PER_UNIT;
    case E_V32SImode: return 4*BITS_PER_UNIT;
    case E_V16DImode: return 8*BITS_PER_UNIT;
    case E_V8TImode: return 16*BITS_PER_UNIT;
    case E_V4HFmode: return 2*BITS_PER_UNIT;
    case E_V2SFmode: return 4*BITS_PER_UNIT;
    case E_V1DFmode: return 8*BITS_PER_UNIT;
    case E_V8HFmode: return 2*BITS_PER_UNIT;
    case E_V4SFmode: return 4*BITS_PER_UNIT;
    case E_V2DFmode: return 8*BITS_PER_UNIT;
    case E_V1TFmode: return 16*BITS_PER_UNIT;
    case E_V12HFmode: return 2*BITS_PER_UNIT;
    case E_V6SFmode: return 4*BITS_PER_UNIT;
    case E_V3DFmode: return 8*BITS_PER_UNIT;
    case E_V16HFmode: return 2*BITS_PER_UNIT;
    case E_V8SFmode: return 4*BITS_PER_UNIT;
    case E_V4DFmode: return 8*BITS_PER_UNIT;
    case E_V2TFmode: return 16*BITS_PER_UNIT;
    case E_V20HFmode: return 2*BITS_PER_UNIT;
    case E_V10SFmode: return 4*BITS_PER_UNIT;
    case E_V5DFmode: return 8*BITS_PER_UNIT;
    case E_V24HFmode: return 2*BITS_PER_UNIT;
    case E_V12SFmode: return 4*BITS_PER_UNIT;
    case E_V6DFmode: return 8*BITS_PER_UNIT;
    case E_V3TFmode: return 16*BITS_PER_UNIT;
    case E_V28HFmode: return 2*BITS_PER_UNIT;
    case E_V14SFmode: return 4*BITS_PER_UNIT;
    case E_V7DFmode: return 8*BITS_PER_UNIT;
    case E_V32HFmode: return 2*BITS_PER_UNIT;
    case E_V16SFmode: return 4*BITS_PER_UNIT;
    case E_V8DFmode: return 8*BITS_PER_UNIT;
    case E_V4TFmode: return 16*BITS_PER_UNIT;
    case E_V40HFmode: return 2*BITS_PER_UNIT;
    case E_V20SFmode: return 4*BITS_PER_UNIT;
    case E_V10DFmode: return 8*BITS_PER_UNIT;
    case E_V5TFmode: return 16*BITS_PER_UNIT;
    case E_V48HFmode: return 2*BITS_PER_UNIT;
    case E_V24SFmode: return 4*BITS_PER_UNIT;
    case E_V12DFmode: return 8*BITS_PER_UNIT;
    case E_V6TFmode: return 16*BITS_PER_UNIT;
    case E_V56HFmode: return 2*BITS_PER_UNIT;
    case E_V28SFmode: return 4*BITS_PER_UNIT;
    case E_V14DFmode: return 8*BITS_PER_UNIT;
    case E_V7TFmode: return 16*BITS_PER_UNIT;
    case E_V64HFmode: return 2*BITS_PER_UNIT;
    case E_V32SFmode: return 4*BITS_PER_UNIT;
    case E_V16DFmode: return 8*BITS_PER_UNIT;
    case E_V8TFmode: return 16*BITS_PER_UNIT;
    default: return mode_unit_precision[mode];
    }
}

#endif /* GCC_VERSION >= 4001 */

#endif /* insn-modes-inline.h */