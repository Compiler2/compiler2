import compiler_gym as cg

env = cg.make("llvm-v0")

benchmark = env.make_benchmark('/home/dx4/tools/compiler2/compiler2_service/benchmarks/cpu-benchmarks/simple_pow.c')

env.reset(benchmark=benchmark)

breakpoint()
env.observation['TextSizeBytes']

env.observation['Programl']