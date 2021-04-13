gui_open_window Wave
gui_sg_create dcm1_group
gui_list_add_group -id Wave.1 {dcm1_group}
gui_sg_addsignal -group dcm1_group {dcm1_tb.test_phase}
gui_set_radix -radix {ascii} -signals {dcm1_tb.test_phase}
gui_sg_addsignal -group dcm1_group {{Input_clocks}} -divider
gui_sg_addsignal -group dcm1_group {dcm1_tb.CLK_IN1}
gui_sg_addsignal -group dcm1_group {{Output_clocks}} -divider
gui_sg_addsignal -group dcm1_group {dcm1_tb.dut.clk}
gui_list_expand -id Wave.1 dcm1_tb.dut.clk
gui_sg_addsignal -group dcm1_group {{Counters}} -divider
gui_sg_addsignal -group dcm1_group {dcm1_tb.COUNT}
gui_sg_addsignal -group dcm1_group {dcm1_tb.dut.counter}
gui_list_expand -id Wave.1 dcm1_tb.dut.counter
gui_zoom -window Wave.1 -full
