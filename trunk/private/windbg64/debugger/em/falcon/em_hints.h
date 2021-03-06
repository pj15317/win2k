#ifndef EM_HINTS_H
#define EM_HINTS_H

typedef enum EM_branch_hint_e
{
    EM_branch_hint_none,
    EM_branch_hint_few_dc_dc,
    EM_branch_hint_few_dc_dc_imp,
    EM_branch_hint_many_dc_dc,
    EM_branch_hint_many_dc_dc_imp,
    EM_branch_hint_sptk_few_dc_dc,
    EM_branch_hint_sptk_few_dc_dc_imp,
    EM_branch_hint_sptk_many_dc_dc,
    EM_branch_hint_sptk_many_dc_dc_imp,
    EM_branch_hint_dptk_few_dc_dc,
    EM_branch_hint_dptk_few_dc_dc_imp,
    EM_branch_hint_dptk_many_dc_dc,
    EM_branch_hint_dptk_many_dc_dc_imp,
    EM_branch_hint_few_dc_nt,
    EM_branch_hint_few_dc_nt_imp,
    EM_branch_hint_many_dc_nt,
    EM_branch_hint_many_dc_nt_imp,
    EM_branch_hint_sptk_few_dc_nt,
    EM_branch_hint_sptk_few_dc_nt_imp,
    EM_branch_hint_sptk_many_dc_nt,
    EM_branch_hint_sptk_many_dc_nt_imp,
    EM_branch_hint_dptk_few_dc_nt,
    EM_branch_hint_dptk_few_dc_nt_imp,
    EM_branch_hint_dptk_many_dc_nt,
    EM_branch_hint_dptk_many_dc_nt_imp,
    EM_branch_hint_few_tk_dc,
    EM_branch_hint_few_tk_dc_imp,
    EM_branch_hint_many_tk_dc,
    EM_branch_hint_many_tk_dc_imp,
    EM_branch_hint_sptk_few_tk_dc,
    EM_branch_hint_sptk_few_tk_dc_imp,
    EM_branch_hint_sptk_many_tk_dc,
    EM_branch_hint_sptk_many_tk_dc_imp,
    EM_branch_hint_dptk_few_tk_dc,
    EM_branch_hint_dptk_few_tk_dc_imp,
    EM_branch_hint_dptk_many_tk_dc,
    EM_branch_hint_dptk_many_tk_dc_imp,
    EM_branch_hint_few_tk_tk,
    EM_branch_hint_few_tk_tk_imp,
    EM_branch_hint_many_tk_tk,
    EM_branch_hint_many_tk_tk_imp,
    EM_branch_hint_sptk_few_tk_tk,
    EM_branch_hint_sptk_few_tk_tk_imp,
    EM_branch_hint_sptk_many_tk_tk,
    EM_branch_hint_sptk_many_tk_tk_imp,
    EM_branch_hint_dptk_few_tk_tk,
    EM_branch_hint_dptk_few_tk_tk_imp,
    EM_branch_hint_dptk_many_tk_tk,
    EM_branch_hint_dptk_many_tk_tk_imp,
    EM_branch_hint_few_tk_nt,
    EM_branch_hint_few_tk_nt_imp,
    EM_branch_hint_many_tk_nt,
    EM_branch_hint_many_tk_nt_imp,
    EM_branch_hint_sptk_few_tk_nt,
    EM_branch_hint_sptk_few_tk_nt_imp,
    EM_branch_hint_sptk_many_tk_nt,
    EM_branch_hint_sptk_many_tk_nt_imp,
    EM_branch_hint_dptk_few_tk_nt,
    EM_branch_hint_dptk_few_tk_nt_imp,
    EM_branch_hint_dptk_many_tk_nt,
    EM_branch_hint_dptk_many_tk_nt_imp,
    EM_branch_hint_few_nt_dc,
    EM_branch_hint_few_nt_dc_imp,
    EM_branch_hint_many_nt_dc,
    EM_branch_hint_many_nt_dc_imp,
    EM_branch_hint_sptk_few_nt_dc,
    EM_branch_hint_sptk_few_nt_dc_imp,
    EM_branch_hint_sptk_many_nt_dc,
    EM_branch_hint_sptk_many_nt_dc_imp,
    EM_branch_hint_dptk_few_nt_dc,
    EM_branch_hint_dptk_few_nt_dc_imp,
    EM_branch_hint_dptk_many_nt_dc,
    EM_branch_hint_dptk_many_nt_dc_imp,
    EM_branch_hint_few_nt_tk,
    EM_branch_hint_few_nt_tk_imp,
    EM_branch_hint_many_nt_tk,
    EM_branch_hint_many_nt_tk_imp,
    EM_branch_hint_sptk_few_nt_tk,
    EM_branch_hint_sptk_few_nt_tk_imp,
    EM_branch_hint_sptk_many_nt_tk,
    EM_branch_hint_sptk_many_nt_tk_imp,
    EM_branch_hint_dptk_few_nt_tk,
    EM_branch_hint_dptk_few_nt_tk_imp,
    EM_branch_hint_dptk_many_nt_tk,
    EM_branch_hint_dptk_many_nt_tk_imp,
    EM_branch_hint_few_nt_nt,
    EM_branch_hint_few_nt_nt_imp,
    EM_branch_hint_many_nt_nt,
    EM_branch_hint_many_nt_nt_imp,
    EM_branch_hint_sptk_few_nt_nt,
    EM_branch_hint_sptk_few_nt_nt_imp,
    EM_branch_hint_sptk_many_nt_nt,
    EM_branch_hint_sptk_many_nt_nt_imp,
    EM_branch_hint_dptk_few_nt_nt,
    EM_branch_hint_dptk_few_nt_nt_imp,
    EM_branch_hint_dptk_many_nt_nt,
    EM_branch_hint_dptk_many_nt_nt_imp,
    EM_branch_hint_ret_few_dc_dc,
    EM_branch_hint_ret_few_dc_dc_imp,
    EM_branch_hint_ret_many_dc_dc,
    EM_branch_hint_ret_many_dc_dc_imp,
    EM_branch_hint_ret_sptk_few_dc_dc,
    EM_branch_hint_ret_sptk_few_dc_dc_imp,
    EM_branch_hint_ret_sptk_many_dc_dc,
    EM_branch_hint_ret_sptk_many_dc_dc_imp,
    EM_branch_hint_ret_dptk_few_dc_dc,
    EM_branch_hint_ret_dptk_few_dc_dc_imp,
    EM_branch_hint_ret_dptk_many_dc_dc,
    EM_branch_hint_ret_dptk_many_dc_dc_imp,
    EM_branch_hint_ret_few_dc_nt,
    EM_branch_hint_ret_few_dc_nt_imp,
    EM_branch_hint_ret_many_dc_nt,
    EM_branch_hint_ret_many_dc_nt_imp,
    EM_branch_hint_ret_sptk_few_dc_nt,
    EM_branch_hint_ret_sptk_few_dc_nt_imp,
    EM_branch_hint_ret_sptk_many_dc_nt,
    EM_branch_hint_ret_sptk_many_dc_nt_imp,
    EM_branch_hint_ret_dptk_few_dc_nt,
    EM_branch_hint_ret_dptk_few_dc_nt_imp,
    EM_branch_hint_ret_dptk_many_dc_nt,
    EM_branch_hint_ret_dptk_many_dc_nt_imp,
    EM_branch_hint_ret_few_tk_dc,
    EM_branch_hint_ret_few_tk_dc_imp,
    EM_branch_hint_ret_many_tk_dc,
    EM_branch_hint_ret_many_tk_dc_imp,
    EM_branch_hint_ret_sptk_few_tk_dc,
    EM_branch_hint_ret_sptk_few_tk_dc_imp,
    EM_branch_hint_ret_sptk_many_tk_dc,
    EM_branch_hint_ret_sptk_many_tk_dc_imp,
    EM_branch_hint_ret_dptk_few_tk_dc,
    EM_branch_hint_ret_dptk_few_tk_dc_imp,
    EM_branch_hint_ret_dptk_many_tk_dc,
    EM_branch_hint_ret_dptk_many_tk_dc_imp,
    EM_branch_hint_ret_few_tk_tk,
    EM_branch_hint_ret_few_tk_tk_imp,
    EM_branch_hint_ret_many_tk_tk,
    EM_branch_hint_ret_many_tk_tk_imp,
    EM_branch_hint_ret_sptk_few_tk_tk,
    EM_branch_hint_ret_sptk_few_tk_tk_imp,
    EM_branch_hint_ret_sptk_many_tk_tk,
    EM_branch_hint_ret_sptk_many_tk_tk_imp,
    EM_branch_hint_ret_dptk_few_tk_tk,
    EM_branch_hint_ret_dptk_few_tk_tk_imp,
    EM_branch_hint_ret_dptk_many_tk_tk,
    EM_branch_hint_ret_dptk_many_tk_tk_imp,
    EM_branch_hint_ret_few_tk_nt,
    EM_branch_hint_ret_few_tk_nt_imp,
    EM_branch_hint_ret_many_tk_nt,
    EM_branch_hint_ret_many_tk_nt_imp,
    EM_branch_hint_ret_sptk_few_tk_nt,
    EM_branch_hint_ret_sptk_few_tk_nt_imp,
    EM_branch_hint_ret_sptk_many_tk_nt,
    EM_branch_hint_ret_sptk_many_tk_nt_imp,
    EM_branch_hint_ret_dptk_few_tk_nt,
    EM_branch_hint_ret_dptk_few_tk_nt_imp,
    EM_branch_hint_ret_dptk_many_tk_nt,
    EM_branch_hint_ret_dptk_many_tk_nt_imp,
    EM_branch_hint_ret_few_nt_dc,
    EM_branch_hint_ret_few_nt_dc_imp,
    EM_branch_hint_ret_many_nt_dc,
    EM_branch_hint_ret_many_nt_dc_imp,
    EM_branch_hint_ret_sptk_few_nt_dc,
    EM_branch_hint_ret_sptk_few_nt_dc_imp,
    EM_branch_hint_ret_sptk_many_nt_dc,
    EM_branch_hint_ret_sptk_many_nt_dc_imp,
    EM_branch_hint_ret_dptk_few_nt_dc,
    EM_branch_hint_ret_dptk_few_nt_dc_imp,
    EM_branch_hint_ret_dptk_many_nt_dc,
    EM_branch_hint_ret_dptk_many_nt_dc_imp,
    EM_branch_hint_ret_few_nt_tk,
    EM_branch_hint_ret_few_nt_tk_imp,
    EM_branch_hint_ret_many_nt_tk,
    EM_branch_hint_ret_many_nt_tk_imp,
    EM_branch_hint_ret_sptk_few_nt_tk,
    EM_branch_hint_ret_sptk_few_nt_tk_imp,
    EM_branch_hint_ret_sptk_many_nt_tk,
    EM_branch_hint_ret_sptk_many_nt_tk_imp,
    EM_branch_hint_ret_dptk_few_nt_tk,
    EM_branch_hint_ret_dptk_few_nt_tk_imp,
    EM_branch_hint_ret_dptk_many_nt_tk,
    EM_branch_hint_ret_dptk_many_nt_tk_imp,
    EM_branch_hint_ret_few_nt_nt,
    EM_branch_hint_ret_few_nt_nt_imp,
    EM_branch_hint_ret_many_nt_nt,
    EM_branch_hint_ret_many_nt_nt_imp,
    EM_branch_hint_ret_sptk_few_nt_nt,
    EM_branch_hint_ret_sptk_few_nt_nt_imp,
    EM_branch_hint_ret_sptk_many_nt_nt,
    EM_branch_hint_ret_sptk_many_nt_nt_imp,
    EM_branch_hint_ret_dptk_few_nt_nt,
    EM_branch_hint_ret_dptk_few_nt_nt_imp,
    EM_branch_hint_ret_dptk_many_nt_nt,
    EM_branch_hint_ret_dptk_many_nt_nt_imp,
    EM_branch_hint_spnt_few,
    EM_branch_hint_spnt_many,
    EM_branch_hint_sptk_few,
    EM_branch_hint_sptk_many,
    EM_branch_hint_dpnt_few,
    EM_branch_hint_dpnt_many,
    EM_branch_hint_dptk_few,
    EM_branch_hint_dptk_many,
    EM_branch_hint_spnt_few_clr,
    EM_branch_hint_spnt_many_clr,
    EM_branch_hint_sptk_few_clr,
    EM_branch_hint_sptk_many_clr,
    EM_branch_hint_dpnt_few_clr,
    EM_branch_hint_dpnt_many_clr,
    EM_branch_hint_dptk_few_clr,
    EM_branch_hint_dptk_many_clr,
    EM_branch_hint_loop_few_dc_dc,
    EM_branch_hint_loop_few_dc_dc_imp,
    EM_branch_hint_loop_many_dc_dc,
    EM_branch_hint_loop_many_dc_dc_imp,
    EM_branch_hint_exit_few_dc_dc,
    EM_branch_hint_exit_few_dc_dc_imp,
    EM_branch_hint_exit_many_dc_dc,
    EM_branch_hint_exit_many_dc_dc_imp,
    EM_branch_hint_loop_few_dc_nt,
    EM_branch_hint_loop_few_dc_nt_imp,
    EM_branch_hint_loop_many_dc_nt,
    EM_branch_hint_loop_many_dc_nt_imp,
    EM_branch_hint_exit_few_dc_nt,
    EM_branch_hint_exit_few_dc_nt_imp,
    EM_branch_hint_exit_many_dc_nt,
    EM_branch_hint_exit_many_dc_nt_imp,
    EM_branch_hint_loop_few_tk_dc,
    EM_branch_hint_loop_few_tk_dc_imp,
    EM_branch_hint_loop_many_tk_dc,
    EM_branch_hint_loop_many_tk_dc_imp,
    EM_branch_hint_exit_few_tk_dc,
    EM_branch_hint_exit_few_tk_dc_imp,
    EM_branch_hint_exit_many_tk_dc,
    EM_branch_hint_exit_many_tk_dc_imp,
    EM_branch_hint_loop_few_tk_tk,
    EM_branch_hint_loop_few_tk_tk_imp,
    EM_branch_hint_loop_many_tk_tk,
    EM_branch_hint_loop_many_tk_tk_imp,
    EM_branch_hint_exit_few_tk_tk,
    EM_branch_hint_exit_few_tk_tk_imp,
    EM_branch_hint_exit_many_tk_tk,
    EM_branch_hint_exit_many_tk_tk_imp,
    EM_branch_hint_loop_few_tk_nt,
    EM_branch_hint_loop_few_tk_nt_imp,
    EM_branch_hint_loop_many_tk_nt,
    EM_branch_hint_loop_many_tk_nt_imp,
    EM_branch_hint_exit_few_tk_nt,
    EM_branch_hint_exit_few_tk_nt_imp,
    EM_branch_hint_exit_many_tk_nt,
    EM_branch_hint_exit_many_tk_nt_imp,
    EM_branch_hint_loop_few_nt_dc,
    EM_branch_hint_loop_few_nt_dc_imp,
    EM_branch_hint_loop_many_nt_dc,
    EM_branch_hint_loop_many_nt_dc_imp,
    EM_branch_hint_exit_few_nt_dc,
    EM_branch_hint_exit_few_nt_dc_imp,
    EM_branch_hint_exit_many_nt_dc,
    EM_branch_hint_exit_many_nt_dc_imp,
    EM_branch_hint_loop_few_nt_tk,
    EM_branch_hint_loop_few_nt_tk_imp,
    EM_branch_hint_loop_many_nt_tk,
    EM_branch_hint_loop_many_nt_tk_imp,
    EM_branch_hint_exit_few_nt_tk,
    EM_branch_hint_exit_few_nt_tk_imp,
    EM_branch_hint_exit_many_nt_tk,
    EM_branch_hint_exit_many_nt_tk_imp,
    EM_branch_hint_loop_few_nt_nt,
    EM_branch_hint_loop_few_nt_nt_imp,
    EM_branch_hint_loop_many_nt_nt,
    EM_branch_hint_loop_many_nt_nt_imp,
    EM_branch_hint_exit_few_nt_nt,
    EM_branch_hint_exit_few_nt_nt_imp,
    EM_branch_hint_exit_many_nt_nt,
    EM_branch_hint_exit_many_nt_nt_imp,
    EM_branch_hint_last
} EM_branch_hint_t;

typedef enum EM_memory_access_hint_e
{
    EM_memory_access_hint_none,
    EM_memory_access_hint_nt1,
    EM_memory_access_hint_nta,
    EM_memory_access_hint_last
} EM_memory_access_hint_t;


#endif  /* EM_HINTS_H */
