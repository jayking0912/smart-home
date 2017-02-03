# coding: utf-8
import os
import sys
import time


HOME = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.append(HOME)


from raspi_assistant.settings import GPIOConfig
from raspi_assistant.utils import init_logging_handler
from raspi_assistant.handler import BaseHandler

logger = init_logging_handler()


# 初始化
handler = BaseHandler()

handler.worker()
time.sleep(0.5)
