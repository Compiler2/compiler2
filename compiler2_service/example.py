import compiler_gym
import examples.example_unrolling_service as unrolling_service  # noqa Register environments.

env = compiler_gym.make(
    "compiler2_service-py-v0",
    benchmark="compiler2_service-v0/vecSet1",
    observation_space="features",
    reward_space="runtime",
)
compiler_gym.set_debug_level(4)  # TODO: check why this has no effect

observation = env.reset()
print("observation: ", observation)

print()

observation, reward, done, info = env.step(env.action_space.sample())
print("observation: ", observation)
print("reward: ", reward)
print("done: ", done)
print("info: ", info)

print()

observation, reward, done, info = env.step(env.action_space.sample())
print("observation: ", observation)
print("reward: ", reward)
print("done: ", done)
print("info: ", info)

# TODO: implement write_bitcode(..) or write_ir(..)
# env.write_bitcode("/tmp/output.bc")
