package by.citech.library

import kotlinx.coroutines.*
import kotlin.time.Duration.Companion.milliseconds

class Test {

    val map = mapOf("a" to "b", "c" to "d")
    val list = listOf("a", "b", "c", "d")
    val integer = 0

    private var counter = 0
    private var callback: TestCallback? = null
    private val duration = 50.milliseconds
    private val delay = 5000.milliseconds

    fun delay() {
        CoroutineScope(Dispatchers.Default).launch {
            delay(delay.inWholeMilliseconds)
            callback?.onCallback("delayed callback received (and updated to v0.1.3!!)")
        }
    }

    fun register(callback: TestCallback) {
        this.callback = callback
    }

    fun durationMinus(minus: Long): Long {
        return duration.minus(minus.milliseconds).inWholeMilliseconds
    }

    fun durationPlus(plus: Long): Long {
        return duration.plus(plus.milliseconds).inWholeMilliseconds
    }

    fun trigger() {
        callback?.onCallback("trigger ${counter++}")
    }

}
