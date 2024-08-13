using System.Runtime.InteropServices;

namespace Gui
{
    class SharedLibWrapper
    {
        //[DllImport("SHAREDLIB.dll", CallingConvention = CallingConvention.Cdecl)]
        //static public extern IntPtr CSharedLib_Create();

        [DllImport("SHAREDLIB.dll", CallingConvention = CallingConvention.Cdecl)]
        static public extern void CSharedLib_work(string[] listOfStrings, uint length);

        [DllImport("SHAREDLIB.dll", CallingConvention = CallingConvention.Cdecl)]
        static public extern void CSharedLib_work2(string str);

        //[DllImport("SHAREDLIB.dll", CallingConvention = CallingConvention.Cdecl)]
        //static public extern void CSharedLib_Delete(IntPtr value);
    }
}
