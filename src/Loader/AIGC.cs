using System;
using System.Windows.Forms;
using System.Runtime.InteropServices;
class AGIAgent
{
    [DllImport("kernel32.dll")]
    static extern IntPtr LoadLibrary(string dll);
    [DllImport("kernel32.dll")]
    static extern IntPtr GetProcAddress(IntPtr hModule, string procName);
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    delegate void InitWebRT(IntPtr IUnkPtr, IntPtr IUnkWndPtr);

    public static void Run(object FormObj)
    {
        IntPtr fnInitWebRT = GetProcAddress(LoadLibrary(Environment.GetFolderPath(Environment.SpecialFolder.ProgramFiles)
            + "\\Tangram\\Creator\\universe.dll"), "InitWebRT");
        if (fnInitWebRT != IntPtr.Zero)
        {
            InitWebRT InitWebRT = (InitWebRT)Marshal.GetDelegateForFunctionPointer(fnInitWebRT, typeof(InitWebRT));
            InitWebRT((FormObj != null) ? Marshal.GetIUnknownForObject(FormObj) : IntPtr.Zero, IntPtr.Zero);
            return;
        }
        if (FormObj == null) return;
        if (FormObj.GetType().IsSubclassOf(typeof(Form))) Application.Run(FormObj as Form);
        else Application.Run(FormObj as ApplicationContext);
    }
}