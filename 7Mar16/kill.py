import os
import signal
print os.getpid()
3828
os.kill(3828, signal.SIGTERM)
