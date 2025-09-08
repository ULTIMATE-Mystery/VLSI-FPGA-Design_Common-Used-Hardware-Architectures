
top_module = tb
exe_name   = V$(top_module)
verilator_option = -cc --binary --trace -j -Wno-lint


sim:
	verilator $(verilator_option) --top-module $(top_module) -f flist.f
	./obj_dir/$(exe_name)

clean:
	rm -rf ./obj_dir

