
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name NES_ZXUNO -dir "C:/hdl/sources/nes/xilinx/planAhead_run_1" -part xc6slx25ftg256-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/hdl/sources/nes/xilinx/NES_ZXUNO.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/hdl/sources/nes/xilinx} {ipcore_dir} }
add_files [list {ipcore_dir/DualPortRAM_Block.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/fifo_loader.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ram2k.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/ram8k.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "C:/hdl/sources/nes/src/ZXDOS_LX25.ucf" [current_fileset -constrset]
add_files [list {C:/hdl/sources/nes/src/ZXDOS_LX25.ucf}] -fileset [get_property constrset [current_run]]
link_design
