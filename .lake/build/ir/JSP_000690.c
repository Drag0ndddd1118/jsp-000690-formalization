// Lean compiler output
// Module: JSP_000690
// Imports: public import Init public meta import Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_V___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_V___closed__0 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__0_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_V___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__0_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_V___closed__1 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__1_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_V___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__1_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_V___closed__2 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__2_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_V___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__2_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_V___closed__3 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__3_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_V___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__3_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_V___closed__4 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__4_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_V___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__4_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_V___closed__5 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__5_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_V___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__5_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_V___closed__6 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__6_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_V___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__6_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_V___closed__7 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__7_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_V___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__7_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_V___closed__8 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__8_value;
LEAN_EXPORT const lean_object* lp_jsp__000690__formalization_JSP000690_V = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_V___closed__8_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__0 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__0_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__0_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__1 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__1_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__2 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__2_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__2_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__3 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__3_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__4 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__4_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__4_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__5 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__5_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__6 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__6_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__6_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__7 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__7_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__8 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__8_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__8_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__9 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__9_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__10 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__10_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__10_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__11 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__11_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__12 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__12_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__12_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__13 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__13_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__14 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__14_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__14_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__15 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__15_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__16 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__16_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__16_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__17 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__17_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__18 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__18_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__18_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__19 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__19_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__20 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__20_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__20_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__21 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__21_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__22 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__22_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__22_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__23 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__23_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__10_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__24 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__24_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__16_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__25 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__25_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__18_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__26 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__26_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__8_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__27 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__27_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__14_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__28 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__28_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__18_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__29 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__29_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__30 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__30_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__30_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__31 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__31_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__32 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__32_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__32_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__33 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__33_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__34 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__34_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__34_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__35 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__35_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__36 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__36_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__36_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__37 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__37_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__38 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__38_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__35_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__38_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__39 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__39_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__33_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__39_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__40 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__40_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__31_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__40_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__41 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__41_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__29_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__41_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__42 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__42_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__28_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__42_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__43 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__43_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__27_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__43_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__44 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__44_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__26_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__44_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__45 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__45_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__25_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__45_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__46 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__46_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__24_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__46_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__47 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__47_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__23_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__47_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__48 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__48_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__21_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__48_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__49 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__49_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__19_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__49_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__50 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__50_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__17_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__50_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__51 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__51_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__15_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__51_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__52 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__52_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__13_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__52_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__53 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__53_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__11_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__53_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__54 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__54_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__9_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__54_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__55 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__55_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__7_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__55_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__56 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__56_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__5_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__56_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__57 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__57_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__3_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__57_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__58 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__58_value;
static const lean_ctor_object lp_jsp__000690__formalization_JSP000690_E___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__1_value),((lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__58_value)}};
static const lean_object* lp_jsp__000690__formalization_JSP000690_E___closed__59 = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__59_value;
LEAN_EXPORT const lean_object* lp_jsp__000690__formalization_JSP000690_E = (const lean_object*)&lp_jsp__000690__formalization_JSP000690_E___closed__59_value;
static lean_once_cell_t lp_jsp__000690__formalization_JSP000690_isValidEdge___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_jsp__000690__formalization_JSP000690_isValidEdge___closed__0;
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_isValidEdge(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_isValidEdge___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_degree_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_degree_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_degree(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_degree___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_mapTR_loop___at___00JSP000690_minDegree_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_foldl___at___00JSP000690_minDegree_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_foldl___at___00JSP000690_minDegree_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_jsp__000690__formalization_JSP000690_minDegree___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_jsp__000690__formalization_JSP000690_minDegree___closed__0;
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_minDegree;
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_getColor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_getColor___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_isMono(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_isMono___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_all___at___00JSP000690_isProper2Coloring_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_all___at___00JSP000690_isProper2Coloring_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_isProper2Coloring(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_isProper2Coloring___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_any___at___00JSP000690_anyProper2Coloring_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_any___at___00JSP000690_anyProper2Coloring_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_jsp__000690__formalization_JSP000690_anyProper2Coloring___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_jsp__000690__formalization_JSP000690_anyProper2Coloring___closed__0;
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_anyProper2Coloring(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_anyProper2Coloring___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_psi(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_psi___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_isMono3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_isMono3___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_jsp__000690__formalization_JSP000690_psi___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0___closed__0 = (const lean_object*)&lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0___closed__0_value;
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0___boxed(lean_object*);
static lean_once_cell_t lp_jsp__000690__formalization_JSP000690_proper3Coloring___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_jsp__000690__formalization_JSP000690_proper3Coloring___closed__0;
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_proper3Coloring;
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allEdgesCritical_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allEdgesCritical_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_all___at___00JSP000690_allEdgesCritical_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_all___at___00JSP000690_allEdgesCritical_spec__1___boxed(lean_object*);
static lean_once_cell_t lp_jsp__000690__formalization_JSP000690_allEdgesCritical___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_jsp__000690__formalization_JSP000690_allEdgesCritical___closed__0;
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_allEdgesCritical;
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allVerticesCritical_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allVerticesCritical_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_all___at___00JSP000690_allVerticesCritical_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_all___at___00JSP000690_allVerticesCritical_spec__1___boxed(lean_object*);
static lean_once_cell_t lp_jsp__000690__formalization_JSP000690_allVerticesCritical___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_jsp__000690__formalization_JSP000690_allVerticesCritical___closed__0;
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_allVerticesCritical;
static lean_object* _init_lp_jsp__000690__formalization_JSP000690_isValidEdge___closed__0(void){
_start:
{
lean_object* v___x_210_; lean_object* v___f_211_; 
v___x_210_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_211_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_211_, 0, v___x_210_);
return v___f_211_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_isValidEdge(lean_object* v_e_212_){
_start:
{
lean_object* v_snd_213_; lean_object* v_fst_214_; lean_object* v_fst_215_; lean_object* v_snd_216_; uint8_t v___x_217_; uint8_t v___x_218_; uint8_t v___y_220_; lean_object* v___f_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v_snd_213_ = lean_ctor_get(v_e_212_, 1);
lean_inc(v_snd_213_);
v_fst_214_ = lean_ctor_get(v_e_212_, 0);
lean_inc(v_fst_214_);
lean_dec_ref(v_e_212_);
v_fst_215_ = lean_ctor_get(v_snd_213_, 0);
lean_inc(v_fst_215_);
v_snd_216_ = lean_ctor_get(v_snd_213_, 1);
lean_inc(v_snd_216_);
lean_dec(v_snd_213_);
v___x_217_ = lean_nat_dec_lt(v_fst_215_, v_snd_216_);
v___x_218_ = lean_nat_dec_lt(v_fst_214_, v_fst_215_);
v___f_224_ = lean_obj_once(&lp_jsp__000690__formalization_JSP000690_isValidEdge___closed__0, &lp_jsp__000690__formalization_JSP000690_isValidEdge___closed__0_once, _init_lp_jsp__000690__formalization_JSP000690_isValidEdge___closed__0);
v___x_225_ = ((lean_object*)(lp_jsp__000690__formalization_JSP000690_V));
v___x_226_ = l_List_elem___redArg(v___f_224_, v_fst_214_, v___x_225_);
if (v___x_226_ == 0)
{
lean_dec(v_fst_215_);
v___y_220_ = v___x_226_;
goto v___jp_219_;
}
else
{
uint8_t v___x_227_; 
v___x_227_ = l_List_elem___redArg(v___f_224_, v_fst_215_, v___x_225_);
v___y_220_ = v___x_227_;
goto v___jp_219_;
}
v___jp_219_:
{
if (v___y_220_ == 0)
{
lean_dec(v_snd_216_);
return v___y_220_;
}
else
{
lean_object* v___f_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___f_221_ = lean_obj_once(&lp_jsp__000690__formalization_JSP000690_isValidEdge___closed__0, &lp_jsp__000690__formalization_JSP000690_isValidEdge___closed__0_once, _init_lp_jsp__000690__formalization_JSP000690_isValidEdge___closed__0);
v___x_222_ = ((lean_object*)(lp_jsp__000690__formalization_JSP000690_V));
v___x_223_ = l_List_elem___redArg(v___f_221_, v_snd_216_, v___x_222_);
if (v___x_223_ == 0)
{
return v___x_223_;
}
else
{
if (v___x_218_ == 0)
{
return v___x_218_;
}
else
{
return v___x_217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_isValidEdge___boxed(lean_object* v_e_228_){
_start:
{
uint8_t v_res_229_; lean_object* v_r_230_; 
v_res_229_ = lp_jsp__000690__formalization_JSP000690_isValidEdge(v_e_228_);
v_r_230_ = lean_box(v_res_229_);
return v_r_230_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_degree_spec__0(lean_object* v_v_231_, lean_object* v_a_232_, lean_object* v_a_233_){
_start:
{
if (lean_obj_tag(v_a_232_) == 0)
{
lean_object* v___x_234_; 
v___x_234_ = l_List_reverse___redArg(v_a_233_);
return v___x_234_;
}
else
{
lean_object* v_head_235_; lean_object* v_tail_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_255_; 
v_head_235_ = lean_ctor_get(v_a_232_, 0);
v_tail_236_ = lean_ctor_get(v_a_232_, 1);
v_isSharedCheck_255_ = !lean_is_exclusive(v_a_232_);
if (v_isSharedCheck_255_ == 0)
{
v___x_238_ = v_a_232_;
v_isShared_239_ = v_isSharedCheck_255_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_tail_236_);
lean_inc(v_head_235_);
lean_dec(v_a_232_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_255_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v_snd_245_; lean_object* v_fst_246_; lean_object* v_fst_247_; lean_object* v_snd_248_; uint8_t v___y_250_; uint8_t v___x_253_; 
v_snd_245_ = lean_ctor_get(v_head_235_, 1);
v_fst_246_ = lean_ctor_get(v_head_235_, 0);
v_fst_247_ = lean_ctor_get(v_snd_245_, 0);
v_snd_248_ = lean_ctor_get(v_snd_245_, 1);
v___x_253_ = lean_nat_dec_eq(v_fst_246_, v_v_231_);
if (v___x_253_ == 0)
{
uint8_t v___x_254_; 
v___x_254_ = lean_nat_dec_eq(v_fst_247_, v_v_231_);
v___y_250_ = v___x_254_;
goto v___jp_249_;
}
else
{
v___y_250_ = v___x_253_;
goto v___jp_249_;
}
v___jp_240_:
{
lean_object* v___x_242_; 
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 1, v_a_233_);
v___x_242_ = v___x_238_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_head_235_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_a_233_);
v___x_242_ = v_reuseFailAlloc_244_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
v_a_232_ = v_tail_236_;
v_a_233_ = v___x_242_;
goto _start;
}
}
v___jp_249_:
{
if (v___y_250_ == 0)
{
uint8_t v___x_251_; 
v___x_251_ = lean_nat_dec_eq(v_snd_248_, v_v_231_);
if (v___x_251_ == 0)
{
lean_del_object(v___x_238_);
lean_dec(v_head_235_);
v_a_232_ = v_tail_236_;
goto _start;
}
else
{
goto v___jp_240_;
}
}
else
{
goto v___jp_240_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_degree_spec__0___boxed(lean_object* v_v_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_degree_spec__0(v_v_256_, v_a_257_, v_a_258_);
lean_dec(v_v_256_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_degree(lean_object* v_v_260_){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_261_ = ((lean_object*)(lp_jsp__000690__formalization_JSP000690_E));
v___x_262_ = lean_box(0);
v___x_263_ = lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_degree_spec__0(v_v_260_, v___x_261_, v___x_262_);
v___x_264_ = l_List_lengthTR___redArg(v___x_263_);
lean_dec(v___x_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_degree___boxed(lean_object* v_v_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = lp_jsp__000690__formalization_JSP000690_degree(v_v_265_);
lean_dec(v_v_265_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_mapTR_loop___at___00JSP000690_minDegree_spec__0(lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
if (lean_obj_tag(v_a_267_) == 0)
{
lean_object* v___x_269_; 
v___x_269_ = l_List_reverse___redArg(v_a_268_);
return v___x_269_;
}
else
{
lean_object* v_head_270_; lean_object* v_tail_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_280_; 
v_head_270_ = lean_ctor_get(v_a_267_, 0);
v_tail_271_ = lean_ctor_get(v_a_267_, 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v_a_267_);
if (v_isSharedCheck_280_ == 0)
{
v___x_273_ = v_a_267_;
v_isShared_274_ = v_isSharedCheck_280_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_tail_271_);
lean_inc(v_head_270_);
lean_dec(v_a_267_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_280_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_277_; 
v___x_275_ = lp_jsp__000690__formalization_JSP000690_degree(v_head_270_);
lean_dec(v_head_270_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 1, v_a_268_);
lean_ctor_set(v___x_273_, 0, v___x_275_);
v___x_277_ = v___x_273_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_275_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v_a_268_);
v___x_277_ = v_reuseFailAlloc_279_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
v_a_267_ = v_tail_271_;
v_a_268_ = v___x_277_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_foldl___at___00JSP000690_minDegree_spec__1(lean_object* v_x_281_, lean_object* v_x_282_){
_start:
{
if (lean_obj_tag(v_x_282_) == 0)
{
lean_inc(v_x_281_);
return v_x_281_;
}
else
{
lean_object* v_head_283_; lean_object* v_tail_284_; uint8_t v___x_285_; 
v_head_283_ = lean_ctor_get(v_x_282_, 0);
v_tail_284_ = lean_ctor_get(v_x_282_, 1);
v___x_285_ = lean_nat_dec_le(v_x_281_, v_head_283_);
if (v___x_285_ == 0)
{
v_x_281_ = v_head_283_;
v_x_282_ = v_tail_284_;
goto _start;
}
else
{
v_x_282_ = v_tail_284_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_foldl___at___00JSP000690_minDegree_spec__1___boxed(lean_object* v_x_288_, lean_object* v_x_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = lp_jsp__000690__formalization_List_foldl___at___00JSP000690_minDegree_spec__1(v_x_288_, v_x_289_);
lean_dec(v_x_289_);
lean_dec(v_x_288_);
return v_res_290_;
}
}
static lean_object* _init_lp_jsp__000690__formalization_JSP000690_minDegree___closed__0(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_291_ = lean_box(0);
v___x_292_ = ((lean_object*)(lp_jsp__000690__formalization_JSP000690_V));
v___x_293_ = lp_jsp__000690__formalization_List_mapTR_loop___at___00JSP000690_minDegree_spec__0(v___x_292_, v___x_291_);
return v___x_293_;
}
}
static lean_object* _init_lp_jsp__000690__formalization_JSP000690_minDegree(void){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = lean_obj_once(&lp_jsp__000690__formalization_JSP000690_minDegree___closed__0, &lp_jsp__000690__formalization_JSP000690_minDegree___closed__0_once, _init_lp_jsp__000690__formalization_JSP000690_minDegree___closed__0);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v___x_295_; 
v___x_295_ = lean_unsigned_to_nat(0u);
return v___x_295_;
}
else
{
lean_object* v_head_296_; lean_object* v_tail_297_; lean_object* v___x_298_; 
v_head_296_ = lean_ctor_get(v___x_294_, 0);
v_tail_297_ = lean_ctor_get(v___x_294_, 1);
v___x_298_ = lp_jsp__000690__formalization_List_foldl___at___00JSP000690_minDegree_spec__1(v_head_296_, v_tail_297_);
return v___x_298_;
}
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_getColor(lean_object* v_c_299_, lean_object* v_v_300_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_301_ = lean_unsigned_to_nat(1u);
v___x_302_ = lean_nat_sub(v_v_300_, v___x_301_);
v___x_303_ = lean_nat_shiftr(v_c_299_, v___x_302_);
lean_dec(v___x_302_);
v___x_304_ = lean_nat_land(v___x_303_, v___x_301_);
lean_dec(v___x_303_);
v___x_305_ = lean_nat_dec_eq(v___x_304_, v___x_301_);
lean_dec(v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_getColor___boxed(lean_object* v_c_306_, lean_object* v_v_307_){
_start:
{
uint8_t v_res_308_; lean_object* v_r_309_; 
v_res_308_ = lp_jsp__000690__formalization_JSP000690_getColor(v_c_306_, v_v_307_);
lean_dec(v_v_307_);
lean_dec(v_c_306_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_isMono(lean_object* v_c_310_, lean_object* v_e_311_){
_start:
{
lean_object* v_snd_312_; lean_object* v_fst_313_; lean_object* v_fst_314_; lean_object* v_snd_315_; uint8_t v_ca_316_; uint8_t v_cb_317_; uint8_t v_cd_318_; uint8_t v___y_320_; uint8_t v___y_322_; 
v_snd_312_ = lean_ctor_get(v_e_311_, 1);
v_fst_313_ = lean_ctor_get(v_e_311_, 0);
v_fst_314_ = lean_ctor_get(v_snd_312_, 0);
v_snd_315_ = lean_ctor_get(v_snd_312_, 1);
v_ca_316_ = lp_jsp__000690__formalization_JSP000690_getColor(v_c_310_, v_fst_313_);
v_cb_317_ = lp_jsp__000690__formalization_JSP000690_getColor(v_c_310_, v_fst_314_);
v_cd_318_ = lp_jsp__000690__formalization_JSP000690_getColor(v_c_310_, v_snd_315_);
if (v_ca_316_ == 0)
{
if (v_cb_317_ == 0)
{
uint8_t v___x_323_; 
v___x_323_ = 1;
v___y_320_ = v___x_323_;
goto v___jp_319_;
}
else
{
v___y_322_ = v_ca_316_;
goto v___jp_321_;
}
}
else
{
v___y_322_ = v_cb_317_;
goto v___jp_321_;
}
v___jp_319_:
{
if (v_cb_317_ == 0)
{
if (v_cd_318_ == 0)
{
return v___y_320_;
}
else
{
return v_cb_317_;
}
}
else
{
return v_cd_318_;
}
}
v___jp_321_:
{
if (v___y_322_ == 0)
{
return v___y_322_;
}
else
{
v___y_320_ = v___y_322_;
goto v___jp_319_;
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_isMono___boxed(lean_object* v_c_324_, lean_object* v_e_325_){
_start:
{
uint8_t v_res_326_; lean_object* v_r_327_; 
v_res_326_ = lp_jsp__000690__formalization_JSP000690_isMono(v_c_324_, v_e_325_);
lean_dec_ref(v_e_325_);
lean_dec(v_c_324_);
v_r_327_ = lean_box(v_res_326_);
return v_r_327_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_all___at___00JSP000690_isProper2Coloring_spec__0(lean_object* v_c_328_, lean_object* v_x_329_){
_start:
{
if (lean_obj_tag(v_x_329_) == 0)
{
uint8_t v___x_330_; 
v___x_330_ = 1;
return v___x_330_;
}
else
{
lean_object* v_head_331_; lean_object* v_tail_332_; uint8_t v___x_333_; 
v_head_331_ = lean_ctor_get(v_x_329_, 0);
v_tail_332_ = lean_ctor_get(v_x_329_, 1);
v___x_333_ = lp_jsp__000690__formalization_JSP000690_isMono(v_c_328_, v_head_331_);
if (v___x_333_ == 0)
{
v_x_329_ = v_tail_332_;
goto _start;
}
else
{
uint8_t v___x_335_; 
v___x_335_ = 0;
return v___x_335_;
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_all___at___00JSP000690_isProper2Coloring_spec__0___boxed(lean_object* v_c_336_, lean_object* v_x_337_){
_start:
{
uint8_t v_res_338_; lean_object* v_r_339_; 
v_res_338_ = lp_jsp__000690__formalization_List_all___at___00JSP000690_isProper2Coloring_spec__0(v_c_336_, v_x_337_);
lean_dec(v_x_337_);
lean_dec(v_c_336_);
v_r_339_ = lean_box(v_res_338_);
return v_r_339_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_isProper2Coloring(lean_object* v_c_340_, lean_object* v_edges_341_){
_start:
{
uint8_t v___x_342_; 
v___x_342_ = lp_jsp__000690__formalization_List_all___at___00JSP000690_isProper2Coloring_spec__0(v_c_340_, v_edges_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_isProper2Coloring___boxed(lean_object* v_c_343_, lean_object* v_edges_344_){
_start:
{
uint8_t v_res_345_; lean_object* v_r_346_; 
v_res_345_ = lp_jsp__000690__formalization_JSP000690_isProper2Coloring(v_c_343_, v_edges_344_);
lean_dec(v_edges_344_);
lean_dec(v_c_343_);
v_r_346_ = lean_box(v_res_345_);
return v_r_346_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_any___at___00JSP000690_anyProper2Coloring_spec__0(lean_object* v_edges_347_, lean_object* v_x_348_){
_start:
{
if (lean_obj_tag(v_x_348_) == 0)
{
uint8_t v___x_349_; 
v___x_349_ = 0;
return v___x_349_;
}
else
{
lean_object* v_head_350_; lean_object* v_tail_351_; uint8_t v___x_352_; 
v_head_350_ = lean_ctor_get(v_x_348_, 0);
v_tail_351_ = lean_ctor_get(v_x_348_, 1);
v___x_352_ = lp_jsp__000690__formalization_List_all___at___00JSP000690_isProper2Coloring_spec__0(v_head_350_, v_edges_347_);
if (v___x_352_ == 0)
{
v_x_348_ = v_tail_351_;
goto _start;
}
else
{
return v___x_352_;
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_any___at___00JSP000690_anyProper2Coloring_spec__0___boxed(lean_object* v_edges_354_, lean_object* v_x_355_){
_start:
{
uint8_t v_res_356_; lean_object* v_r_357_; 
v_res_356_ = lp_jsp__000690__formalization_List_any___at___00JSP000690_anyProper2Coloring_spec__0(v_edges_354_, v_x_355_);
lean_dec(v_x_355_);
lean_dec(v_edges_354_);
v_r_357_ = lean_box(v_res_356_);
return v_r_357_;
}
}
static lean_object* _init_lp_jsp__000690__formalization_JSP000690_anyProper2Coloring___closed__0(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(512u);
v___x_359_ = l_List_range(v___x_358_);
return v___x_359_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_anyProper2Coloring(lean_object* v_edges_360_){
_start:
{
lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_361_ = lean_obj_once(&lp_jsp__000690__formalization_JSP000690_anyProper2Coloring___closed__0, &lp_jsp__000690__formalization_JSP000690_anyProper2Coloring___closed__0_once, _init_lp_jsp__000690__formalization_JSP000690_anyProper2Coloring___closed__0);
v___x_362_ = lp_jsp__000690__formalization_List_any___at___00JSP000690_anyProper2Coloring_spec__0(v_edges_360_, v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_anyProper2Coloring___boxed(lean_object* v_edges_363_){
_start:
{
uint8_t v_res_364_; lean_object* v_r_365_; 
v_res_364_ = lp_jsp__000690__formalization_JSP000690_anyProper2Coloring(v_edges_363_);
lean_dec(v_edges_363_);
v_r_365_ = lean_box(v_res_364_);
return v_r_365_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_psi(lean_object* v_v_366_){
_start:
{
lean_object* v___y_368_; uint8_t v___y_369_; lean_object* v___x_377_; uint8_t v___y_379_; uint8_t v___x_388_; 
v___x_377_ = lean_unsigned_to_nat(1u);
v___x_388_ = lean_nat_dec_eq(v_v_366_, v___x_377_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_389_ = lean_unsigned_to_nat(2u);
v___x_390_ = lean_nat_dec_eq(v_v_366_, v___x_389_);
v___y_379_ = v___x_390_;
goto v___jp_378_;
}
else
{
v___y_379_ = v___x_388_;
goto v___jp_378_;
}
v___jp_367_:
{
if (v___y_369_ == 0)
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_unsigned_to_nat(8u);
v___x_371_ = lean_nat_dec_eq(v_v_366_, v___x_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_372_ = lean_unsigned_to_nat(9u);
v___x_373_ = lean_nat_dec_eq(v_v_366_, v___x_372_);
if (v___x_373_ == 0)
{
lean_inc(v___y_368_);
return v___y_368_;
}
else
{
lean_object* v___x_374_; 
v___x_374_ = lean_unsigned_to_nat(2u);
return v___x_374_;
}
}
else
{
lean_object* v___x_375_; 
v___x_375_ = lean_unsigned_to_nat(2u);
return v___x_375_;
}
}
else
{
lean_object* v___x_376_; 
v___x_376_ = lean_unsigned_to_nat(2u);
return v___x_376_;
}
}
v___jp_378_:
{
if (v___y_379_ == 0)
{
lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_380_ = lean_unsigned_to_nat(4u);
v___x_381_ = lean_nat_dec_eq(v_v_366_, v___x_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_382_ = lean_unsigned_to_nat(5u);
v___x_383_ = lean_nat_dec_eq(v_v_366_, v___x_382_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_384_ = lean_unsigned_to_nat(3u);
v___x_385_ = lean_nat_dec_eq(v_v_366_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_386_ = lean_unsigned_to_nat(6u);
v___x_387_ = lean_nat_dec_eq(v_v_366_, v___x_386_);
v___y_368_ = v___x_384_;
v___y_369_ = v___x_387_;
goto v___jp_367_;
}
else
{
v___y_368_ = v___x_384_;
v___y_369_ = v___x_385_;
goto v___jp_367_;
}
}
else
{
return v___x_377_;
}
}
else
{
return v___x_377_;
}
}
else
{
return v___x_377_;
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_psi___boxed(lean_object* v_v_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = lp_jsp__000690__formalization_JSP000690_psi(v_v_391_);
lean_dec(v_v_391_);
return v_res_392_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_JSP000690_isMono3(lean_object* v_col_393_, lean_object* v_e_394_){
_start:
{
lean_object* v_snd_395_; lean_object* v_fst_396_; lean_object* v_fst_397_; lean_object* v_snd_398_; lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; 
v_snd_395_ = lean_ctor_get(v_e_394_, 1);
lean_inc(v_snd_395_);
v_fst_396_ = lean_ctor_get(v_e_394_, 0);
lean_inc(v_fst_396_);
lean_dec_ref(v_e_394_);
v_fst_397_ = lean_ctor_get(v_snd_395_, 0);
lean_inc(v_fst_397_);
v_snd_398_ = lean_ctor_get(v_snd_395_, 1);
lean_inc(v_snd_398_);
lean_dec(v_snd_395_);
lean_inc_ref_n(v_col_393_, 2);
v___x_399_ = lean_apply_1(v_col_393_, v_fst_396_);
v___x_400_ = lean_apply_1(v_col_393_, v_fst_397_);
v___x_401_ = lean_nat_dec_eq(v___x_399_, v___x_400_);
lean_dec(v___x_399_);
if (v___x_401_ == 0)
{
lean_dec(v___x_400_);
lean_dec(v_snd_398_);
lean_dec_ref(v_col_393_);
return v___x_401_;
}
else
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = lean_apply_1(v_col_393_, v_snd_398_);
v___x_403_ = lean_nat_dec_eq(v___x_400_, v___x_402_);
lean_dec(v___x_402_);
lean_dec(v___x_400_);
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_JSP000690_isMono3___boxed(lean_object* v_col_404_, lean_object* v_e_405_){
_start:
{
uint8_t v_res_406_; lean_object* v_r_407_; 
v_res_406_ = lp_jsp__000690__formalization_JSP000690_isMono3(v_col_404_, v_e_405_);
v_r_407_ = lean_box(v_res_406_);
return v_r_407_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0(lean_object* v_x_409_){
_start:
{
if (lean_obj_tag(v_x_409_) == 0)
{
uint8_t v___x_410_; 
v___x_410_ = 1;
return v___x_410_;
}
else
{
lean_object* v_head_411_; lean_object* v_tail_412_; lean_object* v___x_413_; uint8_t v___x_414_; 
v_head_411_ = lean_ctor_get(v_x_409_, 0);
lean_inc(v_head_411_);
v_tail_412_ = lean_ctor_get(v_x_409_, 1);
lean_inc(v_tail_412_);
lean_dec_ref_known(v_x_409_, 2);
v___x_413_ = ((lean_object*)(lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0___closed__0));
v___x_414_ = lp_jsp__000690__formalization_JSP000690_isMono3(v___x_413_, v_head_411_);
if (v___x_414_ == 0)
{
v_x_409_ = v_tail_412_;
goto _start;
}
else
{
uint8_t v___x_416_; 
lean_dec(v_tail_412_);
v___x_416_ = 0;
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0___boxed(lean_object* v_x_417_){
_start:
{
uint8_t v_res_418_; lean_object* v_r_419_; 
v_res_418_ = lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0(v_x_417_);
v_r_419_ = lean_box(v_res_418_);
return v_r_419_;
}
}
static uint8_t _init_lp_jsp__000690__formalization_JSP000690_proper3Coloring___closed__0(void){
_start:
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = ((lean_object*)(lp_jsp__000690__formalization_JSP000690_E));
v___x_421_ = lp_jsp__000690__formalization_List_all___at___00JSP000690_proper3Coloring_spec__0(v___x_420_);
return v___x_421_;
}
}
static uint8_t _init_lp_jsp__000690__formalization_JSP000690_proper3Coloring(void){
_start:
{
uint8_t v___x_422_; 
v___x_422_ = lean_uint8_once(&lp_jsp__000690__formalization_JSP000690_proper3Coloring___closed__0, &lp_jsp__000690__formalization_JSP000690_proper3Coloring___closed__0_once, _init_lp_jsp__000690__formalization_JSP000690_proper3Coloring___closed__0);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allEdgesCritical_spec__0(lean_object* v_e_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
if (lean_obj_tag(v_a_424_) == 0)
{
lean_object* v___x_426_; 
v___x_426_ = l_List_reverse___redArg(v_a_425_);
return v___x_426_;
}
else
{
lean_object* v_head_427_; lean_object* v_tail_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_450_; 
v_head_427_ = lean_ctor_get(v_a_424_, 0);
v_tail_428_ = lean_ctor_get(v_a_424_, 1);
v_isSharedCheck_450_ = !lean_is_exclusive(v_a_424_);
if (v_isSharedCheck_450_ == 0)
{
v___x_430_ = v_a_424_;
v_isShared_431_ = v_isSharedCheck_450_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_tail_428_);
lean_inc(v_head_427_);
lean_dec(v_a_424_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_450_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
uint8_t v___y_433_; lean_object* v_fst_439_; lean_object* v_snd_440_; lean_object* v_fst_441_; lean_object* v_snd_442_; uint8_t v___x_443_; 
v_fst_439_ = lean_ctor_get(v_head_427_, 0);
v_snd_440_ = lean_ctor_get(v_head_427_, 1);
v_fst_441_ = lean_ctor_get(v_e_423_, 0);
v_snd_442_ = lean_ctor_get(v_e_423_, 1);
v___x_443_ = lean_nat_dec_eq(v_fst_439_, v_fst_441_);
if (v___x_443_ == 0)
{
v___y_433_ = v___x_443_;
goto v___jp_432_;
}
else
{
lean_object* v_fst_444_; lean_object* v_snd_445_; lean_object* v_fst_446_; lean_object* v_snd_447_; uint8_t v___x_448_; 
v_fst_444_ = lean_ctor_get(v_snd_440_, 0);
v_snd_445_ = lean_ctor_get(v_snd_440_, 1);
v_fst_446_ = lean_ctor_get(v_snd_442_, 0);
v_snd_447_ = lean_ctor_get(v_snd_442_, 1);
v___x_448_ = lean_nat_dec_eq(v_fst_444_, v_fst_446_);
if (v___x_448_ == 0)
{
v___y_433_ = v___x_448_;
goto v___jp_432_;
}
else
{
uint8_t v___x_449_; 
v___x_449_ = lean_nat_dec_eq(v_snd_445_, v_snd_447_);
v___y_433_ = v___x_449_;
goto v___jp_432_;
}
}
v___jp_432_:
{
if (v___y_433_ == 0)
{
lean_object* v___x_435_; 
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 1, v_a_425_);
v___x_435_ = v___x_430_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_head_427_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v_a_425_);
v___x_435_ = v_reuseFailAlloc_437_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
v_a_424_ = v_tail_428_;
v_a_425_ = v___x_435_;
goto _start;
}
}
else
{
lean_del_object(v___x_430_);
lean_dec(v_head_427_);
v_a_424_ = v_tail_428_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allEdgesCritical_spec__0___boxed(lean_object* v_e_451_, lean_object* v_a_452_, lean_object* v_a_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allEdgesCritical_spec__0(v_e_451_, v_a_452_, v_a_453_);
lean_dec_ref(v_e_451_);
return v_res_454_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_all___at___00JSP000690_allEdgesCritical_spec__1(lean_object* v_x_455_){
_start:
{
if (lean_obj_tag(v_x_455_) == 0)
{
uint8_t v___x_456_; 
v___x_456_ = 1;
return v___x_456_;
}
else
{
lean_object* v_head_457_; lean_object* v_tail_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v_head_457_ = lean_ctor_get(v_x_455_, 0);
v_tail_458_ = lean_ctor_get(v_x_455_, 1);
v___x_459_ = ((lean_object*)(lp_jsp__000690__formalization_JSP000690_E));
v___x_460_ = lean_box(0);
v___x_461_ = lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allEdgesCritical_spec__0(v_head_457_, v___x_459_, v___x_460_);
v___x_462_ = lp_jsp__000690__formalization_JSP000690_anyProper2Coloring(v___x_461_);
lean_dec(v___x_461_);
if (v___x_462_ == 0)
{
return v___x_462_;
}
else
{
v_x_455_ = v_tail_458_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_all___at___00JSP000690_allEdgesCritical_spec__1___boxed(lean_object* v_x_464_){
_start:
{
uint8_t v_res_465_; lean_object* v_r_466_; 
v_res_465_ = lp_jsp__000690__formalization_List_all___at___00JSP000690_allEdgesCritical_spec__1(v_x_464_);
lean_dec(v_x_464_);
v_r_466_ = lean_box(v_res_465_);
return v_r_466_;
}
}
static uint8_t _init_lp_jsp__000690__formalization_JSP000690_allEdgesCritical___closed__0(void){
_start:
{
lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_467_ = ((lean_object*)(lp_jsp__000690__formalization_JSP000690_E));
v___x_468_ = lp_jsp__000690__formalization_List_all___at___00JSP000690_allEdgesCritical_spec__1(v___x_467_);
return v___x_468_;
}
}
static uint8_t _init_lp_jsp__000690__formalization_JSP000690_allEdgesCritical(void){
_start:
{
uint8_t v___x_469_; 
v___x_469_ = lean_uint8_once(&lp_jsp__000690__formalization_JSP000690_allEdgesCritical___closed__0, &lp_jsp__000690__formalization_JSP000690_allEdgesCritical___closed__0_once, _init_lp_jsp__000690__formalization_JSP000690_allEdgesCritical___closed__0);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allVerticesCritical_spec__0(lean_object* v_v_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
if (lean_obj_tag(v_a_471_) == 0)
{
lean_object* v___x_473_; 
v___x_473_ = l_List_reverse___redArg(v_a_472_);
return v___x_473_;
}
else
{
lean_object* v_head_474_; lean_object* v_tail_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_495_; 
v_head_474_ = lean_ctor_get(v_a_471_, 0);
v_tail_475_ = lean_ctor_get(v_a_471_, 1);
v_isSharedCheck_495_ = !lean_is_exclusive(v_a_471_);
if (v_isSharedCheck_495_ == 0)
{
v___x_477_ = v_a_471_;
v_isShared_478_ = v_isSharedCheck_495_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_tail_475_);
lean_inc(v_head_474_);
lean_dec(v_a_471_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_495_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
uint8_t v___y_485_; lean_object* v_snd_487_; lean_object* v_fst_488_; lean_object* v_fst_489_; lean_object* v_snd_490_; uint8_t v___x_491_; 
v_snd_487_ = lean_ctor_get(v_head_474_, 1);
v_fst_488_ = lean_ctor_get(v_head_474_, 0);
v_fst_489_ = lean_ctor_get(v_snd_487_, 0);
v_snd_490_ = lean_ctor_get(v_snd_487_, 1);
v___x_491_ = lean_nat_dec_eq(v_fst_488_, v_v_470_);
if (v___x_491_ == 0)
{
uint8_t v___x_492_; 
v___x_492_ = lean_nat_dec_eq(v_fst_489_, v_v_470_);
if (v___x_492_ == 0)
{
uint8_t v___x_493_; 
v___x_493_ = lean_nat_dec_eq(v_snd_490_, v_v_470_);
if (v___x_493_ == 0)
{
goto v___jp_479_;
}
else
{
v___y_485_ = v___x_492_;
goto v___jp_484_;
}
}
else
{
v___y_485_ = v___x_491_;
goto v___jp_484_;
}
}
else
{
lean_del_object(v___x_477_);
lean_dec(v_head_474_);
v_a_471_ = v_tail_475_;
goto _start;
}
v___jp_479_:
{
lean_object* v___x_481_; 
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 1, v_a_472_);
v___x_481_ = v___x_477_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_head_474_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v_a_472_);
v___x_481_ = v_reuseFailAlloc_483_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
v_a_471_ = v_tail_475_;
v_a_472_ = v___x_481_;
goto _start;
}
}
v___jp_484_:
{
if (v___y_485_ == 0)
{
lean_del_object(v___x_477_);
lean_dec(v_head_474_);
v_a_471_ = v_tail_475_;
goto _start;
}
else
{
goto v___jp_479_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allVerticesCritical_spec__0___boxed(lean_object* v_v_496_, lean_object* v_a_497_, lean_object* v_a_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allVerticesCritical_spec__0(v_v_496_, v_a_497_, v_a_498_);
lean_dec(v_v_496_);
return v_res_499_;
}
}
LEAN_EXPORT uint8_t lp_jsp__000690__formalization_List_all___at___00JSP000690_allVerticesCritical_spec__1(lean_object* v_x_500_){
_start:
{
if (lean_obj_tag(v_x_500_) == 0)
{
uint8_t v___x_501_; 
v___x_501_ = 1;
return v___x_501_;
}
else
{
lean_object* v_head_502_; lean_object* v_tail_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v_Ev_506_; uint8_t v___x_507_; 
v_head_502_ = lean_ctor_get(v_x_500_, 0);
v_tail_503_ = lean_ctor_get(v_x_500_, 1);
v___x_504_ = ((lean_object*)(lp_jsp__000690__formalization_JSP000690_E));
v___x_505_ = lean_box(0);
v_Ev_506_ = lp_jsp__000690__formalization_List_filterTR_loop___at___00JSP000690_allVerticesCritical_spec__0(v_head_502_, v___x_504_, v___x_505_);
v___x_507_ = lp_jsp__000690__formalization_JSP000690_anyProper2Coloring(v_Ev_506_);
lean_dec(v_Ev_506_);
if (v___x_507_ == 0)
{
return v___x_507_;
}
else
{
v_x_500_ = v_tail_503_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_jsp__000690__formalization_List_all___at___00JSP000690_allVerticesCritical_spec__1___boxed(lean_object* v_x_509_){
_start:
{
uint8_t v_res_510_; lean_object* v_r_511_; 
v_res_510_ = lp_jsp__000690__formalization_List_all___at___00JSP000690_allVerticesCritical_spec__1(v_x_509_);
lean_dec(v_x_509_);
v_r_511_ = lean_box(v_res_510_);
return v_r_511_;
}
}
static uint8_t _init_lp_jsp__000690__formalization_JSP000690_allVerticesCritical___closed__0(void){
_start:
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = ((lean_object*)(lp_jsp__000690__formalization_JSP000690_V));
v___x_513_ = lp_jsp__000690__formalization_List_all___at___00JSP000690_allVerticesCritical_spec__1(v___x_512_);
return v___x_513_;
}
}
static uint8_t _init_lp_jsp__000690__formalization_JSP000690_allVerticesCritical(void){
_start:
{
uint8_t v___x_514_; 
v___x_514_ = lean_uint8_once(&lp_jsp__000690__formalization_JSP000690_allVerticesCritical___closed__0, &lp_jsp__000690__formalization_JSP000690_allVerticesCritical___closed__0_once, _init_lp_jsp__000690__formalization_JSP000690_allVerticesCritical___closed__0);
return v___x_514_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_jsp__000690__formalization_JSP__000690(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_jsp__000690__formalization_JSP000690_minDegree = _init_lp_jsp__000690__formalization_JSP000690_minDegree();
lean_mark_persistent(lp_jsp__000690__formalization_JSP000690_minDegree);
lp_jsp__000690__formalization_JSP000690_proper3Coloring = _init_lp_jsp__000690__formalization_JSP000690_proper3Coloring();
lp_jsp__000690__formalization_JSP000690_allEdgesCritical = _init_lp_jsp__000690__formalization_JSP000690_allEdgesCritical();
lp_jsp__000690__formalization_JSP000690_allVerticesCritical = _init_lp_jsp__000690__formalization_JSP000690_allVerticesCritical();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
