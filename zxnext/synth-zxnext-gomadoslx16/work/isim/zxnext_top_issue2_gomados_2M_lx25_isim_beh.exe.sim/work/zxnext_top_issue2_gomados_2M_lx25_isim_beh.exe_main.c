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

char *IEEE_P_1242562249;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *WORK_P_0155362693;
char *WORK_P_3246423575;
char *STD_TEXTIO;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *UNISIM_P_0947159679;
char *VL_P_2533777724;
char *IEEE_P_2717149903;
char *IEEE_P_1367372525;
char *UNISIM_P_3222816464;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_16541823861846354283_2073120511_init();
    unisims_ver_m_02760857255181855774_2593380106_init();
    unisims_ver_m_10756824001551653569_1216028268_init();
    work_m_16776818305801388821_0563599489_init();
    work_m_15803929109180023175_2026726116_init();
    work_m_08977370731017262872_3589057620_init();
    unisims_ver_m_10923636775739984753_3342287592_init();
    work_m_06823190561096978504_2122241069_init();
    work_m_15648958806951637572_2982902871_init();
    work_m_10585587362501576395_2456432743_init();
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    unisim_p_0947159679_init();
    work_p_0155362693_init();
    vl_p_2533777724_init();
    work_a_0952863049_1516540902_init();
    work_a_1983712816_1516540902_init();
    work_a_1936857269_1516540902_init();
    unisim_a_3078160916_2214635637_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    unisim_a_4197988528_1633177022_init();
    unisim_a_0862152824_1304531437_init();
    work_a_2611777111_3212880686_init();
    work_a_1976657487_1516540902_init();
    work_a_1889431754_1516540902_init();
    work_a_2520446699_1516540902_init();
    work_a_3188038294_1516540902_init();
    work_a_0397006837_2372691052_init();
    work_a_2216420078_1516540902_init();
    work_a_2236515651_1516540902_init();
    work_a_0145512619_1516540902_init();
    work_a_2161639999_1516540902_init();
    work_a_4194774773_1516540902_init();
    work_p_3246423575_init();
    work_a_3180836370_1516540902_init();
    work_a_1194659290_1516540902_init();
    work_a_0254010125_1516540902_init();
    work_a_2475286139_1516540902_init();
    work_a_3349738830_1349344227_init();
    work_a_3003929895_1516540902_init();
    work_a_3166994500_1516540902_init();
    work_a_1924166274_1516540902_init();
    work_a_2239630122_1516540902_init();
    work_a_3563473620_1516540902_init();
    work_a_4014363745_1516540902_init();
    work_a_3546495410_1516540902_init();
    work_a_2862134636_1516540902_init();
    work_a_0880309829_1516540902_init();
    work_a_0653871738_1516540902_init();
    work_a_0590943615_1516540902_init();
    work_a_2715291009_1516540902_init();
    xilinxcorelib_a_3841820124_3212880686_init();
    work_a_4065650834_1722003785_init();
    xilinxcorelib_a_3057602146_3212880686_init();
    work_a_0412677043_0323191412_init();
    ieee_p_3564397177_init();
    xilinxcorelib_a_3302732785_2959432447_init();
    xilinxcorelib_a_2210940170_2959432447_init();
    xilinxcorelib_a_0389312640_1709443946_init();
    xilinxcorelib_a_2585872004_0543512595_init();
    xilinxcorelib_a_0334595836_3212880686_init();
    work_a_4226697630_2639350031_init();
    work_a_2226811077_1516540902_init();
    xilinxcorelib_a_3016846904_3212880686_init();
    work_a_0577712365_3971404118_init();
    work_a_2036940265_1516540902_init();
    work_a_0407059637_1516540902_init();
    work_a_3325425122_1516540902_init();
    work_a_4286761183_1516540902_init();
    work_a_1356503835_1516540902_init();
    work_a_0906582295_1516540902_init();
    work_a_3210459292_1516540902_init();
    work_a_4168107041_1516540902_init();
    work_a_1604631591_1516540902_init();
    work_a_0024911174_1516540902_init();
    work_a_1595413420_1516540902_init();
    work_a_3979923388_1516540902_init();
    work_a_0589117782_2372691052_init();
    work_a_2813482373_1516540902_init();
    work_a_1894573988_1516540902_init();
    work_a_3660581601_1516540902_init();


    xsi_register_tops("work_a_3660581601_1516540902");
    xsi_register_tops("work_m_16541823861846354283_2073120511");

    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_0155362693 = xsi_get_engine_memory("work_p_0155362693");
    WORK_P_3246423575 = xsi_get_engine_memory("work_p_3246423575");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    VL_P_2533777724 = xsi_get_engine_memory("vl_p_2533777724");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
