gui_open_window Wave
gui_sg_create PLL_clock_group
gui_list_add_group -id Wave.1 {PLL_clock_group}
gui_sg_addsignal -group PLL_clock_group {PLL_clock_tb.test_phase}
gui_set_radix -radix {ascii} -signals {PLL_clock_tb.test_phase}
gui_sg_addsignal -group PLL_clock_group {{Input_clocks}} -divider
gui_sg_addsignal -group PLL_clock_group {PLL_clock_tb.CLK_IN1}
gui_sg_addsignal -group PLL_clock_group {{Output_clocks}} -divider
gui_sg_addsignal -group PLL_clock_group {PLL_clock_tb.dut.clk}
gui_list_expand -id Wave.1 PLL_clock_tb.dut.clk
gui_sg_addsignal -group PLL_clock_group {{Counters}} -divider
gui_sg_addsignal -group PLL_clock_group {PLL_clock_tb.COUNT}
gui_sg_addsignal -group PLL_clock_group {PLL_clock_tb.dut.counter}
gui_list_expand -id Wave.1 PLL_clock_tb.dut.counter
gui_zoom -window Wave.1 -full
