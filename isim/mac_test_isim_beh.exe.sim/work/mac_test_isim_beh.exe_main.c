/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003674247953_4186635533_init();
    work_m_00000000002464205777_2988409229_init();
    work_m_00000000000369537935_0956179041_init();
    work_m_00000000000011805200_1101255801_init();
    work_m_00000000003930862067_2092158628_init();
    work_m_00000000000430100683_2027056496_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000430100683_2027056496");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
