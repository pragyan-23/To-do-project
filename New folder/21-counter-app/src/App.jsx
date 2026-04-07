import React, { useState } from 'react'

const App = () => {

  const [count, setCount] = useState(0);
  return (
    <div className='min-h-screen flex items-center justify-center bg-linear-to-br from-teal-400 via-cyan-300 to-blue-400'>
      <div className='bg-white rounded-3xl shadow-2xl p-12 flex flex-col items-center gap-8 w-80'>
        <h1 className='text-2xl font-bold text-gray-800 tracking-tight'>Counter App</h1>
        <span
          className={`text-7xl font-bold transition-colors duration-300 ${count < 0 ? "text-red-500"
              : count > 0 ? "text-green-500"
                : "text-gray-800"
            }`}
        >
          {count}
        </span>
        <div className='flex items-center gap-4'>
          <button onClick={() => setCount(count - 1)}
            className='w-14 h-14 rounded-xl bg-red-500 hover:bg-red-600 active:scale-95 text-white text-2xl font-bold transition-all duration-150 shadow-md'>
            -
          </button>

          <button onClick={() => setCount(0)}
            className='px-6 h-14 rounded-xl bg-blue-500 hover:bg-blue-600 active:scale-95 text-white text-sm font-semibold tracking-wide transition-all duration-150 shadow-md'
          >
            Reset
          </button>

          <button onClick={() => setCount(count + 1)}
            className='w-14 h-14 rounded-xl bg-green-500 hover:bg-green-600 active:scale-95 text-white text-2xl font-bold transition-all duration-150 shadow-md'>
            +
          </button>
        </div>


      </div>
    </div >
  )
}

export default App
