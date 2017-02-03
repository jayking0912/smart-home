# -*- coding: utf-8 -*-
"""
voicetools library
=====================


"""
__title__ = 'voicetools'
__version__ = '0.0.1'
__author__ = 'namco1992'
__license__ = 'Apache 2.0'

from voicetools.api import Wolfram, TuringRobot, BaiduVoice
from voicetools.clients import BaseClient
import voicetools.utils
from voicetools.exceptions import (
    APIError, RespError, RecognitionError, VerifyError, QuotaError)
