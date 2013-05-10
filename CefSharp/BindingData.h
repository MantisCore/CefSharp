#include "Stdafx.h"
#pragma once

namespace CefSharp
{
	namespace Internals
	{
		namespace JavascriptBinding
		{
			private class BindingData : public CefBase
			{
			protected:
				gcroot<Object^> _obj;

			public:
				BindingData(Object^ obj)
				{
					_obj = obj;
				}

				Object^ Get()
				{
					return _obj;
				}

				IMPLEMENT_REFCOUNTING(BindingData);
			};
		}
	}
}