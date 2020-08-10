
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name _BuildYourOwnZ80Computer -dir "C:/Users/Joe/Desktop/mist-git/FPGAmstrad/FPGAmstrad/BuildYourOwnZ80Computer/planAhead_run_1" -part xc6slx9tqg144-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Joe/Desktop/mist-git/FPGAmstrad/FPGAmstrad/BuildYourOwnZ80Computer/amstrad_switch_z80_vga_sd.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Joe/Desktop/mist-git/FPGAmstrad/FPGAmstrad/BuildYourOwnZ80Computer} {ipcore_dir} }
add_files [list {ipcore_dir/PALETTE_RAM2.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/xilinx_syncram_dp.ncf}] -fileset [get_property constrset [current_run]]
set_param project.pinAheadLayout  yes
set_property target_constrs_file "pines_zxuno_v4_2mb_ext.ucf" [current_fileset -constrset]
add_files [list {pines_zxuno_v4_2mb_ext.ucf}] -fileset [get_property constrset [current_run]]
link_design
