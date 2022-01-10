package by.citech.library

import kotlinx.coroutines.*
import kotlin.time.Duration
import kotlin.time.ExperimentalTime

class Test {

    val generic = Generic<String>(null)

    val map = mapOf(
        "a" to "b",
        "c" to "d"
    )
    val list = listOf("a", "b", "c", "d")
    val integer = 0

    private var counter = 0
    private var callback: TestCallback? = null

    @ExperimentalTime
    private val duration = Duration.milliseconds(50)

    fun delay() {
        CoroutineScope(Dispatchers.Default).launch {
            delay(5000)
            callback?.onCallback("delayed callback received")
        }
    }

    fun register(callback: TestCallback) {
        this.callback = callback
    }

    @ExperimentalTime
    fun durationMinus(minus: Long): Long {
        return duration.minus(Duration.milliseconds(minus)).inWholeMilliseconds
    }

    @ExperimentalTime
    fun durationPlus(plus: Long): Long {
        return duration.plus(Duration.milliseconds(plus)).inWholeMilliseconds
    }

    fun trigger() {
        callback?.onCallback("trigger ${counter++}")
    }

}
